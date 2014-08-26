﻿#region License
/* 
* Copyright (C) 1999-2014 John Källén.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; see the file COPYING.  If not, write to
* the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#endregion

using Decompiler.Core;
using Decompiler.Core.Services;
using Decompiler.Gui.Controls;
using Decompiler.Gui.Forms;
using Decompiler.Gui.Windows;
using Decompiler.Gui.Windows.Forms;
using Decompiler.Core.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using System.Windows.Forms;

namespace Decompiler.Gui
{
    /// <summary>
    /// Decouples the creation of services, so that proper unit testing can be done.
    /// </summary>
    public interface IServiceFactory
    {
        IArchiveBrowserService CreateArchiveBrowserService();
        IDecompilerConfigurationService CreateDecompilerConfiguration();
        DecompilerEventListener CreateDecompilerEventListener();
        IDecompilerService CreateDecompilerService();
        IDiagnosticsService CreateDiagnosticsService(ListView list);
        IDisassemblyViewService CreateDisassemblyViewService();
        IFileSystemService CreateFileSystemService();
        InitialPageInteractor CreateInitialPageInteractor();
        ILoadedPageInteractor CreateLoadedPageInteractor();
        ILowLevelViewService CreateMemoryViewService();
        IProjectBrowserService CreateProjectBrowserService(ITreeView treeView);
        IDecompilerShellUiService CreateShellUiService(IMainForm form, DecompilerMenus dm);
        ITabControlHostService CreateTabControlHost(TabControl tabControl);
        ITypeLibraryLoaderService CreateTypeLibraryLoaderService();
        IUiPreferencesService CreateUiPreferencesService();
    }

    public class ServiceFactory : IServiceFactory
    {
        private IServiceProvider services;

        public ServiceFactory(IServiceProvider services)
        {
            this.services = services;
        }

        public IArchiveBrowserService CreateArchiveBrowserService()
        {
            return new ArchiveBrowserService(services);
        }

        public IDecompilerConfigurationService CreateDecompilerConfiguration()
        {
            return new DecompilerConfiguration();
        }

        public IDiagnosticsService CreateDiagnosticsService(ListView list)
        {
            var d = new DiagnosticsInteractor();
            d.Attach(list);
            return d;
        }

        public IDecompilerShellUiService CreateShellUiService(IMainForm form, DecompilerMenus dm)
        {
            return new DecompilerShellUiService((Form)form, dm, form.OpenFileDialog, form.SaveFileDialog, services);
        }

        public ILowLevelViewService CreateMemoryViewService()
        {
            return new LowLevelViewServiceImpl(services);
        }

        public IDisassemblyViewService CreateDisassemblyViewService()
        {
            return new DisassemblyViewServiceImpl(services);
        }

        public IDecompilerService CreateDecompilerService()
        {
            return new DecompilerService();
        }

        public DecompilerEventListener CreateDecompilerEventListener()
        {
            return new WindowsDecompilerEventListener(services);
        }

        public InitialPageInteractor CreateInitialPageInteractor()
        {
            return new InitialPageInteractorImpl(this.services);
        }

        public ILoadedPageInteractor CreateLoadedPageInteractor()
        {
            return new LoadedPageInteractor(services);
        }

        public ITypeLibraryLoaderService CreateTypeLibraryLoaderService()
        {
            return new TypeLibraryLoaderServiceImpl();
        }

        public IProjectBrowserService CreateProjectBrowserService(ITreeView treeView)
        {
            return new ProjectBrowserService(services, treeView);
        }

        public ITabControlHostService CreateTabControlHost(TabControl tabControl)
        {
            return new TabControlHost(services, tabControl);
        }

        public IUiPreferencesService CreateUiPreferencesService()
        {
            var configSvc = services.RequireService<IDecompilerConfigurationService>();
            var settingsSvc = services.RequireService<ISettingsService>();
            return new UiPreferencesService(configSvc, settingsSvc);
        }

        public IFileSystemService CreateFileSystemService()
        {
            return new FileSystemServiceImpl();
        }
    }
}
