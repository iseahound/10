

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __shobjidl_core_h__
#define __shobjidl_core_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IContextMenu_FWD_DEFINED__
#define __IContextMenu_FWD_DEFINED__
typedef interface IContextMenu IContextMenu;

#endif 	/* __IContextMenu_FWD_DEFINED__ */


#ifndef __IContextMenu2_FWD_DEFINED__
#define __IContextMenu2_FWD_DEFINED__
typedef interface IContextMenu2 IContextMenu2;

#endif 	/* __IContextMenu2_FWD_DEFINED__ */


#ifndef __IContextMenu3_FWD_DEFINED__
#define __IContextMenu3_FWD_DEFINED__
typedef interface IContextMenu3 IContextMenu3;

#endif 	/* __IContextMenu3_FWD_DEFINED__ */


#ifndef __IExecuteCommand_FWD_DEFINED__
#define __IExecuteCommand_FWD_DEFINED__
typedef interface IExecuteCommand IExecuteCommand;

#endif 	/* __IExecuteCommand_FWD_DEFINED__ */


#ifndef __IPersistFolder_FWD_DEFINED__
#define __IPersistFolder_FWD_DEFINED__
typedef interface IPersistFolder IPersistFolder;

#endif 	/* __IPersistFolder_FWD_DEFINED__ */


#ifndef __IRunnableTask_FWD_DEFINED__
#define __IRunnableTask_FWD_DEFINED__
typedef interface IRunnableTask IRunnableTask;

#endif 	/* __IRunnableTask_FWD_DEFINED__ */


#ifndef __IShellTaskScheduler_FWD_DEFINED__
#define __IShellTaskScheduler_FWD_DEFINED__
typedef interface IShellTaskScheduler IShellTaskScheduler;

#endif 	/* __IShellTaskScheduler_FWD_DEFINED__ */


#ifndef __IPersistFolder2_FWD_DEFINED__
#define __IPersistFolder2_FWD_DEFINED__
typedef interface IPersistFolder2 IPersistFolder2;

#endif 	/* __IPersistFolder2_FWD_DEFINED__ */


#ifndef __IPersistFolder3_FWD_DEFINED__
#define __IPersistFolder3_FWD_DEFINED__
typedef interface IPersistFolder3 IPersistFolder3;

#endif 	/* __IPersistFolder3_FWD_DEFINED__ */


#ifndef __IPersistIDList_FWD_DEFINED__
#define __IPersistIDList_FWD_DEFINED__
typedef interface IPersistIDList IPersistIDList;

#endif 	/* __IPersistIDList_FWD_DEFINED__ */


#ifndef __IEnumIDList_FWD_DEFINED__
#define __IEnumIDList_FWD_DEFINED__
typedef interface IEnumIDList IEnumIDList;

#endif 	/* __IEnumIDList_FWD_DEFINED__ */


#ifndef __IEnumFullIDList_FWD_DEFINED__
#define __IEnumFullIDList_FWD_DEFINED__
typedef interface IEnumFullIDList IEnumFullIDList;

#endif 	/* __IEnumFullIDList_FWD_DEFINED__ */


#ifndef __IFileSyncMergeHandler_FWD_DEFINED__
#define __IFileSyncMergeHandler_FWD_DEFINED__
typedef interface IFileSyncMergeHandler IFileSyncMergeHandler;

#endif 	/* __IFileSyncMergeHandler_FWD_DEFINED__ */


#ifndef __IObjectWithFolderEnumMode_FWD_DEFINED__
#define __IObjectWithFolderEnumMode_FWD_DEFINED__
typedef interface IObjectWithFolderEnumMode IObjectWithFolderEnumMode;

#endif 	/* __IObjectWithFolderEnumMode_FWD_DEFINED__ */


#ifndef __IParseAndCreateItem_FWD_DEFINED__
#define __IParseAndCreateItem_FWD_DEFINED__
typedef interface IParseAndCreateItem IParseAndCreateItem;

#endif 	/* __IParseAndCreateItem_FWD_DEFINED__ */


#ifndef __IShellFolder_FWD_DEFINED__
#define __IShellFolder_FWD_DEFINED__
typedef interface IShellFolder IShellFolder;

#endif 	/* __IShellFolder_FWD_DEFINED__ */


#ifndef __IEnumExtraSearch_FWD_DEFINED__
#define __IEnumExtraSearch_FWD_DEFINED__
typedef interface IEnumExtraSearch IEnumExtraSearch;

#endif 	/* __IEnumExtraSearch_FWD_DEFINED__ */


#ifndef __IShellFolder2_FWD_DEFINED__
#define __IShellFolder2_FWD_DEFINED__
typedef interface IShellFolder2 IShellFolder2;

#endif 	/* __IShellFolder2_FWD_DEFINED__ */


#ifndef __IShellView_FWD_DEFINED__
#define __IShellView_FWD_DEFINED__
typedef interface IShellView IShellView;

#endif 	/* __IShellView_FWD_DEFINED__ */


#ifndef __IShellView2_FWD_DEFINED__
#define __IShellView2_FWD_DEFINED__
typedef interface IShellView2 IShellView2;

#endif 	/* __IShellView2_FWD_DEFINED__ */


#ifndef __IFolderView_FWD_DEFINED__
#define __IFolderView_FWD_DEFINED__
typedef interface IFolderView IFolderView;

#endif 	/* __IFolderView_FWD_DEFINED__ */


#ifndef __IFolderView2_FWD_DEFINED__
#define __IFolderView2_FWD_DEFINED__
typedef interface IFolderView2 IFolderView2;

#endif 	/* __IFolderView2_FWD_DEFINED__ */


#ifndef __IFolderViewSettings_FWD_DEFINED__
#define __IFolderViewSettings_FWD_DEFINED__
typedef interface IFolderViewSettings IFolderViewSettings;

#endif 	/* __IFolderViewSettings_FWD_DEFINED__ */


#ifndef __IPreviewHandlerVisuals_FWD_DEFINED__
#define __IPreviewHandlerVisuals_FWD_DEFINED__
typedef interface IPreviewHandlerVisuals IPreviewHandlerVisuals;

#endif 	/* __IPreviewHandlerVisuals_FWD_DEFINED__ */


#ifndef __ICommDlgBrowser_FWD_DEFINED__
#define __ICommDlgBrowser_FWD_DEFINED__
typedef interface ICommDlgBrowser ICommDlgBrowser;

#endif 	/* __ICommDlgBrowser_FWD_DEFINED__ */


#ifndef __ICommDlgBrowser2_FWD_DEFINED__
#define __ICommDlgBrowser2_FWD_DEFINED__
typedef interface ICommDlgBrowser2 ICommDlgBrowser2;

#endif 	/* __ICommDlgBrowser2_FWD_DEFINED__ */


#ifndef __IColumnManager_FWD_DEFINED__
#define __IColumnManager_FWD_DEFINED__
typedef interface IColumnManager IColumnManager;

#endif 	/* __IColumnManager_FWD_DEFINED__ */


#ifndef __IFolderFilterSite_FWD_DEFINED__
#define __IFolderFilterSite_FWD_DEFINED__
typedef interface IFolderFilterSite IFolderFilterSite;

#endif 	/* __IFolderFilterSite_FWD_DEFINED__ */


#ifndef __IFolderFilter_FWD_DEFINED__
#define __IFolderFilter_FWD_DEFINED__
typedef interface IFolderFilter IFolderFilter;

#endif 	/* __IFolderFilter_FWD_DEFINED__ */


#ifndef __IInputObjectSite_FWD_DEFINED__
#define __IInputObjectSite_FWD_DEFINED__
typedef interface IInputObjectSite IInputObjectSite;

#endif 	/* __IInputObjectSite_FWD_DEFINED__ */


#ifndef __IInputObject_FWD_DEFINED__
#define __IInputObject_FWD_DEFINED__
typedef interface IInputObject IInputObject;

#endif 	/* __IInputObject_FWD_DEFINED__ */


#ifndef __IInputObject2_FWD_DEFINED__
#define __IInputObject2_FWD_DEFINED__
typedef interface IInputObject2 IInputObject2;

#endif 	/* __IInputObject2_FWD_DEFINED__ */


#ifndef __IShellIcon_FWD_DEFINED__
#define __IShellIcon_FWD_DEFINED__
typedef interface IShellIcon IShellIcon;

#endif 	/* __IShellIcon_FWD_DEFINED__ */


#ifndef __IShellBrowser_FWD_DEFINED__
#define __IShellBrowser_FWD_DEFINED__
typedef interface IShellBrowser IShellBrowser;

#endif 	/* __IShellBrowser_FWD_DEFINED__ */


#ifndef __IProfferService_FWD_DEFINED__
#define __IProfferService_FWD_DEFINED__
typedef interface IProfferService IProfferService;

#endif 	/* __IProfferService_FWD_DEFINED__ */


#ifndef __IShellItem_FWD_DEFINED__
#define __IShellItem_FWD_DEFINED__
typedef interface IShellItem IShellItem;

#endif 	/* __IShellItem_FWD_DEFINED__ */


#ifndef __IShellItem2_FWD_DEFINED__
#define __IShellItem2_FWD_DEFINED__
typedef interface IShellItem2 IShellItem2;

#endif 	/* __IShellItem2_FWD_DEFINED__ */


#ifndef __IShellItemImageFactory_FWD_DEFINED__
#define __IShellItemImageFactory_FWD_DEFINED__
typedef interface IShellItemImageFactory IShellItemImageFactory;

#endif 	/* __IShellItemImageFactory_FWD_DEFINED__ */


#ifndef __IEnumShellItems_FWD_DEFINED__
#define __IEnumShellItems_FWD_DEFINED__
typedef interface IEnumShellItems IEnumShellItems;

#endif 	/* __IEnumShellItems_FWD_DEFINED__ */


#ifndef __ITransferAdviseSink_FWD_DEFINED__
#define __ITransferAdviseSink_FWD_DEFINED__
typedef interface ITransferAdviseSink ITransferAdviseSink;

#endif 	/* __ITransferAdviseSink_FWD_DEFINED__ */


#ifndef __ITransferSource_FWD_DEFINED__
#define __ITransferSource_FWD_DEFINED__
typedef interface ITransferSource ITransferSource;

#endif 	/* __ITransferSource_FWD_DEFINED__ */


#ifndef __IEnumResources_FWD_DEFINED__
#define __IEnumResources_FWD_DEFINED__
typedef interface IEnumResources IEnumResources;

#endif 	/* __IEnumResources_FWD_DEFINED__ */


#ifndef __IShellItemResources_FWD_DEFINED__
#define __IShellItemResources_FWD_DEFINED__
typedef interface IShellItemResources IShellItemResources;

#endif 	/* __IShellItemResources_FWD_DEFINED__ */


#ifndef __ITransferDestination_FWD_DEFINED__
#define __ITransferDestination_FWD_DEFINED__
typedef interface ITransferDestination ITransferDestination;

#endif 	/* __ITransferDestination_FWD_DEFINED__ */


#ifndef __IFileOperationProgressSink_FWD_DEFINED__
#define __IFileOperationProgressSink_FWD_DEFINED__
typedef interface IFileOperationProgressSink IFileOperationProgressSink;

#endif 	/* __IFileOperationProgressSink_FWD_DEFINED__ */


#ifndef __IShellItemArray_FWD_DEFINED__
#define __IShellItemArray_FWD_DEFINED__
typedef interface IShellItemArray IShellItemArray;

#endif 	/* __IShellItemArray_FWD_DEFINED__ */


#ifndef __IInitializeWithItem_FWD_DEFINED__
#define __IInitializeWithItem_FWD_DEFINED__
typedef interface IInitializeWithItem IInitializeWithItem;

#endif 	/* __IInitializeWithItem_FWD_DEFINED__ */


#ifndef __IObjectWithSelection_FWD_DEFINED__
#define __IObjectWithSelection_FWD_DEFINED__
typedef interface IObjectWithSelection IObjectWithSelection;

#endif 	/* __IObjectWithSelection_FWD_DEFINED__ */


#ifndef __IObjectWithBackReferences_FWD_DEFINED__
#define __IObjectWithBackReferences_FWD_DEFINED__
typedef interface IObjectWithBackReferences IObjectWithBackReferences;

#endif 	/* __IObjectWithBackReferences_FWD_DEFINED__ */


#ifndef __IPropertyUI_FWD_DEFINED__
#define __IPropertyUI_FWD_DEFINED__
typedef interface IPropertyUI IPropertyUI;

#endif 	/* __IPropertyUI_FWD_DEFINED__ */


#ifndef __ICategoryProvider_FWD_DEFINED__
#define __ICategoryProvider_FWD_DEFINED__
typedef interface ICategoryProvider ICategoryProvider;

#endif 	/* __ICategoryProvider_FWD_DEFINED__ */


#ifndef __ICategorizer_FWD_DEFINED__
#define __ICategorizer_FWD_DEFINED__
typedef interface ICategorizer ICategorizer;

#endif 	/* __ICategorizer_FWD_DEFINED__ */


#ifndef __IDropTargetHelper_FWD_DEFINED__
#define __IDropTargetHelper_FWD_DEFINED__
typedef interface IDropTargetHelper IDropTargetHelper;

#endif 	/* __IDropTargetHelper_FWD_DEFINED__ */


#ifndef __IDragSourceHelper_FWD_DEFINED__
#define __IDragSourceHelper_FWD_DEFINED__
typedef interface IDragSourceHelper IDragSourceHelper;

#endif 	/* __IDragSourceHelper_FWD_DEFINED__ */


#ifndef __IShellLinkA_FWD_DEFINED__
#define __IShellLinkA_FWD_DEFINED__
typedef interface IShellLinkA IShellLinkA;

#endif 	/* __IShellLinkA_FWD_DEFINED__ */


#ifndef __IShellLinkW_FWD_DEFINED__
#define __IShellLinkW_FWD_DEFINED__
typedef interface IShellLinkW IShellLinkW;

#endif 	/* __IShellLinkW_FWD_DEFINED__ */


#ifndef __IShellLinkDataList_FWD_DEFINED__
#define __IShellLinkDataList_FWD_DEFINED__
typedef interface IShellLinkDataList IShellLinkDataList;

#endif 	/* __IShellLinkDataList_FWD_DEFINED__ */


#ifndef __IResolveShellLink_FWD_DEFINED__
#define __IResolveShellLink_FWD_DEFINED__
typedef interface IResolveShellLink IResolveShellLink;

#endif 	/* __IResolveShellLink_FWD_DEFINED__ */


#ifndef __IActionProgressDialog_FWD_DEFINED__
#define __IActionProgressDialog_FWD_DEFINED__
typedef interface IActionProgressDialog IActionProgressDialog;

#endif 	/* __IActionProgressDialog_FWD_DEFINED__ */


#ifndef __IActionProgress_FWD_DEFINED__
#define __IActionProgress_FWD_DEFINED__
typedef interface IActionProgress IActionProgress;

#endif 	/* __IActionProgress_FWD_DEFINED__ */


#ifndef __IShellExtInit_FWD_DEFINED__
#define __IShellExtInit_FWD_DEFINED__
typedef interface IShellExtInit IShellExtInit;

#endif 	/* __IShellExtInit_FWD_DEFINED__ */


#ifndef __IShellPropSheetExt_FWD_DEFINED__
#define __IShellPropSheetExt_FWD_DEFINED__
typedef interface IShellPropSheetExt IShellPropSheetExt;

#endif 	/* __IShellPropSheetExt_FWD_DEFINED__ */


#ifndef __IRemoteComputer_FWD_DEFINED__
#define __IRemoteComputer_FWD_DEFINED__
typedef interface IRemoteComputer IRemoteComputer;

#endif 	/* __IRemoteComputer_FWD_DEFINED__ */


#ifndef __IQueryContinue_FWD_DEFINED__
#define __IQueryContinue_FWD_DEFINED__
typedef interface IQueryContinue IQueryContinue;

#endif 	/* __IQueryContinue_FWD_DEFINED__ */


#ifndef __IObjectWithCancelEvent_FWD_DEFINED__
#define __IObjectWithCancelEvent_FWD_DEFINED__
typedef interface IObjectWithCancelEvent IObjectWithCancelEvent;

#endif 	/* __IObjectWithCancelEvent_FWD_DEFINED__ */


#ifndef __IUserNotification_FWD_DEFINED__
#define __IUserNotification_FWD_DEFINED__
typedef interface IUserNotification IUserNotification;

#endif 	/* __IUserNotification_FWD_DEFINED__ */


#ifndef __IItemNameLimits_FWD_DEFINED__
#define __IItemNameLimits_FWD_DEFINED__
typedef interface IItemNameLimits IItemNameLimits;

#endif 	/* __IItemNameLimits_FWD_DEFINED__ */


#ifndef __ISearchFolderItemFactory_FWD_DEFINED__
#define __ISearchFolderItemFactory_FWD_DEFINED__
typedef interface ISearchFolderItemFactory ISearchFolderItemFactory;

#endif 	/* __ISearchFolderItemFactory_FWD_DEFINED__ */


#ifndef __IExtractImage_FWD_DEFINED__
#define __IExtractImage_FWD_DEFINED__
typedef interface IExtractImage IExtractImage;

#endif 	/* __IExtractImage_FWD_DEFINED__ */


#ifndef __IExtractImage2_FWD_DEFINED__
#define __IExtractImage2_FWD_DEFINED__
typedef interface IExtractImage2 IExtractImage2;

#endif 	/* __IExtractImage2_FWD_DEFINED__ */


#ifndef __IThumbnailHandlerFactory_FWD_DEFINED__
#define __IThumbnailHandlerFactory_FWD_DEFINED__
typedef interface IThumbnailHandlerFactory IThumbnailHandlerFactory;

#endif 	/* __IThumbnailHandlerFactory_FWD_DEFINED__ */


#ifndef __IParentAndItem_FWD_DEFINED__
#define __IParentAndItem_FWD_DEFINED__
typedef interface IParentAndItem IParentAndItem;

#endif 	/* __IParentAndItem_FWD_DEFINED__ */


#ifndef __IDockingWindow_FWD_DEFINED__
#define __IDockingWindow_FWD_DEFINED__
typedef interface IDockingWindow IDockingWindow;

#endif 	/* __IDockingWindow_FWD_DEFINED__ */


#ifndef __IDeskBand_FWD_DEFINED__
#define __IDeskBand_FWD_DEFINED__
typedef interface IDeskBand IDeskBand;

#endif 	/* __IDeskBand_FWD_DEFINED__ */


#ifndef __IDeskBandInfo_FWD_DEFINED__
#define __IDeskBandInfo_FWD_DEFINED__
typedef interface IDeskBandInfo IDeskBandInfo;

#endif 	/* __IDeskBandInfo_FWD_DEFINED__ */


#ifndef __ITaskbarList_FWD_DEFINED__
#define __ITaskbarList_FWD_DEFINED__
typedef interface ITaskbarList ITaskbarList;

#endif 	/* __ITaskbarList_FWD_DEFINED__ */


#ifndef __ITaskbarList2_FWD_DEFINED__
#define __ITaskbarList2_FWD_DEFINED__
typedef interface ITaskbarList2 ITaskbarList2;

#endif 	/* __ITaskbarList2_FWD_DEFINED__ */


#ifndef __ITaskbarList3_FWD_DEFINED__
#define __ITaskbarList3_FWD_DEFINED__
typedef interface ITaskbarList3 ITaskbarList3;

#endif 	/* __ITaskbarList3_FWD_DEFINED__ */


#ifndef __ITaskbarList4_FWD_DEFINED__
#define __ITaskbarList4_FWD_DEFINED__
typedef interface ITaskbarList4 ITaskbarList4;

#endif 	/* __ITaskbarList4_FWD_DEFINED__ */


#ifndef __IExplorerBrowserEvents_FWD_DEFINED__
#define __IExplorerBrowserEvents_FWD_DEFINED__
typedef interface IExplorerBrowserEvents IExplorerBrowserEvents;

#endif 	/* __IExplorerBrowserEvents_FWD_DEFINED__ */


#ifndef __IExplorerBrowser_FWD_DEFINED__
#define __IExplorerBrowser_FWD_DEFINED__
typedef interface IExplorerBrowser IExplorerBrowser;

#endif 	/* __IExplorerBrowser_FWD_DEFINED__ */


#ifndef __IEnumObjects_FWD_DEFINED__
#define __IEnumObjects_FWD_DEFINED__
typedef interface IEnumObjects IEnumObjects;

#endif 	/* __IEnumObjects_FWD_DEFINED__ */


#ifndef __IOperationsProgressDialog_FWD_DEFINED__
#define __IOperationsProgressDialog_FWD_DEFINED__
typedef interface IOperationsProgressDialog IOperationsProgressDialog;

#endif 	/* __IOperationsProgressDialog_FWD_DEFINED__ */


#ifndef __IIOCancelInformation_FWD_DEFINED__
#define __IIOCancelInformation_FWD_DEFINED__
typedef interface IIOCancelInformation IIOCancelInformation;

#endif 	/* __IIOCancelInformation_FWD_DEFINED__ */


#ifndef __IFileOperation_FWD_DEFINED__
#define __IFileOperation_FWD_DEFINED__
typedef interface IFileOperation IFileOperation;

#endif 	/* __IFileOperation_FWD_DEFINED__ */


#ifndef __IObjectProvider_FWD_DEFINED__
#define __IObjectProvider_FWD_DEFINED__
typedef interface IObjectProvider IObjectProvider;

#endif 	/* __IObjectProvider_FWD_DEFINED__ */


#ifndef __INamespaceWalkCB_FWD_DEFINED__
#define __INamespaceWalkCB_FWD_DEFINED__
typedef interface INamespaceWalkCB INamespaceWalkCB;

#endif 	/* __INamespaceWalkCB_FWD_DEFINED__ */


#ifndef __INamespaceWalkCB2_FWD_DEFINED__
#define __INamespaceWalkCB2_FWD_DEFINED__
typedef interface INamespaceWalkCB2 INamespaceWalkCB2;

#endif 	/* __INamespaceWalkCB2_FWD_DEFINED__ */


#ifndef __INamespaceWalk_FWD_DEFINED__
#define __INamespaceWalk_FWD_DEFINED__
typedef interface INamespaceWalk INamespaceWalk;

#endif 	/* __INamespaceWalk_FWD_DEFINED__ */


#ifndef __IBandSite_FWD_DEFINED__
#define __IBandSite_FWD_DEFINED__
typedef interface IBandSite IBandSite;

#endif 	/* __IBandSite_FWD_DEFINED__ */


#ifndef __IModalWindow_FWD_DEFINED__
#define __IModalWindow_FWD_DEFINED__
typedef interface IModalWindow IModalWindow;

#endif 	/* __IModalWindow_FWD_DEFINED__ */


#ifndef __IContextMenuSite_FWD_DEFINED__
#define __IContextMenuSite_FWD_DEFINED__
typedef interface IContextMenuSite IContextMenuSite;

#endif 	/* __IContextMenuSite_FWD_DEFINED__ */


#ifndef __IMenuBand_FWD_DEFINED__
#define __IMenuBand_FWD_DEFINED__
typedef interface IMenuBand IMenuBand;

#endif 	/* __IMenuBand_FWD_DEFINED__ */


#ifndef __IRegTreeItem_FWD_DEFINED__
#define __IRegTreeItem_FWD_DEFINED__
typedef interface IRegTreeItem IRegTreeItem;

#endif 	/* __IRegTreeItem_FWD_DEFINED__ */


#ifndef __IDeskBar_FWD_DEFINED__
#define __IDeskBar_FWD_DEFINED__
typedef interface IDeskBar IDeskBar;

#endif 	/* __IDeskBar_FWD_DEFINED__ */


#ifndef __IMenuPopup_FWD_DEFINED__
#define __IMenuPopup_FWD_DEFINED__
typedef interface IMenuPopup IMenuPopup;

#endif 	/* __IMenuPopup_FWD_DEFINED__ */


#ifndef __IFileIsInUse_FWD_DEFINED__
#define __IFileIsInUse_FWD_DEFINED__
typedef interface IFileIsInUse IFileIsInUse;

#endif 	/* __IFileIsInUse_FWD_DEFINED__ */


#ifndef __IFileDialogEvents_FWD_DEFINED__
#define __IFileDialogEvents_FWD_DEFINED__
typedef interface IFileDialogEvents IFileDialogEvents;

#endif 	/* __IFileDialogEvents_FWD_DEFINED__ */


#ifndef __IFileDialog_FWD_DEFINED__
#define __IFileDialog_FWD_DEFINED__
typedef interface IFileDialog IFileDialog;

#endif 	/* __IFileDialog_FWD_DEFINED__ */


#ifndef __IFileSaveDialog_FWD_DEFINED__
#define __IFileSaveDialog_FWD_DEFINED__
typedef interface IFileSaveDialog IFileSaveDialog;

#endif 	/* __IFileSaveDialog_FWD_DEFINED__ */


#ifndef __IFileOpenDialog_FWD_DEFINED__
#define __IFileOpenDialog_FWD_DEFINED__
typedef interface IFileOpenDialog IFileOpenDialog;

#endif 	/* __IFileOpenDialog_FWD_DEFINED__ */


#ifndef __IFileDialogCustomize_FWD_DEFINED__
#define __IFileDialogCustomize_FWD_DEFINED__
typedef interface IFileDialogCustomize IFileDialogCustomize;

#endif 	/* __IFileDialogCustomize_FWD_DEFINED__ */


#ifndef __IApplicationAssociationRegistration_FWD_DEFINED__
#define __IApplicationAssociationRegistration_FWD_DEFINED__
typedef interface IApplicationAssociationRegistration IApplicationAssociationRegistration;

#endif 	/* __IApplicationAssociationRegistration_FWD_DEFINED__ */


#ifndef __IDelegateFolder_FWD_DEFINED__
#define __IDelegateFolder_FWD_DEFINED__
typedef interface IDelegateFolder IDelegateFolder;

#endif 	/* __IDelegateFolder_FWD_DEFINED__ */


#ifndef __IBrowserFrameOptions_FWD_DEFINED__
#define __IBrowserFrameOptions_FWD_DEFINED__
typedef interface IBrowserFrameOptions IBrowserFrameOptions;

#endif 	/* __IBrowserFrameOptions_FWD_DEFINED__ */


#ifndef __INewWindowManager_FWD_DEFINED__
#define __INewWindowManager_FWD_DEFINED__
typedef interface INewWindowManager INewWindowManager;

#endif 	/* __INewWindowManager_FWD_DEFINED__ */


#ifndef __IAttachmentExecute_FWD_DEFINED__
#define __IAttachmentExecute_FWD_DEFINED__
typedef interface IAttachmentExecute IAttachmentExecute;

#endif 	/* __IAttachmentExecute_FWD_DEFINED__ */


#ifndef __IShellMenuCallback_FWD_DEFINED__
#define __IShellMenuCallback_FWD_DEFINED__
typedef interface IShellMenuCallback IShellMenuCallback;

#endif 	/* __IShellMenuCallback_FWD_DEFINED__ */


#ifndef __IShellMenu_FWD_DEFINED__
#define __IShellMenu_FWD_DEFINED__
typedef interface IShellMenu IShellMenu;

#endif 	/* __IShellMenu_FWD_DEFINED__ */


#ifndef __IKnownFolder_FWD_DEFINED__
#define __IKnownFolder_FWD_DEFINED__
typedef interface IKnownFolder IKnownFolder;

#endif 	/* __IKnownFolder_FWD_DEFINED__ */


#ifndef __IKnownFolderManager_FWD_DEFINED__
#define __IKnownFolderManager_FWD_DEFINED__
typedef interface IKnownFolderManager IKnownFolderManager;

#endif 	/* __IKnownFolderManager_FWD_DEFINED__ */


#ifndef __ISharingConfigurationManager_FWD_DEFINED__
#define __ISharingConfigurationManager_FWD_DEFINED__
typedef interface ISharingConfigurationManager ISharingConfigurationManager;

#endif 	/* __ISharingConfigurationManager_FWD_DEFINED__ */


#ifndef __IRelatedItem_FWD_DEFINED__
#define __IRelatedItem_FWD_DEFINED__
typedef interface IRelatedItem IRelatedItem;

#endif 	/* __IRelatedItem_FWD_DEFINED__ */


#ifndef __IIdentityName_FWD_DEFINED__
#define __IIdentityName_FWD_DEFINED__
typedef interface IIdentityName IIdentityName;

#endif 	/* __IIdentityName_FWD_DEFINED__ */


#ifndef __IDelegateItem_FWD_DEFINED__
#define __IDelegateItem_FWD_DEFINED__
typedef interface IDelegateItem IDelegateItem;

#endif 	/* __IDelegateItem_FWD_DEFINED__ */


#ifndef __ICurrentItem_FWD_DEFINED__
#define __ICurrentItem_FWD_DEFINED__
typedef interface ICurrentItem ICurrentItem;

#endif 	/* __ICurrentItem_FWD_DEFINED__ */


#ifndef __ITransferMediumItem_FWD_DEFINED__
#define __ITransferMediumItem_FWD_DEFINED__
typedef interface ITransferMediumItem ITransferMediumItem;

#endif 	/* __ITransferMediumItem_FWD_DEFINED__ */


#ifndef __IDisplayItem_FWD_DEFINED__
#define __IDisplayItem_FWD_DEFINED__
typedef interface IDisplayItem IDisplayItem;

#endif 	/* __IDisplayItem_FWD_DEFINED__ */


#ifndef __IViewStateIdentityItem_FWD_DEFINED__
#define __IViewStateIdentityItem_FWD_DEFINED__
typedef interface IViewStateIdentityItem IViewStateIdentityItem;

#endif 	/* __IViewStateIdentityItem_FWD_DEFINED__ */


#ifndef __IPreviewItem_FWD_DEFINED__
#define __IPreviewItem_FWD_DEFINED__
typedef interface IPreviewItem IPreviewItem;

#endif 	/* __IPreviewItem_FWD_DEFINED__ */


#ifndef __IDestinationStreamFactory_FWD_DEFINED__
#define __IDestinationStreamFactory_FWD_DEFINED__
typedef interface IDestinationStreamFactory IDestinationStreamFactory;

#endif 	/* __IDestinationStreamFactory_FWD_DEFINED__ */


#ifndef __ICreateProcessInputs_FWD_DEFINED__
#define __ICreateProcessInputs_FWD_DEFINED__
typedef interface ICreateProcessInputs ICreateProcessInputs;

#endif 	/* __ICreateProcessInputs_FWD_DEFINED__ */


#ifndef __ICreatingProcess_FWD_DEFINED__
#define __ICreatingProcess_FWD_DEFINED__
typedef interface ICreatingProcess ICreatingProcess;

#endif 	/* __ICreatingProcess_FWD_DEFINED__ */


#ifndef __INewMenuClient_FWD_DEFINED__
#define __INewMenuClient_FWD_DEFINED__
typedef interface INewMenuClient INewMenuClient;

#endif 	/* __INewMenuClient_FWD_DEFINED__ */


#ifndef __IInitializeWithBindCtx_FWD_DEFINED__
#define __IInitializeWithBindCtx_FWD_DEFINED__
typedef interface IInitializeWithBindCtx IInitializeWithBindCtx;

#endif 	/* __IInitializeWithBindCtx_FWD_DEFINED__ */


#ifndef __IShellItemFilter_FWD_DEFINED__
#define __IShellItemFilter_FWD_DEFINED__
typedef interface IShellItemFilter IShellItemFilter;

#endif 	/* __IShellItemFilter_FWD_DEFINED__ */


#ifndef __INameSpaceTreeControl_FWD_DEFINED__
#define __INameSpaceTreeControl_FWD_DEFINED__
typedef interface INameSpaceTreeControl INameSpaceTreeControl;

#endif 	/* __INameSpaceTreeControl_FWD_DEFINED__ */


#ifndef __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__
#define __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__
typedef interface INameSpaceTreeControlFolderCapabilities INameSpaceTreeControlFolderCapabilities;

#endif 	/* __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__ */


#ifndef __IPreviewHandler_FWD_DEFINED__
#define __IPreviewHandler_FWD_DEFINED__
typedef interface IPreviewHandler IPreviewHandler;

#endif 	/* __IPreviewHandler_FWD_DEFINED__ */


#ifndef __IPreviewHandlerFrame_FWD_DEFINED__
#define __IPreviewHandlerFrame_FWD_DEFINED__
typedef interface IPreviewHandlerFrame IPreviewHandlerFrame;

#endif 	/* __IPreviewHandlerFrame_FWD_DEFINED__ */


#ifndef __IExplorerPaneVisibility_FWD_DEFINED__
#define __IExplorerPaneVisibility_FWD_DEFINED__
typedef interface IExplorerPaneVisibility IExplorerPaneVisibility;

#endif 	/* __IExplorerPaneVisibility_FWD_DEFINED__ */


#ifndef __IContextMenuCB_FWD_DEFINED__
#define __IContextMenuCB_FWD_DEFINED__
typedef interface IContextMenuCB IContextMenuCB;

#endif 	/* __IContextMenuCB_FWD_DEFINED__ */


#ifndef __IDefaultExtractIconInit_FWD_DEFINED__
#define __IDefaultExtractIconInit_FWD_DEFINED__
typedef interface IDefaultExtractIconInit IDefaultExtractIconInit;

#endif 	/* __IDefaultExtractIconInit_FWD_DEFINED__ */


#ifndef __IExplorerCommand_FWD_DEFINED__
#define __IExplorerCommand_FWD_DEFINED__
typedef interface IExplorerCommand IExplorerCommand;

#endif 	/* __IExplorerCommand_FWD_DEFINED__ */


#ifndef __IExplorerCommandState_FWD_DEFINED__
#define __IExplorerCommandState_FWD_DEFINED__
typedef interface IExplorerCommandState IExplorerCommandState;

#endif 	/* __IExplorerCommandState_FWD_DEFINED__ */


#ifndef __IInitializeCommand_FWD_DEFINED__
#define __IInitializeCommand_FWD_DEFINED__
typedef interface IInitializeCommand IInitializeCommand;

#endif 	/* __IInitializeCommand_FWD_DEFINED__ */


#ifndef __IEnumExplorerCommand_FWD_DEFINED__
#define __IEnumExplorerCommand_FWD_DEFINED__
typedef interface IEnumExplorerCommand IEnumExplorerCommand;

#endif 	/* __IEnumExplorerCommand_FWD_DEFINED__ */


#ifndef __IExplorerCommandProvider_FWD_DEFINED__
#define __IExplorerCommandProvider_FWD_DEFINED__
typedef interface IExplorerCommandProvider IExplorerCommandProvider;

#endif 	/* __IExplorerCommandProvider_FWD_DEFINED__ */


#ifndef __IOpenControlPanel_FWD_DEFINED__
#define __IOpenControlPanel_FWD_DEFINED__
typedef interface IOpenControlPanel IOpenControlPanel;

#endif 	/* __IOpenControlPanel_FWD_DEFINED__ */


#ifndef __IFileSystemBindData_FWD_DEFINED__
#define __IFileSystemBindData_FWD_DEFINED__
typedef interface IFileSystemBindData IFileSystemBindData;

#endif 	/* __IFileSystemBindData_FWD_DEFINED__ */


#ifndef __IFileSystemBindData2_FWD_DEFINED__
#define __IFileSystemBindData2_FWD_DEFINED__
typedef interface IFileSystemBindData2 IFileSystemBindData2;

#endif 	/* __IFileSystemBindData2_FWD_DEFINED__ */


#ifndef __ICustomDestinationList_FWD_DEFINED__
#define __ICustomDestinationList_FWD_DEFINED__
typedef interface ICustomDestinationList ICustomDestinationList;

#endif 	/* __ICustomDestinationList_FWD_DEFINED__ */


#ifndef __IApplicationDestinations_FWD_DEFINED__
#define __IApplicationDestinations_FWD_DEFINED__
typedef interface IApplicationDestinations IApplicationDestinations;

#endif 	/* __IApplicationDestinations_FWD_DEFINED__ */


#ifndef __IApplicationDocumentLists_FWD_DEFINED__
#define __IApplicationDocumentLists_FWD_DEFINED__
typedef interface IApplicationDocumentLists IApplicationDocumentLists;

#endif 	/* __IApplicationDocumentLists_FWD_DEFINED__ */


#ifndef __IObjectWithAppUserModelID_FWD_DEFINED__
#define __IObjectWithAppUserModelID_FWD_DEFINED__
typedef interface IObjectWithAppUserModelID IObjectWithAppUserModelID;

#endif 	/* __IObjectWithAppUserModelID_FWD_DEFINED__ */


#ifndef __IObjectWithProgID_FWD_DEFINED__
#define __IObjectWithProgID_FWD_DEFINED__
typedef interface IObjectWithProgID IObjectWithProgID;

#endif 	/* __IObjectWithProgID_FWD_DEFINED__ */


#ifndef __IUpdateIDList_FWD_DEFINED__
#define __IUpdateIDList_FWD_DEFINED__
typedef interface IUpdateIDList IUpdateIDList;

#endif 	/* __IUpdateIDList_FWD_DEFINED__ */


#ifndef __IDesktopWallpaper_FWD_DEFINED__
#define __IDesktopWallpaper_FWD_DEFINED__
typedef interface IDesktopWallpaper IDesktopWallpaper;

#endif 	/* __IDesktopWallpaper_FWD_DEFINED__ */


#ifndef __IHomeGroup_FWD_DEFINED__
#define __IHomeGroup_FWD_DEFINED__
typedef interface IHomeGroup IHomeGroup;

#endif 	/* __IHomeGroup_FWD_DEFINED__ */


#ifndef __IInitializeWithPropertyStore_FWD_DEFINED__
#define __IInitializeWithPropertyStore_FWD_DEFINED__
typedef interface IInitializeWithPropertyStore IInitializeWithPropertyStore;

#endif 	/* __IInitializeWithPropertyStore_FWD_DEFINED__ */


#ifndef __IOpenSearchSource_FWD_DEFINED__
#define __IOpenSearchSource_FWD_DEFINED__
typedef interface IOpenSearchSource IOpenSearchSource;

#endif 	/* __IOpenSearchSource_FWD_DEFINED__ */


#ifndef __IShellLibrary_FWD_DEFINED__
#define __IShellLibrary_FWD_DEFINED__
typedef interface IShellLibrary IShellLibrary;

#endif 	/* __IShellLibrary_FWD_DEFINED__ */


#ifndef __IDefaultFolderMenuInitialize_FWD_DEFINED__
#define __IDefaultFolderMenuInitialize_FWD_DEFINED__
typedef interface IDefaultFolderMenuInitialize IDefaultFolderMenuInitialize;

#endif 	/* __IDefaultFolderMenuInitialize_FWD_DEFINED__ */


#ifndef __IApplicationActivationManager_FWD_DEFINED__
#define __IApplicationActivationManager_FWD_DEFINED__
typedef interface IApplicationActivationManager IApplicationActivationManager;

#endif 	/* __IApplicationActivationManager_FWD_DEFINED__ */


#ifndef __DesktopWallpaper_FWD_DEFINED__
#define __DesktopWallpaper_FWD_DEFINED__

#ifdef __cplusplus
typedef class DesktopWallpaper DesktopWallpaper;
#else
typedef struct DesktopWallpaper DesktopWallpaper;
#endif /* __cplusplus */

#endif 	/* __DesktopWallpaper_FWD_DEFINED__ */


#ifndef __ShellDesktop_FWD_DEFINED__
#define __ShellDesktop_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellDesktop ShellDesktop;
#else
typedef struct ShellDesktop ShellDesktop;
#endif /* __cplusplus */

#endif 	/* __ShellDesktop_FWD_DEFINED__ */


#ifndef __ShellFSFolder_FWD_DEFINED__
#define __ShellFSFolder_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellFSFolder ShellFSFolder;
#else
typedef struct ShellFSFolder ShellFSFolder;
#endif /* __cplusplus */

#endif 	/* __ShellFSFolder_FWD_DEFINED__ */


#ifndef __NetworkPlaces_FWD_DEFINED__
#define __NetworkPlaces_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkPlaces NetworkPlaces;
#else
typedef struct NetworkPlaces NetworkPlaces;
#endif /* __cplusplus */

#endif 	/* __NetworkPlaces_FWD_DEFINED__ */


#ifndef __ShellLink_FWD_DEFINED__
#define __ShellLink_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellLink ShellLink;
#else
typedef struct ShellLink ShellLink;
#endif /* __cplusplus */

#endif 	/* __ShellLink_FWD_DEFINED__ */


#ifndef __DriveSizeCategorizer_FWD_DEFINED__
#define __DriveSizeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveSizeCategorizer DriveSizeCategorizer;
#else
typedef struct DriveSizeCategorizer DriveSizeCategorizer;
#endif /* __cplusplus */

#endif 	/* __DriveSizeCategorizer_FWD_DEFINED__ */


#ifndef __DriveTypeCategorizer_FWD_DEFINED__
#define __DriveTypeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveTypeCategorizer DriveTypeCategorizer;
#else
typedef struct DriveTypeCategorizer DriveTypeCategorizer;
#endif /* __cplusplus */

#endif 	/* __DriveTypeCategorizer_FWD_DEFINED__ */


#ifndef __FreeSpaceCategorizer_FWD_DEFINED__
#define __FreeSpaceCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class FreeSpaceCategorizer FreeSpaceCategorizer;
#else
typedef struct FreeSpaceCategorizer FreeSpaceCategorizer;
#endif /* __cplusplus */

#endif 	/* __FreeSpaceCategorizer_FWD_DEFINED__ */


#ifndef __SizeCategorizer_FWD_DEFINED__
#define __SizeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SizeCategorizer SizeCategorizer;
#else
typedef struct SizeCategorizer SizeCategorizer;
#endif /* __cplusplus */

#endif 	/* __SizeCategorizer_FWD_DEFINED__ */


#ifndef __PropertiesUI_FWD_DEFINED__
#define __PropertiesUI_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertiesUI PropertiesUI;
#else
typedef struct PropertiesUI PropertiesUI;
#endif /* __cplusplus */

#endif 	/* __PropertiesUI_FWD_DEFINED__ */


#ifndef __UserNotification_FWD_DEFINED__
#define __UserNotification_FWD_DEFINED__

#ifdef __cplusplus
typedef class UserNotification UserNotification;
#else
typedef struct UserNotification UserNotification;
#endif /* __cplusplus */

#endif 	/* __UserNotification_FWD_DEFINED__ */


#ifndef __TaskbarList_FWD_DEFINED__
#define __TaskbarList_FWD_DEFINED__

#ifdef __cplusplus
typedef class TaskbarList TaskbarList;
#else
typedef struct TaskbarList TaskbarList;
#endif /* __cplusplus */

#endif 	/* __TaskbarList_FWD_DEFINED__ */


#ifndef __ShellItem_FWD_DEFINED__
#define __ShellItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellItem ShellItem;
#else
typedef struct ShellItem ShellItem;
#endif /* __cplusplus */

#endif 	/* __ShellItem_FWD_DEFINED__ */


#ifndef __NamespaceWalker_FWD_DEFINED__
#define __NamespaceWalker_FWD_DEFINED__

#ifdef __cplusplus
typedef class NamespaceWalker NamespaceWalker;
#else
typedef struct NamespaceWalker NamespaceWalker;
#endif /* __cplusplus */

#endif 	/* __NamespaceWalker_FWD_DEFINED__ */


#ifndef __FileOperation_FWD_DEFINED__
#define __FileOperation_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileOperation FileOperation;
#else
typedef struct FileOperation FileOperation;
#endif /* __cplusplus */

#endif 	/* __FileOperation_FWD_DEFINED__ */


#ifndef __FileOpenDialog_FWD_DEFINED__
#define __FileOpenDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileOpenDialog FileOpenDialog;
#else
typedef struct FileOpenDialog FileOpenDialog;
#endif /* __cplusplus */

#endif 	/* __FileOpenDialog_FWD_DEFINED__ */


#ifndef __FileSaveDialog_FWD_DEFINED__
#define __FileSaveDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileSaveDialog FileSaveDialog;
#else
typedef struct FileSaveDialog FileSaveDialog;
#endif /* __cplusplus */

#endif 	/* __FileSaveDialog_FWD_DEFINED__ */


#ifndef __KnownFolderManager_FWD_DEFINED__
#define __KnownFolderManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class KnownFolderManager KnownFolderManager;
#else
typedef struct KnownFolderManager KnownFolderManager;
#endif /* __cplusplus */

#endif 	/* __KnownFolderManager_FWD_DEFINED__ */


#ifndef __SharingConfigurationManager_FWD_DEFINED__
#define __SharingConfigurationManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SharingConfigurationManager SharingConfigurationManager;
#else
typedef struct SharingConfigurationManager SharingConfigurationManager;
#endif /* __cplusplus */

#endif 	/* __SharingConfigurationManager_FWD_DEFINED__ */


#ifndef __NetworkConnections_FWD_DEFINED__
#define __NetworkConnections_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkConnections NetworkConnections;
#else
typedef struct NetworkConnections NetworkConnections;
#endif /* __cplusplus */

#endif 	/* __NetworkConnections_FWD_DEFINED__ */


#ifndef __ScheduledTasks_FWD_DEFINED__
#define __ScheduledTasks_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScheduledTasks ScheduledTasks;
#else
typedef struct ScheduledTasks ScheduledTasks;
#endif /* __cplusplus */

#endif 	/* __ScheduledTasks_FWD_DEFINED__ */


#ifndef __ApplicationAssociationRegistration_FWD_DEFINED__
#define __ApplicationAssociationRegistration_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationAssociationRegistration ApplicationAssociationRegistration;
#else
typedef struct ApplicationAssociationRegistration ApplicationAssociationRegistration;
#endif /* __cplusplus */

#endif 	/* __ApplicationAssociationRegistration_FWD_DEFINED__ */


#ifndef __SearchFolderItemFactory_FWD_DEFINED__
#define __SearchFolderItemFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SearchFolderItemFactory SearchFolderItemFactory;
#else
typedef struct SearchFolderItemFactory SearchFolderItemFactory;
#endif /* __cplusplus */

#endif 	/* __SearchFolderItemFactory_FWD_DEFINED__ */


#ifndef __OpenControlPanel_FWD_DEFINED__
#define __OpenControlPanel_FWD_DEFINED__

#ifdef __cplusplus
typedef class OpenControlPanel OpenControlPanel;
#else
typedef struct OpenControlPanel OpenControlPanel;
#endif /* __cplusplus */

#endif 	/* __OpenControlPanel_FWD_DEFINED__ */


#ifndef __MailRecipient_FWD_DEFINED__
#define __MailRecipient_FWD_DEFINED__

#ifdef __cplusplus
typedef class MailRecipient MailRecipient;
#else
typedef struct MailRecipient MailRecipient;
#endif /* __cplusplus */

#endif 	/* __MailRecipient_FWD_DEFINED__ */


#ifndef __NetworkExplorerFolder_FWD_DEFINED__
#define __NetworkExplorerFolder_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkExplorerFolder NetworkExplorerFolder;
#else
typedef struct NetworkExplorerFolder NetworkExplorerFolder;
#endif /* __cplusplus */

#endif 	/* __NetworkExplorerFolder_FWD_DEFINED__ */


#ifndef __DestinationList_FWD_DEFINED__
#define __DestinationList_FWD_DEFINED__

#ifdef __cplusplus
typedef class DestinationList DestinationList;
#else
typedef struct DestinationList DestinationList;
#endif /* __cplusplus */

#endif 	/* __DestinationList_FWD_DEFINED__ */


#ifndef __ApplicationDestinations_FWD_DEFINED__
#define __ApplicationDestinations_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationDestinations ApplicationDestinations;
#else
typedef struct ApplicationDestinations ApplicationDestinations;
#endif /* __cplusplus */

#endif 	/* __ApplicationDestinations_FWD_DEFINED__ */


#ifndef __ApplicationDocumentLists_FWD_DEFINED__
#define __ApplicationDocumentLists_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationDocumentLists ApplicationDocumentLists;
#else
typedef struct ApplicationDocumentLists ApplicationDocumentLists;
#endif /* __cplusplus */

#endif 	/* __ApplicationDocumentLists_FWD_DEFINED__ */


#ifndef __HomeGroup_FWD_DEFINED__
#define __HomeGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class HomeGroup HomeGroup;
#else
typedef struct HomeGroup HomeGroup;
#endif /* __cplusplus */

#endif 	/* __HomeGroup_FWD_DEFINED__ */


#ifndef __ShellLibrary_FWD_DEFINED__
#define __ShellLibrary_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellLibrary ShellLibrary;
#else
typedef struct ShellLibrary ShellLibrary;
#endif /* __cplusplus */

#endif 	/* __ShellLibrary_FWD_DEFINED__ */


#ifndef __AppStartupLink_FWD_DEFINED__
#define __AppStartupLink_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppStartupLink AppStartupLink;
#else
typedef struct AppStartupLink AppStartupLink;
#endif /* __cplusplus */

#endif 	/* __AppStartupLink_FWD_DEFINED__ */


#ifndef __EnumerableObjectCollection_FWD_DEFINED__
#define __EnumerableObjectCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumerableObjectCollection EnumerableObjectCollection;
#else
typedef struct EnumerableObjectCollection EnumerableObjectCollection;
#endif /* __cplusplus */

#endif 	/* __EnumerableObjectCollection_FWD_DEFINED__ */


#ifndef __FrameworkInputPane_FWD_DEFINED__
#define __FrameworkInputPane_FWD_DEFINED__

#ifdef __cplusplus
typedef class FrameworkInputPane FrameworkInputPane;
#else
typedef struct FrameworkInputPane FrameworkInputPane;
#endif /* __cplusplus */

#endif 	/* __FrameworkInputPane_FWD_DEFINED__ */


#ifndef __DefFolderMenu_FWD_DEFINED__
#define __DefFolderMenu_FWD_DEFINED__

#ifdef __cplusplus
typedef class DefFolderMenu DefFolderMenu;
#else
typedef struct DefFolderMenu DefFolderMenu;
#endif /* __cplusplus */

#endif 	/* __DefFolderMenu_FWD_DEFINED__ */


#ifndef __AppVisibility_FWD_DEFINED__
#define __AppVisibility_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppVisibility AppVisibility;
#else
typedef struct AppVisibility AppVisibility;
#endif /* __cplusplus */

#endif 	/* __AppVisibility_FWD_DEFINED__ */


#ifndef __AppShellVerbHandler_FWD_DEFINED__
#define __AppShellVerbHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppShellVerbHandler AppShellVerbHandler;
#else
typedef struct AppShellVerbHandler AppShellVerbHandler;
#endif /* __cplusplus */

#endif 	/* __AppShellVerbHandler_FWD_DEFINED__ */


#ifndef __ExecuteUnknown_FWD_DEFINED__
#define __ExecuteUnknown_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExecuteUnknown ExecuteUnknown;
#else
typedef struct ExecuteUnknown ExecuteUnknown;
#endif /* __cplusplus */

#endif 	/* __ExecuteUnknown_FWD_DEFINED__ */


#ifndef __PackageDebugSettings_FWD_DEFINED__
#define __PackageDebugSettings_FWD_DEFINED__

#ifdef __cplusplus
typedef class PackageDebugSettings PackageDebugSettings;
#else
typedef struct PackageDebugSettings PackageDebugSettings;
#endif /* __cplusplus */

#endif 	/* __PackageDebugSettings_FWD_DEFINED__ */


#ifndef __SuspensionDependencyManager_FWD_DEFINED__
#define __SuspensionDependencyManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SuspensionDependencyManager SuspensionDependencyManager;
#else
typedef struct SuspensionDependencyManager SuspensionDependencyManager;
#endif /* __cplusplus */

#endif 	/* __SuspensionDependencyManager_FWD_DEFINED__ */


#ifndef __ApplicationActivationManager_FWD_DEFINED__
#define __ApplicationActivationManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationActivationManager ApplicationActivationManager;
#else
typedef struct ApplicationActivationManager ApplicationActivationManager;
#endif /* __cplusplus */

#endif 	/* __ApplicationActivationManager_FWD_DEFINED__ */


#ifndef __ApplicationDesignModeSettings_FWD_DEFINED__
#define __ApplicationDesignModeSettings_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationDesignModeSettings ApplicationDesignModeSettings;
#else
typedef struct ApplicationDesignModeSettings ApplicationDesignModeSettings;
#endif /* __cplusplus */

#endif 	/* __ApplicationDesignModeSettings_FWD_DEFINED__ */


#ifndef __IAssocHandlerInvoker_FWD_DEFINED__
#define __IAssocHandlerInvoker_FWD_DEFINED__
typedef interface IAssocHandlerInvoker IAssocHandlerInvoker;

#endif 	/* __IAssocHandlerInvoker_FWD_DEFINED__ */


#ifndef __IAssocHandler_FWD_DEFINED__
#define __IAssocHandler_FWD_DEFINED__
typedef interface IAssocHandler IAssocHandler;

#endif 	/* __IAssocHandler_FWD_DEFINED__ */


#ifndef __IEnumAssocHandlers_FWD_DEFINED__
#define __IEnumAssocHandlers_FWD_DEFINED__
typedef interface IEnumAssocHandlers IEnumAssocHandlers;

#endif 	/* __IEnumAssocHandlers_FWD_DEFINED__ */


#ifndef __IDataObjectProvider_FWD_DEFINED__
#define __IDataObjectProvider_FWD_DEFINED__
typedef interface IDataObjectProvider IDataObjectProvider;

#endif 	/* __IDataObjectProvider_FWD_DEFINED__ */


#ifndef __IDataTransferManagerInterop_FWD_DEFINED__
#define __IDataTransferManagerInterop_FWD_DEFINED__
typedef interface IDataTransferManagerInterop IDataTransferManagerInterop;

#endif 	/* __IDataTransferManagerInterop_FWD_DEFINED__ */


#ifndef __IFrameworkInputPaneHandler_FWD_DEFINED__
#define __IFrameworkInputPaneHandler_FWD_DEFINED__
typedef interface IFrameworkInputPaneHandler IFrameworkInputPaneHandler;

#endif 	/* __IFrameworkInputPaneHandler_FWD_DEFINED__ */


#ifndef __IFrameworkInputPane_FWD_DEFINED__
#define __IFrameworkInputPane_FWD_DEFINED__
typedef interface IFrameworkInputPane IFrameworkInputPane;

#endif 	/* __IFrameworkInputPane_FWD_DEFINED__ */


#ifndef __IAppVisibilityEvents_FWD_DEFINED__
#define __IAppVisibilityEvents_FWD_DEFINED__
typedef interface IAppVisibilityEvents IAppVisibilityEvents;

#endif 	/* __IAppVisibilityEvents_FWD_DEFINED__ */


#ifndef __IAppVisibility_FWD_DEFINED__
#define __IAppVisibility_FWD_DEFINED__
typedef interface IAppVisibility IAppVisibility;

#endif 	/* __IAppVisibility_FWD_DEFINED__ */


#ifndef __IPackageExecutionStateChangeNotification_FWD_DEFINED__
#define __IPackageExecutionStateChangeNotification_FWD_DEFINED__
typedef interface IPackageExecutionStateChangeNotification IPackageExecutionStateChangeNotification;

#endif 	/* __IPackageExecutionStateChangeNotification_FWD_DEFINED__ */


#ifndef __IPackageDebugSettings_FWD_DEFINED__
#define __IPackageDebugSettings_FWD_DEFINED__
typedef interface IPackageDebugSettings IPackageDebugSettings;

#endif 	/* __IPackageDebugSettings_FWD_DEFINED__ */


#ifndef __IPackageDebugSettings2_FWD_DEFINED__
#define __IPackageDebugSettings2_FWD_DEFINED__
typedef interface IPackageDebugSettings2 IPackageDebugSettings2;

#endif 	/* __IPackageDebugSettings2_FWD_DEFINED__ */


#ifndef __ISuspensionDependencyManager_FWD_DEFINED__
#define __ISuspensionDependencyManager_FWD_DEFINED__
typedef interface ISuspensionDependencyManager ISuspensionDependencyManager;

#endif 	/* __ISuspensionDependencyManager_FWD_DEFINED__ */


#ifndef __IExecuteCommandApplicationHostEnvironment_FWD_DEFINED__
#define __IExecuteCommandApplicationHostEnvironment_FWD_DEFINED__
typedef interface IExecuteCommandApplicationHostEnvironment IExecuteCommandApplicationHostEnvironment;

#endif 	/* __IExecuteCommandApplicationHostEnvironment_FWD_DEFINED__ */


#ifndef __IExecuteCommandHost_FWD_DEFINED__
#define __IExecuteCommandHost_FWD_DEFINED__
typedef interface IExecuteCommandHost IExecuteCommandHost;

#endif 	/* __IExecuteCommandHost_FWD_DEFINED__ */


#ifndef __IApplicationDesignModeSettings_FWD_DEFINED__
#define __IApplicationDesignModeSettings_FWD_DEFINED__
typedef interface IApplicationDesignModeSettings IApplicationDesignModeSettings;

#endif 	/* __IApplicationDesignModeSettings_FWD_DEFINED__ */


#ifndef __IApplicationDesignModeSettings2_FWD_DEFINED__
#define __IApplicationDesignModeSettings2_FWD_DEFINED__
typedef interface IApplicationDesignModeSettings2 IApplicationDesignModeSettings2;

#endif 	/* __IApplicationDesignModeSettings2_FWD_DEFINED__ */


#ifndef __ILaunchTargetMonitor_FWD_DEFINED__
#define __ILaunchTargetMonitor_FWD_DEFINED__
typedef interface ILaunchTargetMonitor ILaunchTargetMonitor;

#endif 	/* __ILaunchTargetMonitor_FWD_DEFINED__ */


#ifndef __ILaunchSourceViewSizePreference_FWD_DEFINED__
#define __ILaunchSourceViewSizePreference_FWD_DEFINED__
typedef interface ILaunchSourceViewSizePreference ILaunchSourceViewSizePreference;

#endif 	/* __ILaunchSourceViewSizePreference_FWD_DEFINED__ */


#ifndef __ILaunchTargetViewSizePreference_FWD_DEFINED__
#define __ILaunchTargetViewSizePreference_FWD_DEFINED__
typedef interface ILaunchTargetViewSizePreference ILaunchTargetViewSizePreference;

#endif 	/* __ILaunchTargetViewSizePreference_FWD_DEFINED__ */


#ifndef __ILaunchSourceAppUserModelId_FWD_DEFINED__
#define __ILaunchSourceAppUserModelId_FWD_DEFINED__
typedef interface ILaunchSourceAppUserModelId ILaunchSourceAppUserModelId;

#endif 	/* __ILaunchSourceAppUserModelId_FWD_DEFINED__ */


#ifndef __IInitializeWithWindow_FWD_DEFINED__
#define __IInitializeWithWindow_FWD_DEFINED__
typedef interface IInitializeWithWindow IInitializeWithWindow;

#endif 	/* __IInitializeWithWindow_FWD_DEFINED__ */


#ifndef __IHandlerInfo_FWD_DEFINED__
#define __IHandlerInfo_FWD_DEFINED__
typedef interface IHandlerInfo IHandlerInfo;

#endif 	/* __IHandlerInfo_FWD_DEFINED__ */


#ifndef __IHandlerActivationHost_FWD_DEFINED__
#define __IHandlerActivationHost_FWD_DEFINED__
typedef interface IHandlerActivationHost IHandlerActivationHost;

#endif 	/* __IHandlerActivationHost_FWD_DEFINED__ */


#ifndef __IAppActivationUIInfo_FWD_DEFINED__
#define __IAppActivationUIInfo_FWD_DEFINED__
typedef interface IAppActivationUIInfo IAppActivationUIInfo;

#endif 	/* __IAppActivationUIInfo_FWD_DEFINED__ */


#ifndef __IContactManagerInterop_FWD_DEFINED__
#define __IContactManagerInterop_FWD_DEFINED__
typedef interface IContactManagerInterop IContactManagerInterop;

#endif 	/* __IContactManagerInterop_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "shtypes.h"
#include "servprov.h"
#include "comcat.h"
#include "propsys.h"
#include "ObjectArray.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_shobjidl_core_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <sherrors.h>
#ifndef SHSTDAPI
#if defined(_SHELL32_)
#define SHSTDAPI          STDAPI
#define SHSTDAPI_(type)   STDAPI_(type)
#else
#define SHSTDAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif // SHSTDAPI

//===========================================================================
//
// IContextMenu interface
//
// [OverView]
//
//  The shell uses the IContextMenu interface in following three cases.
//
// case-1: The shell is loading context menu extensions.
//
//   When the user clicks the right mouse button on an item within the shell's
//  name space (i.g., file, directory, server, work-group, etc.), it creates
//  the default context menu for its type, then loads context menu extensions
//  that are registered for that type (and its base type) so that they can
//  add extra menu items. Those context menu extensions are registered at
//  HKCR\{ProgID}\shellex\ContextMenuHandlers.
//
// case-2: The shell is retrieving a context menu of sub-folders in extended
//   name-space.
//
//   When the explorer's name space is extended by name space extensions,
//  the shell calls their IShellFolder::GetUIObjectOf to get the IContextMenu
//  objects when it creates context menus for folders under those extended
//  name spaces.
//
// case-3: The shell is loading non-default drag and drop handler for directories.
//
//   When the user performed a non-default drag and drop onto one of file
//  system folders (i.e., directories), it loads shell extensions that are
//  registered at HKCR\{ProgID}\DragDropHandlers.
//
//
// [Member functions]
//
//
// IContextMenu::QueryContextMenu
//
//   This member function may insert one or more menuitems to the specified
//  menu (hmenu) at the specified location (indexMenu which is never be -1).
//  The IDs of those menuitem must be in the specified range (idCmdFirst and
//  idCmdLast). It returns the maximum menuitem ID offset (ushort) in the
//  'code' field (low word) of the scode.
//
//   The uFlags specify the context. It may have one or more of following
//  flags.
//
//  CMF_DEFAULTONLY: This flag is passed if the user is invoking the default
//   action (typically by double-clicking, case 1 and 2 only). Context menu
//   extensions (case 1) should not add any menu items, and returns S_OK.
//
//  CMF_VERBSONLY: The explorer passes this flag if it is constructing
//   a context menu for a short-cut object (case 1 and case 2 only). If this
//   flag is passed, it should not add any menu-items that is not appropriate
//   from a short-cut.
//    A good example is the Delete menuitem, which confuses the user
//   because it is not clear whether it deletes the link source item or the
//   link itself.
//
//  CMF_EXPLORER: The explorer passes this flag if it has the left-side pane
//   (case 1 and 2 only). Context menu extensions should ignore this flag.
//
//   High word (16-bit) are reserved for context specific communications
//  and the rest of flags (13-bit) are reserved by the system.
//
//
// IContextMenu::InvokeCommand
//
//   This member is called when the user has selected one of menuitems that
//  are inserted by previous QueryContextMenu member. In this case, the
//  LOWORD(lpici->lpVerb) contains the menuitem ID offset (menuitem ID -
//  idCmdFirst).
//
//   This member function may also be called programmatically. In such a case,
//  lpici->lpVerb specifies the canonical name of the command to be invoked,
//  which is typically retrieved by GetCommandString member previously.
//
//  Parameters in lpci:
//    cbSize -- Specifies the size of this structure (sizeof(*lpci))
//    hwnd   -- Specifies the owner window for any message/dialog box.
//    fMask  -- Specifies whether or not dwHotkey/hIcon paramter is valid.
//    lpVerb -- Specifies the command to be invoked.
//    lpParameters -- Parameters (optional)
//    lpDirectory  -- Working directory (optional)
//    nShow -- Specifies the flag to be passed to ShowWindow (SW_*).
//    dwHotKey -- Hot key to be assigned to the app after invoked (optional).
//    hIcon -- Specifies the icon (optional).
//    hMonitor -- Specifies the default monitor (optional).
//
//
// IContextMenu::GetCommandString
//
//   This member function is called by the explorer either to get the
//  canonical (language independent) command name (uFlags == GCS_VERB) or
//  the help text ((uFlags & GCS_HELPTEXT) != 0) for the specified command.
//  The retrieved canonical string may be passed to its InvokeCommand
//  member function to invoke a command programmatically. The explorer
//  displays the help texts in its status bar; therefore, the length of
//  the help text should be reasonably short (<40 characters).
//
//  Parameters:
//   idCmd -- Specifies menuitem ID offset (from idCmdFirst)
//   uFlags -- Either GCS_VERB or GCS_HELPTEXT
//   pwReserved -- Reserved (must pass NULL when calling, must ignore when called)
//   pszName -- Specifies the string buffer.
//   cchMax -- Specifies the size of the string buffer.
//
//===========================================================================

// QueryContextMenu uFlags
#define CMF_NORMAL              0x00000000
#define CMF_DEFAULTONLY         0x00000001
#define CMF_VERBSONLY           0x00000002
#define CMF_EXPLORE             0x00000004
#define CMF_NOVERBS             0x00000008
#define CMF_CANRENAME           0x00000010
#define CMF_NODEFAULT           0x00000020
#if (NTDDI_VERSION < NTDDI_VISTA)
#define CMF_INCLUDESTATIC       0x00000040
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMF_ITEMMENU            0x00000080
#endif
#define CMF_EXTENDEDVERBS       0x00000100
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMF_DISABLEDVERBS       0x00000200
#endif
#define CMF_ASYNCVERBSTATE      0x00000400
#define CMF_OPTIMIZEFORINVOKE   0x00000800
#define CMF_SYNCCASCADEMENU     0x00001000
#define CMF_DONOTPICKDEFAULT    0x00002000
#define CMF_RESERVED            0xffff0000

// GetCommandString uFlags
#define GCS_VERBA        0x00000000     // canonical verb
#define GCS_HELPTEXTA    0x00000001     // help text (for status bar)
#define GCS_VALIDATEA    0x00000002     // validate command exists
#define GCS_VERBW        0x00000004     // canonical verb (unicode)
#define GCS_HELPTEXTW    0x00000005     // help text (unicode version)
#define GCS_VALIDATEW    0x00000006     // validate command exists (unicode)
#define GCS_VERBICONW    0x00000014     // icon string (unicode)
#define GCS_UNICODE      0x00000004     // for bit testing - Unicode string

#ifdef UNICODE
#define GCS_VERB        GCS_VERBW
#define GCS_HELPTEXT    GCS_HELPTEXTW
#define GCS_VALIDATE    GCS_VALIDATEW
#else
#define GCS_VERB        GCS_VERBA
#define GCS_HELPTEXT    GCS_HELPTEXTA
#define GCS_VALIDATE    GCS_VALIDATEA
#endif

#define CMDSTR_NEWFOLDERA   "NewFolder"
#define CMDSTR_VIEWLISTA    "ViewList"
#define CMDSTR_VIEWDETAILSA "ViewDetails"
#define CMDSTR_NEWFOLDERW   L"NewFolder"
#define CMDSTR_VIEWLISTW    L"ViewList"
#define CMDSTR_VIEWDETAILSW L"ViewDetails"

#ifdef UNICODE
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERW
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTW
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSW
#else
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERA
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTA
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSA
#endif

#define CMIC_MASK_HOTKEY        SEE_MASK_HOTKEY
#define CMIC_MASK_ICON          SEE_MASK_ICON
#define CMIC_MASK_FLAG_NO_UI    SEE_MASK_FLAG_NO_UI
#define CMIC_MASK_UNICODE       SEE_MASK_UNICODE
#define CMIC_MASK_NO_CONSOLE    SEE_MASK_NO_CONSOLE
#if (NTDDI_VERSION < NTDDI_VISTA)
#define CMIC_MASK_HASLINKNAME   SEE_MASK_HASLINKNAME
#define CMIC_MASK_HASTITLE      SEE_MASK_HASTITLE
#endif  // NTDDI_VISTA
#define CMIC_MASK_FLAG_SEP_VDM  SEE_MASK_FLAG_SEPVDM
#define CMIC_MASK_ASYNCOK       SEE_MASK_ASYNCOK
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMIC_MASK_NOASYNC       SEE_MASK_NOASYNC
#endif
#define CMIC_MASK_SHIFT_DOWN    0x10000000
#define CMIC_MASK_CONTROL_DOWN  0x40000000
#define CMIC_MASK_FLAG_LOG_USAGE SEE_MASK_FLAG_LOG_USAGE
#define CMIC_MASK_NOZONECHECKS  SEE_MASK_NOZONECHECKS
#define CMIC_MASK_PTINVOKE      0x20000000
#include <pshpack8.h>

#if !defined(HMONITOR_DECLARED) && !defined(HMONITOR) && (WINVER < 0x0500)
#define HMONITOR_DECLARED
DECLARE_HANDLE(HMONITOR);
#endif
typedef struct _CMINVOKECOMMANDINFO
    {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    HANDLE hIcon;
    } 	CMINVOKECOMMANDINFO;

typedef CMINVOKECOMMANDINFO *LPCMINVOKECOMMANDINFO;

typedef const CMINVOKECOMMANDINFO *PCCMINVOKECOMMANDINFO;

typedef struct _CMINVOKECOMMANDINFOEX
    {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    HANDLE hIcon;
    LPCSTR lpTitle;
    LPCWSTR lpVerbW;
    LPCWSTR lpParametersW;
    LPCWSTR lpDirectoryW;
    LPCWSTR lpTitleW;
    POINT ptInvoke;
    } 	CMINVOKECOMMANDINFOEX;

typedef CMINVOKECOMMANDINFOEX *LPCMINVOKECOMMANDINFOEX;

typedef const CMINVOKECOMMANDINFOEX *PCCMINVOKECOMMANDINFOEX;

#include <poppack.h>


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0000_v0_0_s_ifspec;

#ifndef __IContextMenu_INTERFACE_DEFINED__
#define __IContextMenu_INTERFACE_DEFINED__

/* interface IContextMenu */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IContextMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214e4-0000-0000-c000-000000000046")
    IContextMenu : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContextMenu( 
            /* [annotation][in] */ 
            _In_  HMENU hmenu,
            /* [annotation][in] */ 
            _In_  UINT indexMenu,
            /* [annotation][in] */ 
            _In_  UINT idCmdFirst,
            /* [annotation][in] */ 
            _In_  UINT idCmdLast,
            /* [annotation][in] */ 
            _In_  UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeCommand( 
            /* [annotation][in] */ 
            _In_  CMINVOKECOMMANDINFO *pici) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCommandString( 
            /* [annotation][in] */ 
            _In_  UINT_PTR idCmd,
            /* [annotation][in] */ 
            _In_  UINT uType,
            /* [annotation][in] */ 
            _Reserved_  UINT *pReserved,
            /* [annotation][out] */ 
            _Out_writes_bytes_((uType & GCS_UNICODE) ? (cchMax * sizeof(wchar_t)) : cchMax) _When_(!(uType & (GCS_VALIDATEA | GCS_VALIDATEW)), _Null_terminated_)  CHAR *pszName,
            /* [annotation][in] */ 
            _In_  UINT cchMax) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IContextMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenu * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            IContextMenu * This,
            /* [annotation][in] */ 
            _In_  HMENU hmenu,
            /* [annotation][in] */ 
            _In_  UINT indexMenu,
            /* [annotation][in] */ 
            _In_  UINT idCmdFirst,
            /* [annotation][in] */ 
            _In_  UINT idCmdLast,
            /* [annotation][in] */ 
            _In_  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IContextMenu * This,
            /* [annotation][in] */ 
            _In_  CMINVOKECOMMANDINFO *pici);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IContextMenu * This,
            /* [annotation][in] */ 
            _In_  UINT_PTR idCmd,
            /* [annotation][in] */ 
            _In_  UINT uType,
            /* [annotation][in] */ 
            _Reserved_  UINT *pReserved,
            /* [annotation][out] */ 
            _Out_writes_bytes_((uType & GCS_UNICODE) ? (cchMax * sizeof(wchar_t)) : cchMax) _When_(!(uType & (GCS_VALIDATEA | GCS_VALIDATEW)), _Null_terminated_)  CHAR *pszName,
            /* [annotation][in] */ 
            _In_  UINT cchMax);
        
        END_INTERFACE
    } IContextMenuVtbl;

    interface IContextMenu
    {
        CONST_VTBL struct IContextMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenu_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) ) 

#define IContextMenu_InvokeCommand(This,pici)	\
    ( (This)->lpVtbl -> InvokeCommand(This,pici) ) 

#define IContextMenu_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)	\
    ( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenu_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0001 */
/* [local] */ 

typedef IContextMenu *LPCONTEXTMENU;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0001_v0_0_s_ifspec;

#ifndef __IContextMenu2_INTERFACE_DEFINED__
#define __IContextMenu2_INTERFACE_DEFINED__

/* interface IContextMenu2 */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IContextMenu2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214f4-0000-0000-c000-000000000046")
    IContextMenu2 : public IContextMenu
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleMenuMsg( 
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IContextMenu2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenu2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenu2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenu2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            IContextMenu2 * This,
            /* [annotation][in] */ 
            _In_  HMENU hmenu,
            /* [annotation][in] */ 
            _In_  UINT indexMenu,
            /* [annotation][in] */ 
            _In_  UINT idCmdFirst,
            /* [annotation][in] */ 
            _In_  UINT idCmdLast,
            /* [annotation][in] */ 
            _In_  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IContextMenu2 * This,
            /* [annotation][in] */ 
            _In_  CMINVOKECOMMANDINFO *pici);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IContextMenu2 * This,
            /* [annotation][in] */ 
            _In_  UINT_PTR idCmd,
            /* [annotation][in] */ 
            _In_  UINT uType,
            /* [annotation][in] */ 
            _Reserved_  UINT *pReserved,
            /* [annotation][out] */ 
            _Out_writes_bytes_((uType & GCS_UNICODE) ? (cchMax * sizeof(wchar_t)) : cchMax) _When_(!(uType & (GCS_VALIDATEA | GCS_VALIDATEW)), _Null_terminated_)  CHAR *pszName,
            /* [annotation][in] */ 
            _In_  UINT cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *HandleMenuMsg )( 
            IContextMenu2 * This,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam);
        
        END_INTERFACE
    } IContextMenu2Vtbl;

    interface IContextMenu2
    {
        CONST_VTBL struct IContextMenu2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenu2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenu2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenu2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenu2_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) ) 

#define IContextMenu2_InvokeCommand(This,pici)	\
    ( (This)->lpVtbl -> InvokeCommand(This,pici) ) 

#define IContextMenu2_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)	\
    ( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) ) 


#define IContextMenu2_HandleMenuMsg(This,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> HandleMenuMsg(This,uMsg,wParam,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenu2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0002 */
/* [local] */ 

typedef IContextMenu2 *LPCONTEXTMENU2;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0002_v0_0_s_ifspec;

#ifndef __IContextMenu3_INTERFACE_DEFINED__
#define __IContextMenu3_INTERFACE_DEFINED__

/* interface IContextMenu3 */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IContextMenu3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCFCE0A0-EC17-11d0-8D10-00A0C90F2719")
    IContextMenu3 : public IContextMenu2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleMenuMsg2( 
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam,
            /* [annotation][out] */ 
            _Out_opt_  LRESULT *plResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IContextMenu3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenu3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenu3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenu3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            IContextMenu3 * This,
            /* [annotation][in] */ 
            _In_  HMENU hmenu,
            /* [annotation][in] */ 
            _In_  UINT indexMenu,
            /* [annotation][in] */ 
            _In_  UINT idCmdFirst,
            /* [annotation][in] */ 
            _In_  UINT idCmdLast,
            /* [annotation][in] */ 
            _In_  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IContextMenu3 * This,
            /* [annotation][in] */ 
            _In_  CMINVOKECOMMANDINFO *pici);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IContextMenu3 * This,
            /* [annotation][in] */ 
            _In_  UINT_PTR idCmd,
            /* [annotation][in] */ 
            _In_  UINT uType,
            /* [annotation][in] */ 
            _Reserved_  UINT *pReserved,
            /* [annotation][out] */ 
            _Out_writes_bytes_((uType & GCS_UNICODE) ? (cchMax * sizeof(wchar_t)) : cchMax) _When_(!(uType & (GCS_VALIDATEA | GCS_VALIDATEW)), _Null_terminated_)  CHAR *pszName,
            /* [annotation][in] */ 
            _In_  UINT cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *HandleMenuMsg )( 
            IContextMenu3 * This,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *HandleMenuMsg2 )( 
            IContextMenu3 * This,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam,
            /* [annotation][out] */ 
            _Out_opt_  LRESULT *plResult);
        
        END_INTERFACE
    } IContextMenu3Vtbl;

    interface IContextMenu3
    {
        CONST_VTBL struct IContextMenu3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenu3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenu3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenu3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenu3_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) ) 

#define IContextMenu3_InvokeCommand(This,pici)	\
    ( (This)->lpVtbl -> InvokeCommand(This,pici) ) 

#define IContextMenu3_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)	\
    ( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) ) 


#define IContextMenu3_HandleMenuMsg(This,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> HandleMenuMsg(This,uMsg,wParam,lParam) ) 


#define IContextMenu3_HandleMenuMsg2(This,uMsg,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> HandleMenuMsg2(This,uMsg,wParam,lParam,plResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenu3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0003 */
/* [local] */ 

typedef IContextMenu3 *LPCONTEXTMENU3;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0003_v0_0_s_ifspec;

#ifndef __IExecuteCommand_INTERFACE_DEFINED__
#define __IExecuteCommand_INTERFACE_DEFINED__

/* interface IExecuteCommand */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExecuteCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F9185B0-CB92-43c5-80A9-92277A4F7B54")
    IExecuteCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeyState( 
            /* [in] */ DWORD grfKeyState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParameters( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszParameters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ POINT pt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowWindow( 
            /* [in] */ int nShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNoShowUI( 
            /* [in] */ BOOL fNoShowUI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDirectory( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszDirectory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExecuteCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExecuteCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExecuteCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetKeyState )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ DWORD grfKeyState);
        
        HRESULT ( STDMETHODCALLTYPE *SetParameters )( 
            __RPC__in IExecuteCommand * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszParameters);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ POINT pt);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowWindow )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ int nShow);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoShowUI )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ BOOL fNoShowUI);
        
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )( 
            __RPC__in IExecuteCommand * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDirectory);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            __RPC__in IExecuteCommand * This);
        
        END_INTERFACE
    } IExecuteCommandVtbl;

    interface IExecuteCommand
    {
        CONST_VTBL struct IExecuteCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExecuteCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExecuteCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExecuteCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExecuteCommand_SetKeyState(This,grfKeyState)	\
    ( (This)->lpVtbl -> SetKeyState(This,grfKeyState) ) 

#define IExecuteCommand_SetParameters(This,pszParameters)	\
    ( (This)->lpVtbl -> SetParameters(This,pszParameters) ) 

#define IExecuteCommand_SetPosition(This,pt)	\
    ( (This)->lpVtbl -> SetPosition(This,pt) ) 

#define IExecuteCommand_SetShowWindow(This,nShow)	\
    ( (This)->lpVtbl -> SetShowWindow(This,nShow) ) 

#define IExecuteCommand_SetNoShowUI(This,fNoShowUI)	\
    ( (This)->lpVtbl -> SetNoShowUI(This,fNoShowUI) ) 

#define IExecuteCommand_SetDirectory(This,pszDirectory)	\
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectory) ) 

#define IExecuteCommand_Execute(This)	\
    ( (This)->lpVtbl -> Execute(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExecuteCommand_INTERFACE_DEFINED__ */


#ifndef __IPersistFolder_INTERFACE_DEFINED__
#define __IPersistFolder_INTERFACE_DEFINED__

/* interface IPersistFolder */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214EA-0000-0000-C000-000000000046")
    IPersistFolder : public IPersist
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersistFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPersistFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPersistFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPersistFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            __RPC__in IPersistFolder * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IPersistFolder * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        END_INTERFACE
    } IPersistFolderVtbl;

    interface IPersistFolder
    {
        CONST_VTBL struct IPersistFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistFolder_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistFolder_Initialize(This,pidl)	\
    ( (This)->lpVtbl -> Initialize(This,pidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0005 */
/* [local] */ 

typedef IPersistFolder *LPPERSISTFOLDER;

#define IRTIR_TASK_NOT_RUNNING   0
#define IRTIR_TASK_RUNNING       1
#define IRTIR_TASK_SUSPENDED     2
#define IRTIR_TASK_PENDING       3
#define IRTIR_TASK_FINISHED      4


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0005_v0_0_s_ifspec;

#ifndef __IRunnableTask_INTERFACE_DEFINED__
#define __IRunnableTask_INTERFACE_DEFINED__

/* interface IRunnableTask */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IRunnableTask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85788d00-6807-11d0-b810-00c04fd706ec")
    IRunnableTask : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Kill( 
            /* [annotation][in] */ 
            _In_  BOOL bWait) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual ULONG STDMETHODCALLTYPE IsRunning( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRunnableTaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRunnableTask * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRunnableTask * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRunnableTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Run )( 
            IRunnableTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Kill )( 
            IRunnableTask * This,
            /* [annotation][in] */ 
            _In_  BOOL bWait);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            IRunnableTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IRunnableTask * This);
        
        ULONG ( STDMETHODCALLTYPE *IsRunning )( 
            IRunnableTask * This);
        
        END_INTERFACE
    } IRunnableTaskVtbl;

    interface IRunnableTask
    {
        CONST_VTBL struct IRunnableTaskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRunnableTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRunnableTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRunnableTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRunnableTask_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#define IRunnableTask_Kill(This,bWait)	\
    ( (This)->lpVtbl -> Kill(This,bWait) ) 

#define IRunnableTask_Suspend(This)	\
    ( (This)->lpVtbl -> Suspend(This) ) 

#define IRunnableTask_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IRunnableTask_IsRunning(This)	\
    ( (This)->lpVtbl -> IsRunning(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRunnableTask_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0006 */
/* [local] */ 

#define TOID_NULL                    GUID_NULL
#define ITSAT_DEFAULT_LPARAM         ((DWORD_PTR)-1)
#define ITSAT_DEFAULT_PRIORITY       0x10000000
#define ITSAT_MAX_PRIORITY           0x7fffffff
#define ITSAT_MIN_PRIORITY           0x00000000
#define ITSSFLAG_COMPLETE_ON_DESTROY 0x0000 // wait for the current task to complete before deleting the scheduler
#define ITSSFLAG_KILL_ON_DESTROY     0x0001 // kill the current task (if there is one) when the task scheduler is deleted
#define ITSSFLAG_FLAGS_MASK          0x0003
#define ITSS_THREAD_DESTROY_DEFAULT_TIMEOUT  (10*1000)       // default milliseconds until a sleeping worker thread is released
#define ITSS_THREAD_TERMINATE_TIMEOUT        (INFINITE)      // set sleeping worker threads to never be released
#define ITSS_THREAD_TIMEOUT_NO_CHANGE        (INFINITE - 1)  // no change to the thread timeout


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0006_v0_0_s_ifspec;

#ifndef __IShellTaskScheduler_INTERFACE_DEFINED__
#define __IShellTaskScheduler_INTERFACE_DEFINED__

/* interface IShellTaskScheduler */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IShellTaskScheduler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6CCB7BE0-6807-11d0-B810-00C04FD706EC")
    IShellTaskScheduler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTask( 
            /* [annotation][in] */ 
            _In_  IRunnableTask *prt,
            /* [annotation][in] */ 
            _In_  REFTASKOWNERID rtoid,
            /* [annotation][in] */ 
            _In_  DWORD_PTR lParam,
            /* [annotation][in] */ 
            _In_  DWORD dwPriority) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveTasks( 
            /* [annotation][in] */ 
            _In_  REFTASKOWNERID rtoid,
            /* [annotation][in] */ 
            _In_  DWORD_PTR lParam,
            /* [annotation][in] */ 
            _In_  BOOL bWaitIfRunning) = 0;
        
        virtual UINT STDMETHODCALLTYPE CountTasks( 
            /* [annotation][in] */ 
            _In_  REFTASKOWNERID rtoid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Status( 
            /* [annotation][in] */ 
            _In_  DWORD dwReleaseStatus,
            /* [annotation][in] */ 
            _In_  DWORD dwThreadTimeout) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellTaskSchedulerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellTaskScheduler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellTaskScheduler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellTaskScheduler * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IShellTaskScheduler * This,
            /* [annotation][in] */ 
            _In_  IRunnableTask *prt,
            /* [annotation][in] */ 
            _In_  REFTASKOWNERID rtoid,
            /* [annotation][in] */ 
            _In_  DWORD_PTR lParam,
            /* [annotation][in] */ 
            _In_  DWORD dwPriority);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveTasks )( 
            IShellTaskScheduler * This,
            /* [annotation][in] */ 
            _In_  REFTASKOWNERID rtoid,
            /* [annotation][in] */ 
            _In_  DWORD_PTR lParam,
            /* [annotation][in] */ 
            _In_  BOOL bWaitIfRunning);
        
        UINT ( STDMETHODCALLTYPE *CountTasks )( 
            IShellTaskScheduler * This,
            /* [annotation][in] */ 
            _In_  REFTASKOWNERID rtoid);
        
        HRESULT ( STDMETHODCALLTYPE *Status )( 
            IShellTaskScheduler * This,
            /* [annotation][in] */ 
            _In_  DWORD dwReleaseStatus,
            /* [annotation][in] */ 
            _In_  DWORD dwThreadTimeout);
        
        END_INTERFACE
    } IShellTaskSchedulerVtbl;

    interface IShellTaskScheduler
    {
        CONST_VTBL struct IShellTaskSchedulerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellTaskScheduler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellTaskScheduler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellTaskScheduler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellTaskScheduler_AddTask(This,prt,rtoid,lParam,dwPriority)	\
    ( (This)->lpVtbl -> AddTask(This,prt,rtoid,lParam,dwPriority) ) 

#define IShellTaskScheduler_RemoveTasks(This,rtoid,lParam,bWaitIfRunning)	\
    ( (This)->lpVtbl -> RemoveTasks(This,rtoid,lParam,bWaitIfRunning) ) 

#define IShellTaskScheduler_CountTasks(This,rtoid)	\
    ( (This)->lpVtbl -> CountTasks(This,rtoid) ) 

#define IShellTaskScheduler_Status(This,dwReleaseStatus,dwThreadTimeout)	\
    ( (This)->lpVtbl -> Status(This,dwReleaseStatus,dwThreadTimeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellTaskScheduler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0007 */
/* [local] */ 

#define SID_ShellTaskScheduler IID_IShellTaskScheduler


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0007_v0_0_s_ifspec;

#ifndef __IPersistFolder2_INTERFACE_DEFINED__
#define __IPersistFolder2_INTERFACE_DEFINED__

/* interface IPersistFolder2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AC3D9F0-175C-11d1-95BE-00609797EA4F")
    IPersistFolder2 : public IPersistFolder
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurFolder( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersistFolder2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPersistFolder2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPersistFolder2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPersistFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            __RPC__in IPersistFolder2 * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IPersistFolder2 * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurFolder )( 
            __RPC__in IPersistFolder2 * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        END_INTERFACE
    } IPersistFolder2Vtbl;

    interface IPersistFolder2
    {
        CONST_VTBL struct IPersistFolder2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistFolder2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistFolder2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistFolder2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistFolder2_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistFolder2_Initialize(This,pidl)	\
    ( (This)->lpVtbl -> Initialize(This,pidl) ) 


#define IPersistFolder2_GetCurFolder(This,ppidl)	\
    ( (This)->lpVtbl -> GetCurFolder(This,ppidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistFolder2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0008 */
/* [local] */ 

#define CSIDL_FLAG_PFTI_TRACKTARGET CSIDL_FLAG_DONT_VERIFY
#include <pshpack8.h>
typedef struct _PERSIST_FOLDER_TARGET_INFO
    {
    PIDLIST_ABSOLUTE pidlTargetFolder;
    WCHAR szTargetParsingName[ 260 ];
    WCHAR szNetworkProvider[ 260 ];
    DWORD dwAttributes;
    int csidl;
    } 	PERSIST_FOLDER_TARGET_INFO;

#include <poppack.h>


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0008_v0_0_s_ifspec;

#ifndef __IPersistFolder3_INTERFACE_DEFINED__
#define __IPersistFolder3_INTERFACE_DEFINED__

/* interface IPersistFolder3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistFolder3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEF04FDF-FE72-11d2-87A5-00C04F6837CF")
    IPersistFolder3 : public IPersistFolder2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEx( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlRoot,
            /* [unique][in] */ __RPC__in_opt const PERSIST_FOLDER_TARGET_INFO *ppfti) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderTargetInfo( 
            /* [out] */ __RPC__out PERSIST_FOLDER_TARGET_INFO *ppfti) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersistFolder3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPersistFolder3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPersistFolder3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPersistFolder3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            __RPC__in IPersistFolder3 * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IPersistFolder3 * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurFolder )( 
            __RPC__in IPersistFolder3 * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEx )( 
            __RPC__in IPersistFolder3 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlRoot,
            /* [unique][in] */ __RPC__in_opt const PERSIST_FOLDER_TARGET_INFO *ppfti);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderTargetInfo )( 
            __RPC__in IPersistFolder3 * This,
            /* [out] */ __RPC__out PERSIST_FOLDER_TARGET_INFO *ppfti);
        
        END_INTERFACE
    } IPersistFolder3Vtbl;

    interface IPersistFolder3
    {
        CONST_VTBL struct IPersistFolder3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistFolder3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistFolder3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistFolder3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistFolder3_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistFolder3_Initialize(This,pidl)	\
    ( (This)->lpVtbl -> Initialize(This,pidl) ) 


#define IPersistFolder3_GetCurFolder(This,ppidl)	\
    ( (This)->lpVtbl -> GetCurFolder(This,ppidl) ) 


#define IPersistFolder3_InitializeEx(This,pbc,pidlRoot,ppfti)	\
    ( (This)->lpVtbl -> InitializeEx(This,pbc,pidlRoot,ppfti) ) 

#define IPersistFolder3_GetFolderTargetInfo(This,ppfti)	\
    ( (This)->lpVtbl -> GetFolderTargetInfo(This,ppfti) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistFolder3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0009 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0009_v0_0_s_ifspec;

#ifndef __IPersistIDList_INTERFACE_DEFINED__
#define __IPersistIDList_INTERFACE_DEFINED__

/* interface IPersistIDList */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1079acfc-29bd-11d3-8e0d-00c04f6837d5")
    IPersistIDList : public IPersist
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersistIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPersistIDList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPersistIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPersistIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            __RPC__in IPersistIDList * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            __RPC__in IPersistIDList * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            __RPC__in IPersistIDList * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        END_INTERFACE
    } IPersistIDListVtbl;

    interface IPersistIDList
    {
        CONST_VTBL struct IPersistIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistIDList_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistIDList_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IPersistIDList_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0010 */
/* [local] */ 

#endif  // NTDDI_WINXP|| (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0010_v0_0_s_ifspec;

#ifndef __IEnumIDList_INTERFACE_DEFINED__
#define __IEnumIDList_INTERFACE_DEFINED__

/* interface IEnumIDList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F2-0000-0000-C000-000000000046")
    IEnumIDList : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  PITEMID_CHILD *rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumIDList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumIDList * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumIDList * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  PITEMID_CHILD *rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumIDList * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumIDList * This,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenum);
        
        END_INTERFACE
    } IEnumIDListVtbl;

    interface IEnumIDList
    {
        CONST_VTBL struct IEnumIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumIDList_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumIDList_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumIDList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumIDList_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumIDList_RemoteNext_Proxy( 
    __RPC__in IEnumIDList * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PITEMID_CHILD *rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumIDList_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0011 */
/* [local] */ 

typedef IEnumIDList *LPENUMIDLIST;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0011_v0_0_s_ifspec;

#ifndef __IEnumFullIDList_INTERFACE_DEFINED__
#define __IEnumFullIDList_INTERFACE_DEFINED__

/* interface IEnumFullIDList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumFullIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d0191542-7954-4908-bc06-b2360bbe45ba")
    IEnumFullIDList : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  PIDLIST_ABSOLUTE *rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumFullIDList **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumFullIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumFullIDList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumFullIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumFullIDList * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumFullIDList * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  PIDLIST_ABSOLUTE *rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumFullIDList * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumFullIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumFullIDList * This,
            /* [out] */ __RPC__deref_out_opt IEnumFullIDList **ppenum);
        
        END_INTERFACE
    } IEnumFullIDListVtbl;

    interface IEnumFullIDList
    {
        CONST_VTBL struct IEnumFullIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumFullIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumFullIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumFullIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumFullIDList_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumFullIDList_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumFullIDList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumFullIDList_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumFullIDList_RemoteNext_Proxy( 
    __RPC__in IEnumFullIDList * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PIDLIST_ABSOLUTE *rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumFullIDList_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumFullIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0012 */
/* [local] */ 

/* [v1_enum] */ 
enum _SHGDNF
    {
        SHGDN_NORMAL	= 0,
        SHGDN_INFOLDER	= 0x1,
        SHGDN_FOREDITING	= 0x1000,
        SHGDN_FORADDRESSBAR	= 0x4000,
        SHGDN_FORPARSING	= 0x8000
    } ;
typedef DWORD SHGDNF;

/* [v1_enum] */ 
enum _SHCONTF
    {
        SHCONTF_CHECKING_FOR_CHILDREN	= 0x10,
        SHCONTF_FOLDERS	= 0x20,
        SHCONTF_NONFOLDERS	= 0x40,
        SHCONTF_INCLUDEHIDDEN	= 0x80,
        SHCONTF_INIT_ON_FIRST_NEXT	= 0x100,
        SHCONTF_NETPRINTERSRCH	= 0x200,
        SHCONTF_SHAREABLE	= 0x400,
        SHCONTF_STORAGE	= 0x800,
        SHCONTF_NAVIGATION_ENUM	= 0x1000,
        SHCONTF_FASTITEMS	= 0x2000,
        SHCONTF_FLATLIST	= 0x4000,
        SHCONTF_ENABLE_ASYNC	= 0x8000,
        SHCONTF_INCLUDESUPERHIDDEN	= 0x10000
    } ;
typedef DWORD SHCONTF;

#define SHCIDS_ALLFIELDS        0x80000000L
#define SHCIDS_CANONICALONLY    0x10000000L
#define SHCIDS_BITMASK          0xFFFF0000L
#define SHCIDS_COLUMNMASK       0x0000FFFFL
#define SFGAO_CANCOPY           DROPEFFECT_COPY // Objects can be copied    (0x1)
#define SFGAO_CANMOVE           DROPEFFECT_MOVE // Objects can be moved     (0x2)
#define SFGAO_CANLINK           DROPEFFECT_LINK // Objects can be linked    (0x4)
#define SFGAO_STORAGE           0x00000008L     // supports BindToObject(IID_IStorage)
#define SFGAO_CANRENAME         0x00000010L     // Objects can be renamed
#define SFGAO_CANDELETE         0x00000020L     // Objects can be deleted
#define SFGAO_HASPROPSHEET      0x00000040L     // Objects have property sheets
#define SFGAO_DROPTARGET        0x00000100L     // Objects are drop target
#define SFGAO_CAPABILITYMASK    0x00000177L
#define SFGAO_PLACEHOLDER       0x00000800L     // File or folder is not fully present and recalled on open or access
#define SFGAO_SYSTEM            0x00001000L     // System object
#define SFGAO_ENCRYPTED         0x00002000L     // Object is encrypted (use alt color)
#define SFGAO_ISSLOW            0x00004000L     // 'Slow' object
#define SFGAO_GHOSTED           0x00008000L     // Ghosted icon
#define SFGAO_LINK              0x00010000L     // Shortcut (link)
#define SFGAO_SHARE             0x00020000L     // Shared
#define SFGAO_READONLY          0x00040000L     // Read-only
#define SFGAO_HIDDEN            0x00080000L     // Hidden object
#define SFGAO_DISPLAYATTRMASK   0x000FC000L
#define SFGAO_FILESYSANCESTOR   0x10000000L     // May contain children with SFGAO_FILESYSTEM
#define SFGAO_FOLDER            0x20000000L     // Support BindToObject(IID_IShellFolder)
#define SFGAO_FILESYSTEM        0x40000000L     // Is a win32 file system object (file/folder/root)
#define SFGAO_HASSUBFOLDER      0x80000000L     // May contain children with SFGAO_FOLDER (may be slow)
#define SFGAO_CONTENTSMASK      0x80000000L
#define SFGAO_VALIDATE          0x01000000L     // Invalidate cached information (may be slow)
#define SFGAO_REMOVABLE         0x02000000L     // Is this removeable media?
#define SFGAO_COMPRESSED        0x04000000L     // Object is compressed (use alt color)
#define SFGAO_BROWSABLE         0x08000000L     // Supports IShellFolder, but only implements CreateViewObject() (non-folder view)
#define SFGAO_NONENUMERATED     0x00100000L     // Is a non-enumerated object (should be hidden)
#define SFGAO_NEWCONTENT        0x00200000L     // Should show bold in explorer tree
#define SFGAO_CANMONIKER        0x00400000L     // Obsolete
#define SFGAO_HASSTORAGE        0x00400000L     // Obsolete
#define SFGAO_STREAM            0x00400000L     // Supports BindToObject(IID_IStream)
#define SFGAO_STORAGEANCESTOR   0x00800000L     // May contain children with SFGAO_STORAGE or SFGAO_STREAM
#define SFGAO_STORAGECAPMASK    0x70C50008L     // For determining storage capabilities, ie for open/save semantics
#define SFGAO_PKEYSFGAOMASK     0x81044000L     // Attributes that are masked out for PKEY_SFGAOFlags because they are considered to cause slow calculations or lack context (SFGAO_VALIDATE | SFGAO_ISSLOW | SFGAO_HASSUBFOLDER and others)
typedef ULONG SFGAOF;

typedef /* [v1_enum] */ 
enum SYNC_TRANSFER_STATUS
    {
        STS_NONE	= 0,
        STS_NEEDSUPLOAD	= 0x1,
        STS_NEEDSDOWNLOAD	= 0x2,
        STS_TRANSFERRING	= 0x4,
        STS_PAUSED	= 0x8,
        STS_HASERROR	= 0x10,
        STS_FETCHING_METADATA	= 0x20,
        STS_USER_REQUESTED_REFRESH	= 0x40,
        STS_HASWARNING	= 0x80,
        STS_EXCLUDED	= 0x100,
        STS_INCOMPLETE	= 0x200
    } 	SYNC_TRANSFER_STATUS;

DEFINE_ENUM_FLAG_OPERATORS(SYNC_TRANSFER_STATUS)
typedef /* [v1_enum] */ 
enum STORAGE_PROVIDER_FILE_FLAGS
    {
        SPFF_NONE	= 0,
        SPFF_DOWNLOAD_BY_DEFAULT	= 0x1,
        SPFF_CREATED_ON_THIS_DEVICE	= 0x2
    } 	STORAGE_PROVIDER_FILE_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(STORAGE_PROVIDER_FILE_FLAGS)
typedef /* [v1_enum] */ 
enum PLACEHOLDER_STATES
    {
        PS_NONE	= 0,
        PS_MARKED_FOR_OFFLINE_AVAILABILITY	= 0x1,
        PS_FULL_PRIMARY_STREAM_AVAILABLE	= 0x2,
        PS_CREATE_FILE_ACCESSIBLE	= 0x4,
        PS_CLOUDFILE_PLACEHOLDER	= 0x8,
        PS_DEFAULT	= ( ( PS_MARKED_FOR_OFFLINE_AVAILABILITY | PS_FULL_PRIMARY_STREAM_AVAILABLE )  | PS_CREATE_FILE_ACCESSIBLE ) ,
        PS_ALL	= ( ( ( PS_MARKED_FOR_OFFLINE_AVAILABILITY | PS_FULL_PRIMARY_STREAM_AVAILABLE )  | PS_CREATE_FILE_ACCESSIBLE )  | PS_CLOUDFILE_PLACEHOLDER ) 
    } 	PLACEHOLDER_STATES;

DEFINE_ENUM_FLAG_OPERATORS(PLACEHOLDER_STATES)
#define CONFLICT_RESOLUTION_CLSID_KEY L"ConflictResolutionCLSID"
typedef /* [v1_enum] */ 
enum MERGE_UPDATE_STATUS
    {
        MUS_COMPLETE	= 0,
        MUS_USERINPUTNEEDED	= ( MUS_COMPLETE + 1 ) ,
        MUS_FAILED	= ( MUS_USERINPUTNEEDED + 1 ) 
    } 	MERGE_UPDATE_STATUS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0012_v0_0_s_ifspec;

#ifndef __IFileSyncMergeHandler_INTERFACE_DEFINED__
#define __IFileSyncMergeHandler_INTERFACE_DEFINED__

/* interface IFileSyncMergeHandler */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileSyncMergeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d97b5aac-c792-433c-975d-35c4eadc7a9d")
    IFileSyncMergeHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Merge( 
            /* [string][in] */ __RPC__in_string LPCWSTR localFilePath,
            /* [string][in] */ __RPC__in_string LPCWSTR serverFilePath,
            /* [retval][out] */ __RPC__out MERGE_UPDATE_STATUS *updateStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowResolveConflictUIAsync( 
            /* [in] */ __RPC__in LPCWSTR localFilePath,
            /* [in] */ __RPC__in HMONITOR monitorToDisplayOn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileSyncMergeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileSyncMergeHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileSyncMergeHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileSyncMergeHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Merge )( 
            __RPC__in IFileSyncMergeHandler * This,
            /* [string][in] */ __RPC__in_string LPCWSTR localFilePath,
            /* [string][in] */ __RPC__in_string LPCWSTR serverFilePath,
            /* [retval][out] */ __RPC__out MERGE_UPDATE_STATUS *updateStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ShowResolveConflictUIAsync )( 
            __RPC__in IFileSyncMergeHandler * This,
            /* [in] */ __RPC__in LPCWSTR localFilePath,
            /* [in] */ __RPC__in HMONITOR monitorToDisplayOn);
        
        END_INTERFACE
    } IFileSyncMergeHandlerVtbl;

    interface IFileSyncMergeHandler
    {
        CONST_VTBL struct IFileSyncMergeHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSyncMergeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSyncMergeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSyncMergeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSyncMergeHandler_Merge(This,localFilePath,serverFilePath,updateStatus)	\
    ( (This)->lpVtbl -> Merge(This,localFilePath,serverFilePath,updateStatus) ) 

#define IFileSyncMergeHandler_ShowResolveConflictUIAsync(This,localFilePath,monitorToDisplayOn)	\
    ( (This)->lpVtbl -> ShowResolveConflictUIAsync(This,localFilePath,monitorToDisplayOn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSyncMergeHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0013 */
/* [local] */ 

#define STR_BIND_FORCE_FOLDER_SHORTCUT_RESOLVE   L"Force Folder Shortcut Resolve"
#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"
#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"
#define STR_SKIP_BINDING_CLSID      L"Skip Binding CLSID"
#define STR_PARSE_PREFER_FOLDER_BROWSING     L"Parse Prefer Folder Browsing"
#define STR_DONT_PARSE_RELATIVE              L"Don't Parse Relative"
#define STR_PARSE_TRANSLATE_ALIASES          L"Parse Translate Aliases"
#define STR_PARSE_SKIP_NET_CACHE             L"Skip Net Resource Cache"
#define STR_PARSE_SHELL_PROTOCOL_TO_FILE_OBJECTS     L"Parse Shell Protocol To File Objects"
#if (_WIN32_IE >= 0x0700)
#define STR_TRACK_CLSID                      L"Track the CLSID"
#define STR_INTERNAL_NAVIGATE                L"Internal Navigation"
#define STR_PARSE_PROPERTYSTORE             L"DelegateNamedProperties"
#define STR_NO_VALIDATE_FILENAME_CHARS      L"NoValidateFilenameChars"
#define STR_BIND_DELEGATE_CREATE_OBJECT L"Delegate Object Creation"
#define STR_PARSE_ALLOW_INTERNET_SHELL_FOLDERS   L"Allow binding to Internet shell folder handlers and negate STR_PARSE_PREFER_WEB_BROWSING"
#define STR_PARSE_PREFER_WEB_BROWSING   L"Do not bind to Internet shell folder handlers"
#define STR_PARSE_SHOW_NET_DIAGNOSTICS_UI  L"Show network diagnostics UI"
#define STR_PARSE_DONT_REQUIRE_VALIDATED_URLS  L"Do not require validated URLs"
#define STR_INTERNETFOLDER_PARSE_ONLY_URLMON_BINDABLE  L"Validate URL"
#endif // _WIN32_IE >= 0x0700
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define BIND_INTERRUPTABLE 0xFFFFFFFF
#endif // NTDDI_WIN8
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define STR_BIND_FOLDERS_READ_ONLY L"Folders As Read Only"
#define STR_BIND_FOLDER_ENUM_MODE L"Folder Enum Mode"
typedef /* [v1_enum] */ 
enum FOLDER_ENUM_MODE
    {
        FEM_VIEWRESULT	= 0,
        FEM_NAVIGATION	= 1
    } 	FOLDER_ENUM_MODE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0013_v0_0_s_ifspec;

#ifndef __IObjectWithFolderEnumMode_INTERFACE_DEFINED__
#define __IObjectWithFolderEnumMode_INTERFACE_DEFINED__

/* interface IObjectWithFolderEnumMode */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IObjectWithFolderEnumMode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6a9d9026-0e6e-464c-b000-42ecc07de673")
    IObjectWithFolderEnumMode : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ FOLDER_ENUM_MODE feMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMode( 
            /* [out] */ __RPC__out FOLDER_ENUM_MODE *pfeMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectWithFolderEnumModeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectWithFolderEnumMode * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectWithFolderEnumMode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectWithFolderEnumMode * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetMode )( 
            __RPC__in IObjectWithFolderEnumMode * This,
            /* [in] */ FOLDER_ENUM_MODE feMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetMode )( 
            __RPC__in IObjectWithFolderEnumMode * This,
            /* [out] */ __RPC__out FOLDER_ENUM_MODE *pfeMode);
        
        END_INTERFACE
    } IObjectWithFolderEnumModeVtbl;

    interface IObjectWithFolderEnumMode
    {
        CONST_VTBL struct IObjectWithFolderEnumModeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithFolderEnumMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectWithFolderEnumMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectWithFolderEnumMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectWithFolderEnumMode_SetMode(This,feMode)	\
    ( (This)->lpVtbl -> SetMode(This,feMode) ) 

#define IObjectWithFolderEnumMode_GetMode(This,pfeMode)	\
    ( (This)->lpVtbl -> GetMode(This,pfeMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectWithFolderEnumMode_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0014 */
/* [local] */ 

#define STR_PARSE_WITH_EXPLICIT_PROGID L"ExplicitProgid"
#define STR_PARSE_WITH_EXPLICIT_ASSOCAPP L"ExplicitAssociationApp"
#define STR_PARSE_EXPLICIT_ASSOCIATION_SUCCESSFUL L"ExplicitAssociationSuccessful"
#define STR_PARSE_AND_CREATE_ITEM    L"ParseAndCreateItem"
#define STR_PROPERTYBAG_PARAM   L"SHBindCtxPropertyBag"
#define STR_ENUM_ITEMS_FLAGS    L"SHCONTF"



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0014_v0_0_s_ifspec;

#ifndef __IParseAndCreateItem_INTERFACE_DEFINED__
#define __IParseAndCreateItem_INTERFACE_DEFINED__

/* interface IParseAndCreateItem */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IParseAndCreateItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67efed0e-e827-4408-b493-78f3982b685c")
    IParseAndCreateItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetItem( 
            /* [in] */ IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IParseAndCreateItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IParseAndCreateItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IParseAndCreateItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IParseAndCreateItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetItem )( 
            IParseAndCreateItem * This,
            /* [in] */ IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IParseAndCreateItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv);
        
        END_INTERFACE
    } IParseAndCreateItemVtbl;

    interface IParseAndCreateItem
    {
        CONST_VTBL struct IParseAndCreateItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParseAndCreateItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IParseAndCreateItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IParseAndCreateItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IParseAndCreateItem_SetItem(This,psi)	\
    ( (This)->lpVtbl -> SetItem(This,psi) ) 

#define IParseAndCreateItem_GetItem(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetItem(This,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IParseAndCreateItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0015 */
/* [local] */ 

#define STR_ITEM_CACHE_CONTEXT       L"ItemCacheContext"
#endif // NTDDI_VERSION >= NTDDI_WIN7



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0015_v0_0_s_ifspec;

#ifndef __IShellFolder_INTERFACE_DEFINED__
#define __IShellFolder_INTERFACE_DEFINED__

/* interface IShellFolder */
/* [unique][object][uuid] */ 






EXTERN_C const IID IID_IShellFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E6-0000-0000-C000-000000000046")
    IShellFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParseDisplayName( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [string][in] */ __RPC__in_string LPWSTR pszDisplayName,
            /* [annotation][unique][out][in] */ 
            _Reserved_  ULONG *pchEaten,
            /* [out] */ __RPC__deref_out_opt PIDLIST_RELATIVE *ppidl,
            /* [unique][out][in] */ __RPC__inout_opt ULONG *pdwAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumObjects( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ SHCONTF grfFlags,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenumIDList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindToObject( 
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindToStorage( 
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareIDs( 
            /* [in] */ LPARAM lParam,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl1,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewObject( 
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributesOf( 
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [out][in] */ __RPC__inout SFGAOF *rgfInOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIObjectOf( 
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][unique][out][in] */ 
            _Reserved_  UINT *rgfReserved,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayNameOf( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__out STRRET *pName) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetNameOf( 
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  PCUITEMID_CHILD pidl,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  SHGDNF uFlags,
            /* [annotation][out] */ 
            _Outptr_opt_  PITEMID_CHILD *ppidlOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )( 
            __RPC__in IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [string][in] */ __RPC__in_string LPWSTR pszDisplayName,
            /* [annotation][unique][out][in] */ 
            _Reserved_  ULONG *pchEaten,
            /* [out] */ __RPC__deref_out_opt PIDLIST_RELATIVE *ppidl,
            /* [unique][out][in] */ __RPC__inout_opt ULONG *pdwAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )( 
            __RPC__in IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ SHCONTF grfFlags,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenumIDList);
        
        HRESULT ( STDMETHODCALLTYPE *BindToObject )( 
            __RPC__in IShellFolder * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *BindToStorage )( 
            __RPC__in IShellFolder * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *CompareIDs )( 
            __RPC__in IShellFolder * This,
            /* [in] */ LPARAM lParam,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl1,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl2);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewObject )( 
            __RPC__in IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributesOf )( 
            __RPC__in IShellFolder * This,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [out][in] */ __RPC__inout SFGAOF *rgfInOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIObjectOf )( 
            __RPC__in IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][unique][out][in] */ 
            _Reserved_  UINT *rgfReserved,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayNameOf )( 
            __RPC__in IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__out STRRET *pName);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNameOf )( 
            IShellFolder * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  PCUITEMID_CHILD pidl,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  SHGDNF uFlags,
            /* [annotation][out] */ 
            _Outptr_opt_  PITEMID_CHILD *ppidlOut);
        
        END_INTERFACE
    } IShellFolderVtbl;

    interface IShellFolder
    {
        CONST_VTBL struct IShellFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellFolder_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes)	\
    ( (This)->lpVtbl -> ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) ) 

#define IShellFolder_EnumObjects(This,hwnd,grfFlags,ppenumIDList)	\
    ( (This)->lpVtbl -> EnumObjects(This,hwnd,grfFlags,ppenumIDList) ) 

#define IShellFolder_BindToObject(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToObject(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder_BindToStorage(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToStorage(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder_CompareIDs(This,lParam,pidl1,pidl2)	\
    ( (This)->lpVtbl -> CompareIDs(This,lParam,pidl1,pidl2) ) 

#define IShellFolder_CreateViewObject(This,hwndOwner,riid,ppv)	\
    ( (This)->lpVtbl -> CreateViewObject(This,hwndOwner,riid,ppv) ) 

#define IShellFolder_GetAttributesOf(This,cidl,apidl,rgfInOut)	\
    ( (This)->lpVtbl -> GetAttributesOf(This,cidl,apidl,rgfInOut) ) 

#define IShellFolder_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv)	\
    ( (This)->lpVtbl -> GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) ) 

#define IShellFolder_GetDisplayNameOf(This,pidl,uFlags,pName)	\
    ( (This)->lpVtbl -> GetDisplayNameOf(This,pidl,uFlags,pName) ) 

#define IShellFolder_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut)	\
    ( (This)->lpVtbl -> SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IShellFolder_RemoteSetNameOf_Proxy( 
    __RPC__in IShellFolder * This,
    /* [unique][in] */ __RPC__in_opt HWND hwnd,
    /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
    /* [string][in] */ __RPC__in_string LPCWSTR pszName,
    /* [in] */ SHGDNF uFlags,
    /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlOut);


void __RPC_STUB IShellFolder_RemoteSetNameOf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0016 */
/* [local] */ 

typedef IShellFolder *LPSHELLFOLDER;

typedef struct EXTRASEARCH
    {
    GUID guidSearch;
    WCHAR wszFriendlyName[ 80 ];
    WCHAR wszUrl[ 2084 ];
    } 	EXTRASEARCH;

typedef struct EXTRASEARCH *LPEXTRASEARCH;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0016_v0_0_s_ifspec;

#ifndef __IEnumExtraSearch_INTERFACE_DEFINED__
#define __IEnumExtraSearch_INTERFACE_DEFINED__

/* interface IEnumExtraSearch */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumExtraSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E700BE1-9DB6-11d1-A1CE-00C04FD75D13")
    IEnumExtraSearch : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) EXTRASEARCH *rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumExtraSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumExtraSearch * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumExtraSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumExtraSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumExtraSearch * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) EXTRASEARCH *rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumExtraSearch * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumExtraSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumExtraSearch * This,
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum);
        
        END_INTERFACE
    } IEnumExtraSearchVtbl;

    interface IEnumExtraSearch
    {
        CONST_VTBL struct IEnumExtraSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumExtraSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumExtraSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumExtraSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumExtraSearch_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumExtraSearch_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumExtraSearch_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumExtraSearch_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumExtraSearch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0017 */
/* [local] */ 

typedef IEnumExtraSearch *LPENUMEXTRASEARCH;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0017_v0_0_s_ifspec;

#ifndef __IShellFolder2_INTERFACE_DEFINED__
#define __IShellFolder2_INTERFACE_DEFINED__

/* interface IShellFolder2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93F2F68C-1D1B-11d3-A30E-00C04F79ABD1")
    IShellFolder2 : public IShellFolder
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSearchGUID( 
            /* [out] */ __RPC__out GUID *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSearches( 
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultColumn( 
            /* [in] */ DWORD dwRes,
            /* [out] */ __RPC__out ULONG *pSort,
            /* [out] */ __RPC__out ULONG *pDisplay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultColumnState( 
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLSTATEF *pcsFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetailsEx( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out VARIANT *pv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetailsOf( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHELLDETAILS *psd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapColumnToSCID( 
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLUMNID *pscid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellFolder2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellFolder2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [string][in] */ __RPC__in_string LPWSTR pszDisplayName,
            /* [annotation][unique][out][in] */ 
            _Reserved_  ULONG *pchEaten,
            /* [out] */ __RPC__deref_out_opt PIDLIST_RELATIVE *ppidl,
            /* [unique][out][in] */ __RPC__inout_opt ULONG *pdwAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ SHCONTF grfFlags,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenumIDList);
        
        HRESULT ( STDMETHODCALLTYPE *BindToObject )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *BindToStorage )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *CompareIDs )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ LPARAM lParam,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl1,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl2);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewObject )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributesOf )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [out][in] */ __RPC__inout SFGAOF *rgfInOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIObjectOf )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][unique][out][in] */ 
            _Reserved_  UINT *rgfReserved,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayNameOf )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__out STRRET *pName);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetNameOf )( 
            IShellFolder2 * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  PCUITEMID_CHILD pidl,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  SHGDNF uFlags,
            /* [annotation][out] */ 
            _Outptr_opt_  PITEMID_CHILD *ppidlOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSearchGUID )( 
            __RPC__in IShellFolder2 * This,
            /* [out] */ __RPC__out GUID *pguid);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSearches )( 
            __RPC__in IShellFolder2 * This,
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumn )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ DWORD dwRes,
            /* [out] */ __RPC__out ULONG *pSort,
            /* [out] */ __RPC__out ULONG *pDisplay);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnState )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLSTATEF *pcsFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetDetailsEx )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out VARIANT *pv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDetailsOf )( 
            __RPC__in IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHELLDETAILS *psd);
        
        HRESULT ( STDMETHODCALLTYPE *MapColumnToSCID )( 
            __RPC__in IShellFolder2 * This,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLUMNID *pscid);
        
        END_INTERFACE
    } IShellFolder2Vtbl;

    interface IShellFolder2
    {
        CONST_VTBL struct IShellFolder2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellFolder2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellFolder2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellFolder2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellFolder2_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes)	\
    ( (This)->lpVtbl -> ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) ) 

#define IShellFolder2_EnumObjects(This,hwnd,grfFlags,ppenumIDList)	\
    ( (This)->lpVtbl -> EnumObjects(This,hwnd,grfFlags,ppenumIDList) ) 

#define IShellFolder2_BindToObject(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToObject(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder2_BindToStorage(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToStorage(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder2_CompareIDs(This,lParam,pidl1,pidl2)	\
    ( (This)->lpVtbl -> CompareIDs(This,lParam,pidl1,pidl2) ) 

#define IShellFolder2_CreateViewObject(This,hwndOwner,riid,ppv)	\
    ( (This)->lpVtbl -> CreateViewObject(This,hwndOwner,riid,ppv) ) 

#define IShellFolder2_GetAttributesOf(This,cidl,apidl,rgfInOut)	\
    ( (This)->lpVtbl -> GetAttributesOf(This,cidl,apidl,rgfInOut) ) 

#define IShellFolder2_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv)	\
    ( (This)->lpVtbl -> GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) ) 

#define IShellFolder2_GetDisplayNameOf(This,pidl,uFlags,pName)	\
    ( (This)->lpVtbl -> GetDisplayNameOf(This,pidl,uFlags,pName) ) 

#define IShellFolder2_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut)	\
    ( (This)->lpVtbl -> SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) ) 


#define IShellFolder2_GetDefaultSearchGUID(This,pguid)	\
    ( (This)->lpVtbl -> GetDefaultSearchGUID(This,pguid) ) 

#define IShellFolder2_EnumSearches(This,ppenum)	\
    ( (This)->lpVtbl -> EnumSearches(This,ppenum) ) 

#define IShellFolder2_GetDefaultColumn(This,dwRes,pSort,pDisplay)	\
    ( (This)->lpVtbl -> GetDefaultColumn(This,dwRes,pSort,pDisplay) ) 

#define IShellFolder2_GetDefaultColumnState(This,iColumn,pcsFlags)	\
    ( (This)->lpVtbl -> GetDefaultColumnState(This,iColumn,pcsFlags) ) 

#define IShellFolder2_GetDetailsEx(This,pidl,pscid,pv)	\
    ( (This)->lpVtbl -> GetDetailsEx(This,pidl,pscid,pv) ) 

#define IShellFolder2_GetDetailsOf(This,pidl,iColumn,psd)	\
    ( (This)->lpVtbl -> GetDetailsOf(This,pidl,iColumn,psd) ) 

#define IShellFolder2_MapColumnToSCID(This,iColumn,pscid)	\
    ( (This)->lpVtbl -> MapColumnToSCID(This,iColumn,pscid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellFolder2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0018 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum FOLDERFLAGS
    {
        FWF_NONE	= 0,
        FWF_AUTOARRANGE	= 0x1,
        FWF_ABBREVIATEDNAMES	= 0x2,
        FWF_SNAPTOGRID	= 0x4,
        FWF_OWNERDATA	= 0x8,
        FWF_BESTFITWINDOW	= 0x10,
        FWF_DESKTOP	= 0x20,
        FWF_SINGLESEL	= 0x40,
        FWF_NOSUBFOLDERS	= 0x80,
        FWF_TRANSPARENT	= 0x100,
        FWF_NOCLIENTEDGE	= 0x200,
        FWF_NOSCROLL	= 0x400,
        FWF_ALIGNLEFT	= 0x800,
        FWF_NOICONS	= 0x1000,
        FWF_SHOWSELALWAYS	= 0x2000,
        FWF_NOVISIBLE	= 0x4000,
        FWF_SINGLECLICKACTIVATE	= 0x8000,
        FWF_NOWEBVIEW	= 0x10000,
        FWF_HIDEFILENAMES	= 0x20000,
        FWF_CHECKSELECT	= 0x40000,
        FWF_NOENUMREFRESH	= 0x80000,
        FWF_NOGROUPING	= 0x100000,
        FWF_FULLROWSELECT	= 0x200000,
        FWF_NOFILTERS	= 0x400000,
        FWF_NOCOLUMNHEADER	= 0x800000,
        FWF_NOHEADERINALLVIEWS	= 0x1000000,
        FWF_EXTENDEDTILES	= 0x2000000,
        FWF_TRICHECKSELECT	= 0x4000000,
        FWF_AUTOCHECKSELECT	= 0x8000000,
        FWF_NOBROWSERVIEWSTATE	= 0x10000000,
        FWF_SUBSETGROUPS	= 0x20000000,
        FWF_USESEARCHFOLDER	= 0x40000000,
        FWF_ALLOWRTLREADING	= 0x80000000
    } 	FOLDERFLAGS;

DEFINE_ENUM_FLAG_OPERATORS(FOLDERFLAGS)
typedef /* [v1_enum] */ 
enum FOLDERVIEWMODE
    {
        FVM_AUTO	= -1,
        FVM_FIRST	= 1,
        FVM_ICON	= 1,
        FVM_SMALLICON	= 2,
        FVM_LIST	= 3,
        FVM_DETAILS	= 4,
        FVM_THUMBNAIL	= 5,
        FVM_TILE	= 6,
        FVM_THUMBSTRIP	= 7,
        FVM_CONTENT	= 8,
        FVM_LAST	= 8
    } 	FOLDERVIEWMODE;

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef /* [v1_enum] */ 
enum FOLDERLOGICALVIEWMODE
    {
        FLVM_UNSPECIFIED	= -1,
        FLVM_FIRST	= 1,
        FLVM_DETAILS	= 1,
        FLVM_TILES	= 2,
        FLVM_ICONS	= 3,
        FLVM_LIST	= 4,
        FLVM_CONTENT	= 5,
        FLVM_LAST	= 5
    } 	FOLDERLOGICALVIEWMODE;

#endif  // NTDDI_VISTA
typedef struct FOLDERSETTINGS
    {
    UINT ViewMode;
    UINT fFlags;
    } 	FOLDERSETTINGS;

typedef FOLDERSETTINGS *LPFOLDERSETTINGS;

typedef const FOLDERSETTINGS *LPCFOLDERSETTINGS;

typedef FOLDERSETTINGS *PFOLDERSETTINGS;

typedef /* [v1_enum] */ 
enum _SVSIF
    {
        SVSI_DESELECT	= 0,
        SVSI_SELECT	= 0x1,
        SVSI_EDIT	= 0x3,
        SVSI_DESELECTOTHERS	= 0x4,
        SVSI_ENSUREVISIBLE	= 0x8,
        SVSI_FOCUSED	= 0x10,
        SVSI_TRANSLATEPT	= 0x20,
        SVSI_SELECTIONMARK	= 0x40,
        SVSI_POSITIONITEM	= 0x80,
        SVSI_CHECK	= 0x100,
        SVSI_CHECK2	= 0x200,
        SVSI_KEYBOARDSELECT	= 0x401,
        SVSI_NOTAKEFOCUS	= 0x40000000
    } 	_SVSIF;

#define SVSI_NOSTATECHANGE   ((UINT)0x80000000) // work around the use of the high bit that results in 4245: signed/unsigned mismatch
typedef UINT SVSIF;

typedef /* [v1_enum] */ 
enum _SVGIO
    {
        SVGIO_BACKGROUND	= 0,
        SVGIO_SELECTION	= 0x1,
        SVGIO_ALLVIEW	= 0x2,
        SVGIO_CHECKED	= 0x3,
        SVGIO_TYPE_MASK	= 0xf,
        SVGIO_FLAG_VIEWORDER	= 0x80000000
    } 	_SVGIO;

DEFINE_ENUM_FLAG_OPERATORS(_SVGIO)
typedef int SVGIO;

typedef /* [v1_enum] */ 
enum SVUIA_STATUS
    {
        SVUIA_DEACTIVATE	= 0,
        SVUIA_ACTIVATE_NOFOCUS	= 1,
        SVUIA_ACTIVATE_FOCUS	= 2,
        SVUIA_INPLACEACTIVATE	= 3
    } 	SVUIA_STATUS;

#ifdef _FIX_ENABLEMODELESS_CONFLICT
#define    EnableModeless EnableModelessSV
#endif
#ifdef _NEVER_
typedef LPARAM LPFNSVADDPROPSHEETPAGE;

#else //!_NEVER_
#include <prsht.h>
typedef LPFNADDPROPSHEETPAGE LPFNSVADDPROPSHEETPAGE;
#endif //_NEVER_



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0018_v0_0_s_ifspec;

#ifndef __IShellView_INTERFACE_DEFINED__
#define __IShellView_INTERFACE_DEFINED__

/* interface IShellView */
/* [unique][object][uuid] */ 

typedef IShellView *LPSHELLVIEW;


EXTERN_C const IID IID_IShellView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E3-0000-0000-C000-000000000046")
    IShellView : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ __RPC__in MSG *pmsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModeless( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UIActivate( 
            /* [in] */ UINT uState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewWindow( 
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyViewWindow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentInfo( 
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE AddPropertySheetPages( 
            /* [annotation][in] */ 
            _In_  DWORD dwReserved,
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfn,
            /* [annotation][in] */ 
            _In_  LPARAM lparam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveViewState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectItem( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemObject( 
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellView * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            __RPC__in IShellView * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            __RPC__in IShellView * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            __RPC__in IShellView * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )( 
            __RPC__in IShellView * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivate )( 
            __RPC__in IShellView * This,
            /* [in] */ UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            __RPC__in IShellView * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            __RPC__in IShellView * This,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyViewWindow )( 
            __RPC__in IShellView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentInfo )( 
            __RPC__in IShellView * This,
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPages )( 
            IShellView * This,
            /* [annotation][in] */ 
            _In_  DWORD dwReserved,
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfn,
            /* [annotation][in] */ 
            _In_  LPARAM lparam);
        
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )( 
            __RPC__in IShellView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            __RPC__in IShellView * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )( 
            __RPC__in IShellView * This,
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IShellViewVtbl;

    interface IShellView
    {
        CONST_VTBL struct IShellViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellView_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellView_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellView_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#define IShellView_EnableModeless(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) ) 

#define IShellView_UIActivate(This,uState)	\
    ( (This)->lpVtbl -> UIActivate(This,uState) ) 

#define IShellView_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IShellView_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)	\
    ( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) ) 

#define IShellView_DestroyViewWindow(This)	\
    ( (This)->lpVtbl -> DestroyViewWindow(This) ) 

#define IShellView_GetCurrentInfo(This,pfs)	\
    ( (This)->lpVtbl -> GetCurrentInfo(This,pfs) ) 

#define IShellView_AddPropertySheetPages(This,dwReserved,pfn,lparam)	\
    ( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) ) 

#define IShellView_SaveViewState(This)	\
    ( (This)->lpVtbl -> SaveViewState(This) ) 

#define IShellView_SelectItem(This,pidlItem,uFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) ) 

#define IShellView_GetItemObject(This,uItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellView_INTERFACE_DEFINED__ */


#ifndef __IShellView2_INTERFACE_DEFINED__
#define __IShellView2_INTERFACE_DEFINED__

/* interface IShellView2 */
/* [unique][object][uuid] */ 

typedef GUID SHELLVIEWID;

#define SV2GV_CURRENTVIEW ((UINT)-1)
#define SV2GV_DEFAULTVIEW ((UINT)-2)
#include <pshpack8.h>
typedef struct _SV2CVW2_PARAMS
    {
    DWORD cbSize;
    IShellView *psvPrev;
    LPCFOLDERSETTINGS pfs;
    IShellBrowser *psbOwner;
    RECT *prcView;
    const SHELLVIEWID *pvid;
    HWND hwndView;
    } 	SV2CVW2_PARAMS;

typedef struct _SV2CVW2_PARAMS *LPSV2CVW2_PARAMS;

#include <poppack.h>

EXTERN_C const IID IID_IShellView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88E39E80-3578-11CF-AE69-08002B2E1262")
    IShellView2 : public IShellView
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetView( 
            /* [out][in] */ __RPC__inout SHELLVIEWID *pvid,
            /* [in] */ ULONG uView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewWindow2( 
            /* [in] */ __RPC__in LPSV2CVW2_PARAMS lpParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleRename( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectAndPositionItem( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ UINT uFlags,
            /* [unique][in] */ __RPC__in_opt POINT *ppt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellView2 * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            __RPC__in IShellView2 * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            __RPC__in IShellView2 * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            __RPC__in IShellView2 * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )( 
            __RPC__in IShellView2 * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivate )( 
            __RPC__in IShellView2 * This,
            /* [in] */ UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            __RPC__in IShellView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            __RPC__in IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyViewWindow )( 
            __RPC__in IShellView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentInfo )( 
            __RPC__in IShellView2 * This,
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPages )( 
            IShellView2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwReserved,
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfn,
            /* [annotation][in] */ 
            _In_  LPARAM lparam);
        
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )( 
            __RPC__in IShellView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            __RPC__in IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )( 
            __RPC__in IShellView2 * This,
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            __RPC__in IShellView2 * This,
            /* [out][in] */ __RPC__inout SHELLVIEWID *pvid,
            /* [in] */ ULONG uView);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow2 )( 
            __RPC__in IShellView2 * This,
            /* [in] */ __RPC__in LPSV2CVW2_PARAMS lpParams);
        
        HRESULT ( STDMETHODCALLTYPE *HandleRename )( 
            __RPC__in IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlNew);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItem )( 
            __RPC__in IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ UINT uFlags,
            /* [unique][in] */ __RPC__in_opt POINT *ppt);
        
        END_INTERFACE
    } IShellView2Vtbl;

    interface IShellView2
    {
        CONST_VTBL struct IShellView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellView2_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellView2_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellView2_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#define IShellView2_EnableModeless(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) ) 

#define IShellView2_UIActivate(This,uState)	\
    ( (This)->lpVtbl -> UIActivate(This,uState) ) 

#define IShellView2_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IShellView2_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)	\
    ( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) ) 

#define IShellView2_DestroyViewWindow(This)	\
    ( (This)->lpVtbl -> DestroyViewWindow(This) ) 

#define IShellView2_GetCurrentInfo(This,pfs)	\
    ( (This)->lpVtbl -> GetCurrentInfo(This,pfs) ) 

#define IShellView2_AddPropertySheetPages(This,dwReserved,pfn,lparam)	\
    ( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) ) 

#define IShellView2_SaveViewState(This)	\
    ( (This)->lpVtbl -> SaveViewState(This) ) 

#define IShellView2_SelectItem(This,pidlItem,uFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) ) 

#define IShellView2_GetItemObject(This,uItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) ) 


#define IShellView2_GetView(This,pvid,uView)	\
    ( (This)->lpVtbl -> GetView(This,pvid,uView) ) 

#define IShellView2_CreateViewWindow2(This,lpParams)	\
    ( (This)->lpVtbl -> CreateViewWindow2(This,lpParams) ) 

#define IShellView2_HandleRename(This,pidlNew)	\
    ( (This)->lpVtbl -> HandleRename(This,pidlNew) ) 

#define IShellView2_SelectAndPositionItem(This,pidlItem,uFlags,ppt)	\
    ( (This)->lpVtbl -> SelectAndPositionItem(This,pidlItem,uFlags,ppt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellView2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0020 */
/* [local] */ 

#ifdef _FIX_ENABLEMODELESS_CONFLICT
#undef    EnableModeless 
#endif


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0020_v0_0_s_ifspec;

#ifndef __IFolderView_INTERFACE_DEFINED__
#define __IFolderView_INTERFACE_DEFINED__

/* interface IFolderView */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cde725b0-ccc9-4519-917e-325d72fab4ce")
    IFolderView : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentViewMode( 
            /* [out] */ __RPC__out UINT *pViewMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentViewMode( 
            /* [in] */ UINT ViewMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int iItemIndex,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemCount( 
            /* [in] */ UINT uFlags,
            /* [out] */ __RPC__out int *pcItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Items( 
            /* [in] */ UINT uFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectionMarkedItem( 
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFocusedItem( 
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemPosition( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out POINT *ppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpacing( 
            /* [unique][out][in] */ __RPC__inout_opt POINT *ppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSpacing( 
            /* [out] */ __RPC__out POINT *ppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutoArrange( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectItem( 
            /* [in] */ int iItem,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectAndPositionItems( 
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][unique][in][disable_consistency_check] */ __RPC__in_ecount_full_opt(cidl) POINT *apt,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFolderViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFolderView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFolderView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFolderView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentViewMode )( 
            __RPC__in IFolderView * This,
            /* [out] */ __RPC__out UINT *pViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentViewMode )( 
            __RPC__in IFolderView * This,
            /* [in] */ UINT ViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IFolderView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            __RPC__in IFolderView * This,
            /* [in] */ int iItemIndex,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *ItemCount )( 
            __RPC__in IFolderView * This,
            /* [in] */ UINT uFlags,
            /* [out] */ __RPC__out int *pcItems);
        
        HRESULT ( STDMETHODCALLTYPE *Items )( 
            __RPC__in IFolderView * This,
            /* [in] */ UINT uFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionMarkedItem )( 
            __RPC__in IFolderView * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedItem )( 
            __RPC__in IFolderView * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemPosition )( 
            __RPC__in IFolderView * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpacing )( 
            __RPC__in IFolderView * This,
            /* [unique][out][in] */ __RPC__inout_opt POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSpacing )( 
            __RPC__in IFolderView * This,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutoArrange )( 
            __RPC__in IFolderView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            __RPC__in IFolderView * This,
            /* [in] */ int iItem,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItems )( 
            __RPC__in IFolderView * This,
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][unique][in][disable_consistency_check] */ __RPC__in_ecount_full_opt(cidl) POINT *apt,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IFolderViewVtbl;

    interface IFolderView
    {
        CONST_VTBL struct IFolderViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderView_GetCurrentViewMode(This,pViewMode)	\
    ( (This)->lpVtbl -> GetCurrentViewMode(This,pViewMode) ) 

#define IFolderView_SetCurrentViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> SetCurrentViewMode(This,ViewMode) ) 

#define IFolderView_GetFolder(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetFolder(This,riid,ppv) ) 

#define IFolderView_Item(This,iItemIndex,ppidl)	\
    ( (This)->lpVtbl -> Item(This,iItemIndex,ppidl) ) 

#define IFolderView_ItemCount(This,uFlags,pcItems)	\
    ( (This)->lpVtbl -> ItemCount(This,uFlags,pcItems) ) 

#define IFolderView_Items(This,uFlags,riid,ppv)	\
    ( (This)->lpVtbl -> Items(This,uFlags,riid,ppv) ) 

#define IFolderView_GetSelectionMarkedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetSelectionMarkedItem(This,piItem) ) 

#define IFolderView_GetFocusedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetFocusedItem(This,piItem) ) 

#define IFolderView_GetItemPosition(This,pidl,ppt)	\
    ( (This)->lpVtbl -> GetItemPosition(This,pidl,ppt) ) 

#define IFolderView_GetSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetSpacing(This,ppt) ) 

#define IFolderView_GetDefaultSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetDefaultSpacing(This,ppt) ) 

#define IFolderView_GetAutoArrange(This)	\
    ( (This)->lpVtbl -> GetAutoArrange(This) ) 

#define IFolderView_SelectItem(This,iItem,dwFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,iItem,dwFlags) ) 

#define IFolderView_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags)	\
    ( (This)->lpVtbl -> SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderView_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0021 */
/* [local] */ 

#define SID_SFolderView IID_IFolderView    // folder view, usually IFolderView
#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_IE >= _WIN32_IE_IE70)
#ifndef NO_SHOBJIDL_SORTDIRECTION
/* [v1_enum] */ 
enum tagSORTDIRECTION
    {
        SORT_DESCENDING	= -1,
        SORT_ASCENDING	= 1
    } ;
#endif  // NO_SHOBJIDL_SORTDIRECTION
typedef int SORTDIRECTION;

typedef struct SORTCOLUMN
    {
    PROPERTYKEY propkey;
    SORTDIRECTION direction;
    } 	SORTCOLUMN;

typedef /* [v1_enum] */ 
enum FVTEXTTYPE
    {
        FVST_EMPTYTEXT	= 0
    } 	FVTEXTTYPE;


typedef HRESULT DEPRECATED_HRESULT;

#if defined(__cplusplus)
#define DEPRECATED_HRESULT HRESULT DECLSPEC_DEPRECATED
#endif


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0021_v0_0_s_ifspec;

#ifndef __IFolderView2_INTERFACE_DEFINED__
#define __IFolderView2_INTERFACE_DEFINED__

/* interface IFolderView2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1af3a467-214f-4298-908e-06b03e0b39f9")
    IFolderView2 : public IFolderView
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetGroupBy( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [in] */ BOOL fAscending) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetGroupBy( 
            /* [annotation][out] */ 
            _Out_  PROPERTYKEY *pkey,
            /* [annotation][out] */ 
            _Out_opt_  BOOL *pfAscending) = 0;
        
        virtual DEPRECATED_HRESULT STDMETHODCALLTYPE SetViewProperty( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in REFPROPVARIANT propvar) = 0;
        
        virtual DEPRECATED_HRESULT STDMETHODCALLTYPE GetViewProperty( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar) = 0;
        
        virtual DEPRECATED_HRESULT STDMETHODCALLTYPE SetTileViewProperties( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPropList) = 0;
        
        virtual DEPRECATED_HRESULT STDMETHODCALLTYPE SetExtendedTileViewProperties( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPropList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetText( 
            /* [in] */ FVTEXTTYPE iType,
            /* [in] */ __RPC__in LPCWSTR pwszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentFolderFlags( 
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentFolderFlags( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortColumnCount( 
            /* [out] */ __RPC__out int *pcColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSortColumns( 
            /* [size_is][in] */ __RPC__in_ecount_full(cColumns) const SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortColumns( 
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int iItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVisibleItem( 
            /* [in] */ int iStart,
            /* [in] */ BOOL fPrevious,
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItem( 
            /* [in] */ int iStart,
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [in] */ BOOL fNoneImpliesFolder,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectionState( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeVerbOnSelection( 
            /* [string][unique][in] */ __RPC__in_opt_string LPCSTR pszVerb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetViewModeAndIconSize( 
            /* [in] */ FOLDERVIEWMODE uViewMode,
            /* [in] */ int iImageSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewModeAndIconSize( 
            /* [out] */ __RPC__out FOLDERVIEWMODE *puViewMode,
            /* [out] */ __RPC__out int *piImageSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGroupSubsetCount( 
            /* [in] */ UINT cVisibleRows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupSubsetCount( 
            /* [out] */ __RPC__out UINT *pcVisibleRows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRedraw( 
            /* [in] */ BOOL fRedrawOn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMoveInSameFolder( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoRename( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFolderView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFolderView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFolderView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentViewMode )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out UINT *pViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentViewMode )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ UINT ViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ int iItemIndex,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *ItemCount )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ UINT uFlags,
            /* [out] */ __RPC__out int *pcItems);
        
        HRESULT ( STDMETHODCALLTYPE *Items )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ UINT uFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionMarkedItem )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedItem )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemPosition )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpacing )( 
            __RPC__in IFolderView2 * This,
            /* [unique][out][in] */ __RPC__inout_opt POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSpacing )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutoArrange )( 
            __RPC__in IFolderView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ int iItem,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItems )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][unique][in][disable_consistency_check] */ __RPC__in_ecount_full_opt(cidl) POINT *apt,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetGroupBy )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [in] */ BOOL fAscending);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetGroupBy )( 
            IFolderView2 * This,
            /* [annotation][out] */ 
            _Out_  PROPERTYKEY *pkey,
            /* [annotation][out] */ 
            _Out_opt_  BOOL *pfAscending);
        
        DEPRECATED_HRESULT ( STDMETHODCALLTYPE *SetViewProperty )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in REFPROPVARIANT propvar);
        
        DEPRECATED_HRESULT ( STDMETHODCALLTYPE *GetViewProperty )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar);
        
        DEPRECATED_HRESULT ( STDMETHODCALLTYPE *SetTileViewProperties )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPropList);
        
        DEPRECATED_HRESULT ( STDMETHODCALLTYPE *SetExtendedTileViewProperties )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPropList);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ FVTEXTTYPE iType,
            /* [in] */ __RPC__in LPCWSTR pwszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentFolderFlags )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentFolderFlags )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSortColumnCount )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out int *pcColumns);
        
        HRESULT ( STDMETHODCALLTYPE *SetSortColumns )( 
            __RPC__in IFolderView2 * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cColumns) const SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns);
        
        HRESULT ( STDMETHODCALLTYPE *GetSortColumns )( 
            __RPC__in IFolderView2 * This,
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ int iItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetVisibleItem )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ int iStart,
            /* [in] */ BOOL fPrevious,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItem )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ int iStart,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ BOOL fNoneImpliesFolder,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsia);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionState )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeVerbOnSelection )( 
            __RPC__in IFolderView2 * This,
            /* [string][unique][in] */ __RPC__in_opt_string LPCSTR pszVerb);
        
        HRESULT ( STDMETHODCALLTYPE *SetViewModeAndIconSize )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ FOLDERVIEWMODE uViewMode,
            /* [in] */ int iImageSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewModeAndIconSize )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out FOLDERVIEWMODE *puViewMode,
            /* [out] */ __RPC__out int *piImageSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetGroupSubsetCount )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ UINT cVisibleRows);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupSubsetCount )( 
            __RPC__in IFolderView2 * This,
            /* [out] */ __RPC__out UINT *pcVisibleRows);
        
        HRESULT ( STDMETHODCALLTYPE *SetRedraw )( 
            __RPC__in IFolderView2 * This,
            /* [in] */ BOOL fRedrawOn);
        
        HRESULT ( STDMETHODCALLTYPE *IsMoveInSameFolder )( 
            __RPC__in IFolderView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoRename )( 
            __RPC__in IFolderView2 * This);
        
        END_INTERFACE
    } IFolderView2Vtbl;

    interface IFolderView2
    {
        CONST_VTBL struct IFolderView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderView2_GetCurrentViewMode(This,pViewMode)	\
    ( (This)->lpVtbl -> GetCurrentViewMode(This,pViewMode) ) 

#define IFolderView2_SetCurrentViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> SetCurrentViewMode(This,ViewMode) ) 

#define IFolderView2_GetFolder(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetFolder(This,riid,ppv) ) 

#define IFolderView2_Item(This,iItemIndex,ppidl)	\
    ( (This)->lpVtbl -> Item(This,iItemIndex,ppidl) ) 

#define IFolderView2_ItemCount(This,uFlags,pcItems)	\
    ( (This)->lpVtbl -> ItemCount(This,uFlags,pcItems) ) 

#define IFolderView2_Items(This,uFlags,riid,ppv)	\
    ( (This)->lpVtbl -> Items(This,uFlags,riid,ppv) ) 

#define IFolderView2_GetSelectionMarkedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetSelectionMarkedItem(This,piItem) ) 

#define IFolderView2_GetFocusedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetFocusedItem(This,piItem) ) 

#define IFolderView2_GetItemPosition(This,pidl,ppt)	\
    ( (This)->lpVtbl -> GetItemPosition(This,pidl,ppt) ) 

#define IFolderView2_GetSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetSpacing(This,ppt) ) 

#define IFolderView2_GetDefaultSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetDefaultSpacing(This,ppt) ) 

#define IFolderView2_GetAutoArrange(This)	\
    ( (This)->lpVtbl -> GetAutoArrange(This) ) 

#define IFolderView2_SelectItem(This,iItem,dwFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,iItem,dwFlags) ) 

#define IFolderView2_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags)	\
    ( (This)->lpVtbl -> SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) ) 


#define IFolderView2_SetGroupBy(This,key,fAscending)	\
    ( (This)->lpVtbl -> SetGroupBy(This,key,fAscending) ) 

#define IFolderView2_GetGroupBy(This,pkey,pfAscending)	\
    ( (This)->lpVtbl -> GetGroupBy(This,pkey,pfAscending) ) 

#define IFolderView2_SetViewProperty(This,pidl,propkey,propvar)	\
    ( (This)->lpVtbl -> SetViewProperty(This,pidl,propkey,propvar) ) 

#define IFolderView2_GetViewProperty(This,pidl,propkey,ppropvar)	\
    ( (This)->lpVtbl -> GetViewProperty(This,pidl,propkey,ppropvar) ) 

#define IFolderView2_SetTileViewProperties(This,pidl,pszPropList)	\
    ( (This)->lpVtbl -> SetTileViewProperties(This,pidl,pszPropList) ) 

#define IFolderView2_SetExtendedTileViewProperties(This,pidl,pszPropList)	\
    ( (This)->lpVtbl -> SetExtendedTileViewProperties(This,pidl,pszPropList) ) 

#define IFolderView2_SetText(This,iType,pwszText)	\
    ( (This)->lpVtbl -> SetText(This,iType,pwszText) ) 

#define IFolderView2_SetCurrentFolderFlags(This,dwMask,dwFlags)	\
    ( (This)->lpVtbl -> SetCurrentFolderFlags(This,dwMask,dwFlags) ) 

#define IFolderView2_GetCurrentFolderFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetCurrentFolderFlags(This,pdwFlags) ) 

#define IFolderView2_GetSortColumnCount(This,pcColumns)	\
    ( (This)->lpVtbl -> GetSortColumnCount(This,pcColumns) ) 

#define IFolderView2_SetSortColumns(This,rgSortColumns,cColumns)	\
    ( (This)->lpVtbl -> SetSortColumns(This,rgSortColumns,cColumns) ) 

#define IFolderView2_GetSortColumns(This,rgSortColumns,cColumns)	\
    ( (This)->lpVtbl -> GetSortColumns(This,rgSortColumns,cColumns) ) 

#define IFolderView2_GetItem(This,iItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItem(This,iItem,riid,ppv) ) 

#define IFolderView2_GetVisibleItem(This,iStart,fPrevious,piItem)	\
    ( (This)->lpVtbl -> GetVisibleItem(This,iStart,fPrevious,piItem) ) 

#define IFolderView2_GetSelectedItem(This,iStart,piItem)	\
    ( (This)->lpVtbl -> GetSelectedItem(This,iStart,piItem) ) 

#define IFolderView2_GetSelection(This,fNoneImpliesFolder,ppsia)	\
    ( (This)->lpVtbl -> GetSelection(This,fNoneImpliesFolder,ppsia) ) 

#define IFolderView2_GetSelectionState(This,pidl,pdwFlags)	\
    ( (This)->lpVtbl -> GetSelectionState(This,pidl,pdwFlags) ) 

#define IFolderView2_InvokeVerbOnSelection(This,pszVerb)	\
    ( (This)->lpVtbl -> InvokeVerbOnSelection(This,pszVerb) ) 

#define IFolderView2_SetViewModeAndIconSize(This,uViewMode,iImageSize)	\
    ( (This)->lpVtbl -> SetViewModeAndIconSize(This,uViewMode,iImageSize) ) 

#define IFolderView2_GetViewModeAndIconSize(This,puViewMode,piImageSize)	\
    ( (This)->lpVtbl -> GetViewModeAndIconSize(This,puViewMode,piImageSize) ) 

#define IFolderView2_SetGroupSubsetCount(This,cVisibleRows)	\
    ( (This)->lpVtbl -> SetGroupSubsetCount(This,cVisibleRows) ) 

#define IFolderView2_GetGroupSubsetCount(This,pcVisibleRows)	\
    ( (This)->lpVtbl -> GetGroupSubsetCount(This,pcVisibleRows) ) 

#define IFolderView2_SetRedraw(This,fRedrawOn)	\
    ( (This)->lpVtbl -> SetRedraw(This,fRedrawOn) ) 

#define IFolderView2_IsMoveInSameFolder(This)	\
    ( (This)->lpVtbl -> IsMoveInSameFolder(This) ) 

#define IFolderView2_DoRename(This)	\
    ( (This)->lpVtbl -> DoRename(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IFolderView2_RemoteGetGroupBy_Proxy( 
    __RPC__in IFolderView2 * This,
    /* [out] */ __RPC__out PROPERTYKEY *pkey,
    /* [out] */ __RPC__out BOOL *pfAscending);


void __RPC_STUB IFolderView2_RemoteGetGroupBy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFolderView2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0022 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0022_v0_0_s_ifspec;

#ifndef __IFolderViewSettings_INTERFACE_DEFINED__
#define __IFolderViewSettings_INTERFACE_DEFINED__

/* interface IFolderViewSettings */
/* [object][uuid] */ 


EXTERN_C const IID IID_IFolderViewSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ae8c987d-8797-4ed3-be72-2a47dd938db0")
    IFolderViewSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetColumnPropertyList( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupByProperty( 
            /* [out] */ __RPC__out PROPERTYKEY *pkey,
            /* [out] */ __RPC__out BOOL *pfGroupAscending) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewMode( 
            /* [out] */ __RPC__out FOLDERLOGICALVIEWMODE *plvm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconSize( 
            /* [out] */ __RPC__out UINT *puIconSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderFlags( 
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderMask,
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortColumns( 
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cColumnsIn, *pcColumnsOut) SORTCOLUMN *rgSortColumns,
            /* [in] */ UINT cColumnsIn,
            /* [out] */ __RPC__out UINT *pcColumnsOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupSubsetCount( 
            /* [out] */ __RPC__out UINT *pcVisibleRows) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFolderViewSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFolderViewSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFolderViewSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFolderViewSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumnPropertyList )( 
            __RPC__in IFolderViewSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupByProperty )( 
            __RPC__in IFolderViewSettings * This,
            /* [out] */ __RPC__out PROPERTYKEY *pkey,
            /* [out] */ __RPC__out BOOL *pfGroupAscending);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewMode )( 
            __RPC__in IFolderViewSettings * This,
            /* [out] */ __RPC__out FOLDERLOGICALVIEWMODE *plvm);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconSize )( 
            __RPC__in IFolderViewSettings * This,
            /* [out] */ __RPC__out UINT *puIconSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderFlags )( 
            __RPC__in IFolderViewSettings * This,
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderMask,
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSortColumns )( 
            __RPC__in IFolderViewSettings * This,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cColumnsIn, *pcColumnsOut) SORTCOLUMN *rgSortColumns,
            /* [in] */ UINT cColumnsIn,
            /* [out] */ __RPC__out UINT *pcColumnsOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupSubsetCount )( 
            __RPC__in IFolderViewSettings * This,
            /* [out] */ __RPC__out UINT *pcVisibleRows);
        
        END_INTERFACE
    } IFolderViewSettingsVtbl;

    interface IFolderViewSettings
    {
        CONST_VTBL struct IFolderViewSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderViewSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderViewSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderViewSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderViewSettings_GetColumnPropertyList(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetColumnPropertyList(This,riid,ppv) ) 

#define IFolderViewSettings_GetGroupByProperty(This,pkey,pfGroupAscending)	\
    ( (This)->lpVtbl -> GetGroupByProperty(This,pkey,pfGroupAscending) ) 

#define IFolderViewSettings_GetViewMode(This,plvm)	\
    ( (This)->lpVtbl -> GetViewMode(This,plvm) ) 

#define IFolderViewSettings_GetIconSize(This,puIconSize)	\
    ( (This)->lpVtbl -> GetIconSize(This,puIconSize) ) 

#define IFolderViewSettings_GetFolderFlags(This,pfolderMask,pfolderFlags)	\
    ( (This)->lpVtbl -> GetFolderFlags(This,pfolderMask,pfolderFlags) ) 

#define IFolderViewSettings_GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut)	\
    ( (This)->lpVtbl -> GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut) ) 

#define IFolderViewSettings_GetGroupSubsetCount(This,pcVisibleRows)	\
    ( (This)->lpVtbl -> GetGroupSubsetCount(This,pcVisibleRows) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderViewSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0023 */
/* [local] */ 

#endif  // NTDDI_VISTA
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0023_v0_0_s_ifspec;

#ifndef __IPreviewHandlerVisuals_INTERFACE_DEFINED__
#define __IPreviewHandlerVisuals_INTERFACE_DEFINED__

/* interface IPreviewHandlerVisuals */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPreviewHandlerVisuals;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("196bf9a5-b346-4ef0-aa1e-5dcdb76768b1")
    IPreviewHandlerVisuals : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ COLORREF color) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFont( 
            /* [in] */ __RPC__in const LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTextColor( 
            /* [in] */ COLORREF color) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPreviewHandlerVisualsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPreviewHandlerVisuals * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPreviewHandlerVisuals * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPreviewHandlerVisuals * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            __RPC__in IPreviewHandlerVisuals * This,
            /* [in] */ COLORREF color);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            __RPC__in IPreviewHandlerVisuals * This,
            /* [in] */ __RPC__in const LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetTextColor )( 
            __RPC__in IPreviewHandlerVisuals * This,
            /* [in] */ COLORREF color);
        
        END_INTERFACE
    } IPreviewHandlerVisualsVtbl;

    interface IPreviewHandlerVisuals
    {
        CONST_VTBL struct IPreviewHandlerVisualsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewHandlerVisuals_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewHandlerVisuals_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewHandlerVisuals_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewHandlerVisuals_SetBackgroundColor(This,color)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,color) ) 

#define IPreviewHandlerVisuals_SetFont(This,plf)	\
    ( (This)->lpVtbl -> SetFont(This,plf) ) 

#define IPreviewHandlerVisuals_SetTextColor(This,color)	\
    ( (This)->lpVtbl -> SetTextColor(This,color) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewHandlerVisuals_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0024 */
/* [local] */ 

#endif  // _WIN32_IE_IE70
#define CDBOSC_SETFOCUS     0x00000000
#define CDBOSC_KILLFOCUS    0x00000001
#define CDBOSC_SELCHANGE    0x00000002
#define CDBOSC_RENAME       0x00000003
#define CDBOSC_STATECHANGE  0x00000004


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0024_v0_0_s_ifspec;

#ifndef __ICommDlgBrowser_INTERFACE_DEFINED__
#define __ICommDlgBrowser_INTERFACE_DEFINED__

/* interface ICommDlgBrowser */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICommDlgBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F1-0000-0000-C000-000000000046")
    ICommDlgBrowser : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnDefaultCommand( 
            /* [in] */ __RPC__in_opt IShellView *ppshv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnStateChange( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IncludeObject( 
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICommDlgBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICommDlgBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICommDlgBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICommDlgBrowser * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDefaultCommand )( 
            __RPC__in ICommDlgBrowser * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )( 
            __RPC__in ICommDlgBrowser * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeObject )( 
            __RPC__in ICommDlgBrowser * This,
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        END_INTERFACE
    } ICommDlgBrowserVtbl;

    interface ICommDlgBrowser
    {
        CONST_VTBL struct ICommDlgBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommDlgBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICommDlgBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICommDlgBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICommDlgBrowser_OnDefaultCommand(This,ppshv)	\
    ( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) ) 

#define ICommDlgBrowser_OnStateChange(This,ppshv,uChange)	\
    ( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) ) 

#define ICommDlgBrowser_IncludeObject(This,ppshv,pidl)	\
    ( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICommDlgBrowser_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0025 */
/* [local] */ 

typedef ICommDlgBrowser *LPCOMMDLGBROWSER;

#define SID_SExplorerBrowserFrame IID_ICommDlgBrowser
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define CDB2N_CONTEXTMENU_DONE  0x00000001
#define CDB2N_CONTEXTMENU_START 0x00000002
#define CDB2GVF_SHOWALLFILES        0x00000001
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CDB2GVF_ISFILESAVE          0x00000002 // is file save, else file open
#define CDB2GVF_ALLOWPREVIEWPANE    0x00000004
#define CDB2GVF_NOSELECTVERB        0x00000008
#define CDB2GVF_NOINCLUDEITEM       0x00000010
#define CDB2GVF_ISFOLDERPICKER      0x00000020
#define CDB2GVF_ADDSHIELD           0x00000040   // when CDB2GVF_NOSELECTVERB is not specified this flag controls the display of a LUA shield on the Select menu item
#endif  // NTDDI_VISTA


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0025_v0_0_s_ifspec;

#ifndef __ICommDlgBrowser2_INTERFACE_DEFINED__
#define __ICommDlgBrowser2_INTERFACE_DEFINED__

/* interface ICommDlgBrowser2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICommDlgBrowser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10339516-2894-11d2-9039-00C04F8EEB3E")
    ICommDlgBrowser2 : public ICommDlgBrowser
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ DWORD dwNotifyType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultMenuText( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchMax) LPWSTR pszText,
            /* [in] */ int cchMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewFlags( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICommDlgBrowser2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICommDlgBrowser2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICommDlgBrowser2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDefaultCommand )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeObject )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ DWORD dwNotifyType);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMenuText )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchMax) LPWSTR pszText,
            /* [in] */ int cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )( 
            __RPC__in ICommDlgBrowser2 * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        END_INTERFACE
    } ICommDlgBrowser2Vtbl;

    interface ICommDlgBrowser2
    {
        CONST_VTBL struct ICommDlgBrowser2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommDlgBrowser2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICommDlgBrowser2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICommDlgBrowser2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICommDlgBrowser2_OnDefaultCommand(This,ppshv)	\
    ( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) ) 

#define ICommDlgBrowser2_OnStateChange(This,ppshv,uChange)	\
    ( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) ) 

#define ICommDlgBrowser2_IncludeObject(This,ppshv,pidl)	\
    ( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) ) 


#define ICommDlgBrowser2_Notify(This,ppshv,dwNotifyType)	\
    ( (This)->lpVtbl -> Notify(This,ppshv,dwNotifyType) ) 

#define ICommDlgBrowser2_GetDefaultMenuText(This,ppshv,pszText,cchMax)	\
    ( (This)->lpVtbl -> GetDefaultMenuText(This,ppshv,pszText,cchMax) ) 

#define ICommDlgBrowser2_GetViewFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetViewFlags(This,pdwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICommDlgBrowser2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0026 */
/* [local] */ 

typedef ICommDlgBrowser2 *LPCOMMDLGBROWSER2;

#endif  // NTDDI_WIN2K
#if (_WIN32_IE >= _WIN32_IE_IE70)
typedef /* [v1_enum] */ 
enum CM_MASK
    {
        CM_MASK_WIDTH	= 0x1,
        CM_MASK_DEFAULTWIDTH	= 0x2,
        CM_MASK_IDEALWIDTH	= 0x4,
        CM_MASK_NAME	= 0x8,
        CM_MASK_STATE	= 0x10
    } 	CM_MASK;

DEFINE_ENUM_FLAG_OPERATORS(CM_MASK)
typedef /* [v1_enum] */ 
enum CM_STATE
    {
        CM_STATE_NONE	= 0,
        CM_STATE_VISIBLE	= 0x1,
        CM_STATE_FIXEDWIDTH	= 0x2,
        CM_STATE_NOSORTBYFOLDERNESS	= 0x4,
        CM_STATE_ALWAYSVISIBLE	= 0x8
    } 	CM_STATE;

DEFINE_ENUM_FLAG_OPERATORS(CM_STATE)
typedef /* [v1_enum] */ 
enum CM_ENUM_FLAGS
    {
        CM_ENUM_ALL	= 0x1,
        CM_ENUM_VISIBLE	= 0x2
    } 	CM_ENUM_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(CM_ENUM_FLAGS)
typedef /* [v1_enum] */ 
enum CM_SET_WIDTH_VALUE
    {
        CM_WIDTH_USEDEFAULT	= -1,
        CM_WIDTH_AUTOSIZE	= -2
    } 	CM_SET_WIDTH_VALUE;

typedef struct CM_COLUMNINFO
    {
    DWORD cbSize;
    DWORD dwMask;
    DWORD dwState;
    UINT uWidth;
    UINT uDefaultWidth;
    UINT uIdealWidth;
    WCHAR wszName[ 80 ];
    } 	CM_COLUMNINFO;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0026_v0_0_s_ifspec;

#ifndef __IColumnManager_INTERFACE_DEFINED__
#define __IColumnManager_INTERFACE_DEFINED__

/* interface IColumnManager */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IColumnManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8ec27bb-3f3b-4042-b10a-4acfd924d453")
    IColumnManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColumnInfo( 
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in const CM_COLUMNINFO *pcmci) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumnInfo( 
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out][in] */ __RPC__inout CM_COLUMNINFO *pcmci) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumnCount( 
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [out] */ __RPC__out UINT *puCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumns( 
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColumns( 
            /* [size_is][in] */ __RPC__in_ecount_full(cVisible) const PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cVisible) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IColumnManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IColumnManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IColumnManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IColumnManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetColumnInfo )( 
            __RPC__in IColumnManager * This,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in const CM_COLUMNINFO *pcmci);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumnInfo )( 
            __RPC__in IColumnManager * This,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out][in] */ __RPC__inout CM_COLUMNINFO *pcmci);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumnCount )( 
            __RPC__in IColumnManager * This,
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [out] */ __RPC__out UINT *puCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumns )( 
            __RPC__in IColumnManager * This,
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cColumns);
        
        HRESULT ( STDMETHODCALLTYPE *SetColumns )( 
            __RPC__in IColumnManager * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cVisible) const PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cVisible);
        
        END_INTERFACE
    } IColumnManagerVtbl;

    interface IColumnManager
    {
        CONST_VTBL struct IColumnManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IColumnManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IColumnManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IColumnManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IColumnManager_SetColumnInfo(This,propkey,pcmci)	\
    ( (This)->lpVtbl -> SetColumnInfo(This,propkey,pcmci) ) 

#define IColumnManager_GetColumnInfo(This,propkey,pcmci)	\
    ( (This)->lpVtbl -> GetColumnInfo(This,propkey,pcmci) ) 

#define IColumnManager_GetColumnCount(This,dwFlags,puCount)	\
    ( (This)->lpVtbl -> GetColumnCount(This,dwFlags,puCount) ) 

#define IColumnManager_GetColumns(This,dwFlags,rgkeyOrder,cColumns)	\
    ( (This)->lpVtbl -> GetColumns(This,dwFlags,rgkeyOrder,cColumns) ) 

#define IColumnManager_SetColumns(This,rgkeyOrder,cVisible)	\
    ( (This)->lpVtbl -> SetColumns(This,rgkeyOrder,cVisible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IColumnManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0027 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0027_v0_0_s_ifspec;

#ifndef __IFolderFilterSite_INTERFACE_DEFINED__
#define __IFolderFilterSite_INTERFACE_DEFINED__

/* interface IFolderFilterSite */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderFilterSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C0A651F5-B48B-11d2-B5ED-006097C686F6")
    IFolderFilterSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFilter( 
            /* [in] */ __RPC__in_opt IUnknown *punk) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFolderFilterSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFolderFilterSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFolderFilterSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFolderFilterSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            __RPC__in IFolderFilterSite * This,
            /* [in] */ __RPC__in_opt IUnknown *punk);
        
        END_INTERFACE
    } IFolderFilterSiteVtbl;

    interface IFolderFilterSite
    {
        CONST_VTBL struct IFolderFilterSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderFilterSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderFilterSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderFilterSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderFilterSite_SetFilter(This,punk)	\
    ( (This)->lpVtbl -> SetFilter(This,punk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderFilterSite_INTERFACE_DEFINED__ */


#ifndef __IFolderFilter_INTERFACE_DEFINED__
#define __IFolderFilter_INTERFACE_DEFINED__

/* interface IFolderFilter */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CC22886-DC8E-11d2-B1D0-00C04F8EEB3E")
    IFolderFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShouldShow( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumFlags( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd,
            /* [out][in] */ __RPC__inout DWORD *pgrfFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFolderFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFolderFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFolderFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFolderFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShouldShow )( 
            __RPC__in IFolderFilter * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumFlags )( 
            __RPC__in IFolderFilter * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd,
            /* [out][in] */ __RPC__inout DWORD *pgrfFlags);
        
        END_INTERFACE
    } IFolderFilterVtbl;

    interface IFolderFilter
    {
        CONST_VTBL struct IFolderFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderFilter_ShouldShow(This,psf,pidlFolder,pidlItem)	\
    ( (This)->lpVtbl -> ShouldShow(This,psf,pidlFolder,pidlItem) ) 

#define IFolderFilter_GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags)	\
    ( (This)->lpVtbl -> GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderFilter_INTERFACE_DEFINED__ */


#ifndef __IInputObjectSite_INTERFACE_DEFINED__
#define __IInputObjectSite_INTERFACE_DEFINED__

/* interface IInputObjectSite */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputObjectSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1DB8392-7331-11D0-8C99-00A0C92DBFE8")
    IInputObjectSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFocusChangeIS( 
            /* [unique][in] */ __RPC__in_opt IUnknown *punkObj,
            /* [in] */ BOOL fSetFocus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInputObjectSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInputObjectSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInputObjectSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInputObjectSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFocusChangeIS )( 
            __RPC__in IInputObjectSite * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkObj,
            /* [in] */ BOOL fSetFocus);
        
        END_INTERFACE
    } IInputObjectSiteVtbl;

    interface IInputObjectSite
    {
        CONST_VTBL struct IInputObjectSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputObjectSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputObjectSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputObjectSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputObjectSite_OnFocusChangeIS(This,punkObj,fSetFocus)	\
    ( (This)->lpVtbl -> OnFocusChangeIS(This,punkObj,fSetFocus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInputObjectSite_INTERFACE_DEFINED__ */


#ifndef __IInputObject_INTERFACE_DEFINED__
#define __IInputObject_INTERFACE_DEFINED__

/* interface IInputObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68284fAA-6A48-11D0-8c78-00C04fd918b4")
    IInputObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UIActivateIO( 
            /* [in] */ BOOL fActivate,
            /* [unique][in] */ __RPC__in_opt MSG *pMsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasFocusIO( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAcceleratorIO( 
            /* [in] */ __RPC__in MSG *pMsg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInputObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInputObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInputObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInputObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivateIO )( 
            __RPC__in IInputObject * This,
            /* [in] */ BOOL fActivate,
            /* [unique][in] */ __RPC__in_opt MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *HasFocusIO )( 
            __RPC__in IInputObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorIO )( 
            __RPC__in IInputObject * This,
            /* [in] */ __RPC__in MSG *pMsg);
        
        END_INTERFACE
    } IInputObjectVtbl;

    interface IInputObject
    {
        CONST_VTBL struct IInputObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputObject_UIActivateIO(This,fActivate,pMsg)	\
    ( (This)->lpVtbl -> UIActivateIO(This,fActivate,pMsg) ) 

#define IInputObject_HasFocusIO(This)	\
    ( (This)->lpVtbl -> HasFocusIO(This) ) 

#define IInputObject_TranslateAcceleratorIO(This,pMsg)	\
    ( (This)->lpVtbl -> TranslateAcceleratorIO(This,pMsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInputObject_INTERFACE_DEFINED__ */


#ifndef __IInputObject2_INTERFACE_DEFINED__
#define __IInputObject2_INTERFACE_DEFINED__

/* interface IInputObject2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IInputObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6915C085-510B-44cd-94AF-28DFA56CF92B")
    IInputObject2 : public IInputObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranslateAcceleratorGlobal( 
            /* [annotation][in] */ 
            _In_  MSG *pMsg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInputObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputObject2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputObject2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivateIO )( 
            IInputObject2 * This,
            /* [in] */ BOOL fActivate,
            /* [unique][in] */ MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *HasFocusIO )( 
            IInputObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorIO )( 
            IInputObject2 * This,
            /* [in] */ MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorGlobal )( 
            IInputObject2 * This,
            /* [annotation][in] */ 
            _In_  MSG *pMsg);
        
        END_INTERFACE
    } IInputObject2Vtbl;

    interface IInputObject2
    {
        CONST_VTBL struct IInputObject2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputObject2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputObject2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputObject2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputObject2_UIActivateIO(This,fActivate,pMsg)	\
    ( (This)->lpVtbl -> UIActivateIO(This,fActivate,pMsg) ) 

#define IInputObject2_HasFocusIO(This)	\
    ( (This)->lpVtbl -> HasFocusIO(This) ) 

#define IInputObject2_TranslateAcceleratorIO(This,pMsg)	\
    ( (This)->lpVtbl -> TranslateAcceleratorIO(This,pMsg) ) 


#define IInputObject2_TranslateAcceleratorGlobal(This,pMsg)	\
    ( (This)->lpVtbl -> TranslateAcceleratorGlobal(This,pMsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInputObject2_INTERFACE_DEFINED__ */


#ifndef __IShellIcon_INTERFACE_DEFINED__
#define __IShellIcon_INTERFACE_DEFINED__

/* interface IShellIcon */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E5-0000-0000-C000-000000000046")
    IShellIcon : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIconOf( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ UINT flags,
            /* [out] */ __RPC__out int *pIconIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellIconVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellIcon * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellIcon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellIcon * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconOf )( 
            __RPC__in IShellIcon * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ UINT flags,
            /* [out] */ __RPC__out int *pIconIndex);
        
        END_INTERFACE
    } IShellIconVtbl;

    interface IShellIcon
    {
        CONST_VTBL struct IShellIconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellIcon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellIcon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellIcon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellIcon_GetIconOf(This,pidl,flags,pIconIndex)	\
    ( (This)->lpVtbl -> GetIconOf(This,pidl,flags,pIconIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellIcon_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0033 */
/* [local] */ 

#define SBSP_DEFBROWSER         0x0000
#define SBSP_SAMEBROWSER        0x0001
#define SBSP_NEWBROWSER         0x0002
#define SBSP_DEFMODE            0x0000
#define SBSP_OPENMODE           0x0010
#define SBSP_EXPLOREMODE        0x0020
#define SBSP_HELPMODE           0x0040
#define SBSP_NOTRANSFERHIST     0x0080
#define SBSP_ABSOLUTE           0x0000
#define SBSP_RELATIVE           0x1000
#define SBSP_PARENT             0x2000
#define SBSP_NAVIGATEBACK       0x4000
#define SBSP_NAVIGATEFORWARD    0x8000
#define SBSP_ALLOW_AUTONAVIGATE   0x00010000
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SBSP_KEEPSAMETEMPLATE     0x00020000
#define SBSP_KEEPWORDWHEELTEXT    0x00040000
#define SBSP_ACTIVATE_NOFOCUS     0x00080000
#define SBSP_CREATENOHISTORY      0x00100000
#define SBSP_PLAYNOSOUND          0x00200000
#endif  // (NTDDI_VERSION >= NTDDI_VISTA)
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_CALLERUNTRUSTED      0x00800000
#define SBSP_TRUSTFIRSTDOWNLOAD   0x01000000
#define SBSP_UNTRUSTEDFORDOWNLOAD 0x02000000
#endif  // _WIN32_IE_IE60SP2
#define SBSP_NOAUTOSELECT         0x04000000
#define SBSP_WRITENOHISTORY       0x08000000
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_TRUSTEDFORACTIVEX    0x10000000
#endif  // _WIN32_IE_IE60SP2
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SBSP_FEEDNAVIGATION       0x20000000
#endif  // _WIN32_IE_IE70
#define SBSP_REDIRECT                     0x40000000
#define SBSP_INITIATEDBYHLINKFRAME        0x80000000
#define FCW_STATUS         0x0001
#define FCW_TOOLBAR        0x0002
#define FCW_TREE           0x0003
#define FCW_INTERNETBAR    0x0006
#define FCW_PROGRESS       0x0008
#if (_WIN32_IE >= 0x0700)
#endif
#define FCT_MERGE       0x0001
#define FCT_CONFIGABLE  0x0002
#define FCT_ADDTOEND    0x0004
#ifdef _NEVER_
typedef LPARAM LPTBBUTTONSB;

#else //!_NEVER_
#include <commctrl.h>
typedef LPTBBUTTON LPTBBUTTONSB;
#endif //_NEVER_


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0033_v0_0_s_ifspec;

#ifndef __IShellBrowser_INTERFACE_DEFINED__
#define __IShellBrowser_INTERFACE_DEFINED__

/* interface IShellBrowser */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E2-0000-0000-C000-000000000046")
    IShellBrowser : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InsertMenusSB( 
            /* [in] */ __RPC__in HMENU hmenuShared,
            /* [out][in] */ __RPC__inout LPOLEMENUGROUPWIDTHS lpMenuWidths) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenuSB( 
            /* [unique][in] */ __RPC__in_opt HMENU hmenuShared,
            /* [unique][in] */ __RPC__in_opt HOLEMENU holemenuRes,
            /* [unique][in] */ __RPC__in_opt HWND hwndActiveObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveMenusSB( 
            /* [in] */ __RPC__in HMENU hmenuShared) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatusTextSB( 
            /* [unique][in] */ __RPC__in_opt LPCWSTR pszStatusText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModelessSB( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAcceleratorSB( 
            /* [in] */ __RPC__in MSG *pmsg,
            /* [in] */ WORD wID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrowseObject( 
            /* [unique][in] */ __RPC__in_opt PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT wFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewStateStream( 
            /* [in] */ DWORD grfMode,
            /* [out] */ __RPC__deref_out_opt IStream **ppStrm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlWindow( 
            /* [in] */ UINT id,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SendControlMsg( 
            /* [annotation][in] */ 
            _In_  UINT id,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam,
            /* [annotation][out] */ 
            _Out_opt_  LRESULT *pret) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryActiveShellView( 
            /* [out] */ __RPC__deref_out_opt IShellView **ppshv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnViewWindowActive( 
            /* [in] */ __RPC__in_opt IShellView *pshv) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetToolbarItems( 
            /* [annotation][in] */ 
            _In_reads_opt_(nButtons)  LPTBBUTTONSB lpButtons,
            /* [annotation][in] */ 
            _In_  UINT nButtons,
            /* [annotation][in] */ 
            _In_  UINT uFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellBrowser * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            __RPC__in IShellBrowser * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *InsertMenusSB )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ __RPC__in HMENU hmenuShared,
            /* [out][in] */ __RPC__inout LPOLEMENUGROUPWIDTHS lpMenuWidths);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenuSB )( 
            __RPC__in IShellBrowser * This,
            /* [unique][in] */ __RPC__in_opt HMENU hmenuShared,
            /* [unique][in] */ __RPC__in_opt HOLEMENU holemenuRes,
            /* [unique][in] */ __RPC__in_opt HWND hwndActiveObject);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveMenusSB )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ __RPC__in HMENU hmenuShared);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatusTextSB )( 
            __RPC__in IShellBrowser * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR pszStatusText);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModelessSB )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorSB )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ __RPC__in MSG *pmsg,
            /* [in] */ WORD wID);
        
        HRESULT ( STDMETHODCALLTYPE *BrowseObject )( 
            __RPC__in IShellBrowser * This,
            /* [unique][in] */ __RPC__in_opt PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT wFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewStateStream )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ DWORD grfMode,
            /* [out] */ __RPC__deref_out_opt IStream **ppStrm);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlWindow )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ UINT id,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SendControlMsg )( 
            IShellBrowser * This,
            /* [annotation][in] */ 
            _In_  UINT id,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam,
            /* [annotation][out] */ 
            _Out_opt_  LRESULT *pret);
        
        HRESULT ( STDMETHODCALLTYPE *QueryActiveShellView )( 
            __RPC__in IShellBrowser * This,
            /* [out] */ __RPC__deref_out_opt IShellView **ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnViewWindowActive )( 
            __RPC__in IShellBrowser * This,
            /* [in] */ __RPC__in_opt IShellView *pshv);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetToolbarItems )( 
            IShellBrowser * This,
            /* [annotation][in] */ 
            _In_reads_opt_(nButtons)  LPTBBUTTONSB lpButtons,
            /* [annotation][in] */ 
            _In_  UINT nButtons,
            /* [annotation][in] */ 
            _In_  UINT uFlags);
        
        END_INTERFACE
    } IShellBrowserVtbl;

    interface IShellBrowser
    {
        CONST_VTBL struct IShellBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellBrowser_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellBrowser_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellBrowser_InsertMenusSB(This,hmenuShared,lpMenuWidths)	\
    ( (This)->lpVtbl -> InsertMenusSB(This,hmenuShared,lpMenuWidths) ) 

#define IShellBrowser_SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject)	\
    ( (This)->lpVtbl -> SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject) ) 

#define IShellBrowser_RemoveMenusSB(This,hmenuShared)	\
    ( (This)->lpVtbl -> RemoveMenusSB(This,hmenuShared) ) 

#define IShellBrowser_SetStatusTextSB(This,pszStatusText)	\
    ( (This)->lpVtbl -> SetStatusTextSB(This,pszStatusText) ) 

#define IShellBrowser_EnableModelessSB(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModelessSB(This,fEnable) ) 

#define IShellBrowser_TranslateAcceleratorSB(This,pmsg,wID)	\
    ( (This)->lpVtbl -> TranslateAcceleratorSB(This,pmsg,wID) ) 

#define IShellBrowser_BrowseObject(This,pidl,wFlags)	\
    ( (This)->lpVtbl -> BrowseObject(This,pidl,wFlags) ) 

#define IShellBrowser_GetViewStateStream(This,grfMode,ppStrm)	\
    ( (This)->lpVtbl -> GetViewStateStream(This,grfMode,ppStrm) ) 

#define IShellBrowser_GetControlWindow(This,id,phwnd)	\
    ( (This)->lpVtbl -> GetControlWindow(This,id,phwnd) ) 

#define IShellBrowser_SendControlMsg(This,id,uMsg,wParam,lParam,pret)	\
    ( (This)->lpVtbl -> SendControlMsg(This,id,uMsg,wParam,lParam,pret) ) 

#define IShellBrowser_QueryActiveShellView(This,ppshv)	\
    ( (This)->lpVtbl -> QueryActiveShellView(This,ppshv) ) 

#define IShellBrowser_OnViewWindowActive(This,pshv)	\
    ( (This)->lpVtbl -> OnViewWindowActive(This,pshv) ) 

#define IShellBrowser_SetToolbarItems(This,lpButtons,nButtons,uFlags)	\
    ( (This)->lpVtbl -> SetToolbarItems(This,lpButtons,nButtons,uFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellBrowser_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0034 */
/* [local] */ 

typedef IShellBrowser *LPSHELLBROWSER;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0034_v0_0_s_ifspec;

#ifndef __IProfferService_INTERFACE_DEFINED__
#define __IProfferService_INTERFACE_DEFINED__

/* interface IProfferService */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IProfferService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb728b20-f786-11ce-92ad-00aa00a74cd0")
    IProfferService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProfferService( 
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in_opt IServiceProvider *psp,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RevokeService( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProfferServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IProfferService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IProfferService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IProfferService * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProfferService )( 
            __RPC__in IProfferService * This,
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in_opt IServiceProvider *psp,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *RevokeService )( 
            __RPC__in IProfferService * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IProfferServiceVtbl;

    interface IProfferService
    {
        CONST_VTBL struct IProfferServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProfferService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProfferService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProfferService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProfferService_ProfferService(This,guidService,psp,pdwCookie)	\
    ( (This)->lpVtbl -> ProfferService(This,guidService,psp,pdwCookie) ) 

#define IProfferService_RevokeService(This,dwCookie)	\
    ( (This)->lpVtbl -> RevokeService(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProfferService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0035 */
/* [local] */ 

#define SID_SProfferService IID_IProfferService    // nearest service that you can proffer to
#define STR_DONT_RESOLVE_LINK      L"Don't Resolve Link"
#define STR_GET_ASYNC_HANDLER L"GetAsyncHandler"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0035_v0_0_s_ifspec;

#ifndef __IShellItem_INTERFACE_DEFINED__
#define __IShellItem_INTERFACE_DEFINED__

/* interface IShellItem */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum _SIGDN
    {
        SIGDN_NORMALDISPLAY	= 0,
        SIGDN_PARENTRELATIVEPARSING	= ( int  )0x80018001,
        SIGDN_DESKTOPABSOLUTEPARSING	= ( int  )0x80028000,
        SIGDN_PARENTRELATIVEEDITING	= ( int  )0x80031001,
        SIGDN_DESKTOPABSOLUTEEDITING	= ( int  )0x8004c000,
        SIGDN_FILESYSPATH	= ( int  )0x80058000,
        SIGDN_URL	= ( int  )0x80068000,
        SIGDN_PARENTRELATIVEFORADDRESSBAR	= ( int  )0x8007c001,
        SIGDN_PARENTRELATIVE	= ( int  )0x80080001,
        SIGDN_PARENTRELATIVEFORUI	= ( int  )0x80094001
    } 	SIGDN;

/* [v1_enum] */ 
enum _SICHINTF
    {
        SICHINT_DISPLAY	= 0,
        SICHINT_ALLFIELDS	= ( int  )0x80000000,
        SICHINT_CANONICAL	= 0x10000000,
        SICHINT_TEST_FILESYSPATH_IF_NOT_EQUAL	= 0x20000000
    } ;
typedef DWORD SICHINTF;




EXTERN_C const IID IID_IShellItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43826d1e-e718-42ee-bc55-a1e261c37bfe")
    IShellItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BindToHandler( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [in] */ SIGDN sigdnName,
            /* [annotation][string][out] */ 
            _Outptr_result_nullonfailure_  LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            __RPC__in IShellItem * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            __RPC__in IShellItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            __RPC__in IShellItem * This,
            /* [in] */ SIGDN sigdnName,
            /* [annotation][string][out] */ 
            _Outptr_result_nullonfailure_  LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IShellItem * This,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            __RPC__in IShellItem * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder);
        
        END_INTERFACE
    } IShellItemVtbl;

    interface IShellItem
    {
        CONST_VTBL struct IShellItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItem_BindToHandler(This,pbc,bhid,riid,ppv)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) ) 

#define IShellItem_GetParent(This,ppsi)	\
    ( (This)->lpVtbl -> GetParent(This,ppsi) ) 

#define IShellItem_GetDisplayName(This,sigdnName,ppszName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) ) 

#define IShellItem_GetAttributes(This,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) ) 

#define IShellItem_Compare(This,psi,hint,piOrder)	\
    ( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0036 */
/* [local] */ 

SHSTDAPI_(PIDLIST_ABSOLUTE) SHSimpleIDListFromPath(_In_ PCWSTR pszPath);
#if (_WIN32_IE >= _WIN32_IE_IE70)
// CLSID_ShellItem create and init helper APIs. produce IShellItem derived interfaces from these different expressions of an item
SHSTDAPI SHCreateItemFromIDList(_In_ PCIDLIST_ABSOLUTE pidl, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHCreateItemFromParsingName(_In_ PCWSTR pszPath, _In_opt_ IBindCtx *pbc, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHCreateItemWithParent(_In_opt_ PCIDLIST_ABSOLUTE pidlParent, _In_opt_ IShellFolder *psfParent, _In_ PCUITEMID_CHILD pidl, _In_ REFIID riid, _Outptr_ void **ppvItem);
SHSTDAPI SHCreateItemFromRelativeName(_In_ IShellItem *psiParent, _In_ PCWSTR pszName, _In_opt_ IBindCtx* pbc, _In_ REFIID riid, _Outptr_ void **ppv);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHCreateItemInKnownFolder(_In_ REFKNOWNFOLDERID kfid, DWORD dwKFFlags, _In_opt_ PCWSTR pszItem, _In_ REFIID riid, _Outptr_ void **ppv);
// get the IDList expression from an object, works with objects that support IPersistIDlist or IPersistIDlist like CLSID_ShellItem and most shell folders
SHSTDAPI SHGetIDListFromObject(_In_ IUnknown *punk, _Outptr_ PIDLIST_ABSOLUTE *ppidl);
// similar to SHGetIDListFromObject but returns an IShellItem-based object (preferred for performance if the IDList is already bound to a folder)
SHSTDAPI SHGetItemFromObject(_In_ IUnknown *punk, _In_ REFIID riid, _Outptr_ void **ppv);
// these APIs return object that support IPropertyStore or related interfaces
SHSTDAPI SHGetPropertyStoreFromIDList(_In_ PCIDLIST_ABSOLUTE pidl, _In_ GETPROPERTYSTOREFLAGS flags, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHGetPropertyStoreFromParsingName(_In_ PCWSTR pszPath, _In_opt_ IBindCtx *pbc, _In_ GETPROPERTYSTOREFLAGS flags, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHGetNameFromIDList(_In_ PCIDLIST_ABSOLUTE pidl, _In_ SIGDN sigdnName, _Outptr_ PWSTR *ppszName);
#endif // (NTDDI_VERSION >= NTDDI_VISTA)
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef /* [v1_enum] */ 
enum DATAOBJ_GET_ITEM_FLAGS
    {
        DOGIF_DEFAULT	= 0,
        DOGIF_TRAVERSE_LINK	= 0x1,
        DOGIF_NO_HDROP	= 0x2,
        DOGIF_NO_URL	= 0x4,
        DOGIF_ONLY_IF_ONE	= 0x8
    } 	DATAOBJ_GET_ITEM_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(DATAOBJ_GET_ITEM_FLAGS)
STDAPI SHGetItemFromDataObject(_In_ IDataObject *pdtobj, _In_ DATAOBJ_GET_ITEM_FLAGS dwFlags, _In_ REFIID riid, _Outptr_ void **ppv);
#endif // (NTDDI_VERSION >= NTDDI_WIN7)
#define STR_GPS_HANDLERPROPERTIESONLY      L"GPS_HANDLERPROPERTIESONLY"
#define STR_GPS_FASTPROPERTIESONLY         L"GPS_FASTPROPERTIESONLY"
#define STR_GPS_OPENSLOWITEM               L"GPS_OPENSLOWITEM"
#define STR_GPS_DELAYCREATION              L"GPS_DELAYCREATION"
#define STR_GPS_BESTEFFORT                 L"GPS_BESTEFFORT"
#define STR_GPS_NO_OPLOCK                  L"GPS_NO_OPLOCK"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0036_v0_0_s_ifspec;

#ifndef __IShellItem2_INTERFACE_DEFINED__
#define __IShellItem2_INTERFACE_DEFINED__

/* interface IShellItem2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7e9fb0d3-919f-4307-ab2e-9b1860310c93")
    IShellItem2 : public IShellItem
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreWithCreateObject( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in_opt IUnknown *punkCreateObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreForKeys( 
            /* [size_is][in] */ __RPC__in_ecount_full(cKeys) const PROPERTYKEY *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionList( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Update( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCLSID( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out CLSID *pclsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileTime( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out FILETIME *pft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt32( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUInt32( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONG *pui) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUInt64( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONGLONG *pull) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBool( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out BOOL *pf) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItem2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItem2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            __RPC__in IShellItem2 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            __RPC__in IShellItem2 * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ SIGDN sigdnName,
            /* [annotation][string][out] */ 
            _Outptr_result_nullonfailure_  LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreWithCreateObject )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in_opt IUnknown *punkCreateObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreForKeys )( 
            __RPC__in IShellItem2 * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cKeys) const PROPERTYKEY *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionList )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IShellItem2 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTime )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out FILETIME *pft);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt32 )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetUInt32 )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONG *pui);
        
        HRESULT ( STDMETHODCALLTYPE *GetUInt64 )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONGLONG *pull);
        
        HRESULT ( STDMETHODCALLTYPE *GetBool )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out BOOL *pf);
        
        END_INTERFACE
    } IShellItem2Vtbl;

    interface IShellItem2
    {
        CONST_VTBL struct IShellItem2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItem2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItem2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItem2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItem2_BindToHandler(This,pbc,bhid,riid,ppv)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) ) 

#define IShellItem2_GetParent(This,ppsi)	\
    ( (This)->lpVtbl -> GetParent(This,ppsi) ) 

#define IShellItem2_GetDisplayName(This,sigdnName,ppszName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) ) 

#define IShellItem2_GetAttributes(This,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) ) 

#define IShellItem2_Compare(This,psi,hint,piOrder)	\
    ( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) ) 


#define IShellItem2_GetPropertyStore(This,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) ) 

#define IShellItem2_GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv) ) 

#define IShellItem2_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) ) 

#define IShellItem2_GetPropertyDescriptionList(This,keyType,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) ) 

#define IShellItem2_Update(This,pbc)	\
    ( (This)->lpVtbl -> Update(This,pbc) ) 

#define IShellItem2_GetProperty(This,key,ppropvar)	\
    ( (This)->lpVtbl -> GetProperty(This,key,ppropvar) ) 

#define IShellItem2_GetCLSID(This,key,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,key,pclsid) ) 

#define IShellItem2_GetFileTime(This,key,pft)	\
    ( (This)->lpVtbl -> GetFileTime(This,key,pft) ) 

#define IShellItem2_GetInt32(This,key,pi)	\
    ( (This)->lpVtbl -> GetInt32(This,key,pi) ) 

#define IShellItem2_GetString(This,key,ppsz)	\
    ( (This)->lpVtbl -> GetString(This,key,ppsz) ) 

#define IShellItem2_GetUInt32(This,key,pui)	\
    ( (This)->lpVtbl -> GetUInt32(This,key,pui) ) 

#define IShellItem2_GetUInt64(This,key,pull)	\
    ( (This)->lpVtbl -> GetUInt64(This,key,pull) ) 

#define IShellItem2_GetBool(This,key,pf)	\
    ( (This)->lpVtbl -> GetBool(This,key,pf) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItem2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0037 */
/* [local] */ 

/* [v1_enum] */ 
enum _SIIGBF
    {
        SIIGBF_RESIZETOFIT	= 0,
        SIIGBF_BIGGERSIZEOK	= 0x1,
        SIIGBF_MEMORYONLY	= 0x2,
        SIIGBF_ICONONLY	= 0x4,
        SIIGBF_THUMBNAILONLY	= 0x8,
        SIIGBF_INCACHEONLY	= 0x10,
        SIIGBF_CROPTOSQUARE	= 0x20,
        SIIGBF_WIDETHUMBNAILS	= 0x40,
        SIIGBF_ICONBACKGROUND	= 0x80,
        SIIGBF_SCALEUP	= 0x100
    } ;
typedef int SIIGBF;


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0037_v0_0_s_ifspec;

#ifndef __IShellItemImageFactory_INTERFACE_DEFINED__
#define __IShellItemImageFactory_INTERFACE_DEFINED__

/* interface IShellItemImageFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellItemImageFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bcc18b79-ba16-442f-80c4-8a59c30c463b")
    IShellItemImageFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetImage( 
            /* [in] */ SIZE size,
            /* [in] */ SIIGBF flags,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemImageFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItemImageFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItemImageFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItemImageFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetImage )( 
            __RPC__in IShellItemImageFactory * This,
            /* [in] */ SIZE size,
            /* [in] */ SIIGBF flags,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm);
        
        END_INTERFACE
    } IShellItemImageFactoryVtbl;

    interface IShellItemImageFactory
    {
        CONST_VTBL struct IShellItemImageFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemImageFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemImageFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemImageFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemImageFactory_GetImage(This,size,flags,phbm)	\
    ( (This)->lpVtbl -> GetImage(This,size,flags,phbm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemImageFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0038 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0038_v0_0_s_ifspec;

#ifndef __IEnumShellItems_INTERFACE_DEFINED__
#define __IEnumShellItems_INTERFACE_DEFINED__

/* interface IEnumShellItems */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumShellItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70629033-e363-4a28-a567-0db78006e6d7")
    IEnumShellItems : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  IShellItem **rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumShellItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumShellItems * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumShellItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumShellItems * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumShellItems * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  IShellItem **rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumShellItems * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumShellItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumShellItems * This,
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenum);
        
        END_INTERFACE
    } IEnumShellItemsVtbl;

    interface IEnumShellItems
    {
        CONST_VTBL struct IEnumShellItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumShellItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumShellItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumShellItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumShellItems_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumShellItems_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumShellItems_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumShellItems_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumShellItems_RemoteNext_Proxy( 
    __RPC__in IEnumShellItems * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IShellItem **rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumShellItems_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumShellItems_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0039 */
/* [local] */ 

typedef GUID STGTRANSCONFIRMATION;

typedef GUID *LPSTGTRANSCONFIRMATION;

typedef /* [v1_enum] */ 
enum STGOP
    {
        STGOP_MOVE	= 1,
        STGOP_COPY	= 2,
        STGOP_SYNC	= 3,
        STGOP_REMOVE	= 5,
        STGOP_RENAME	= 6,
        STGOP_APPLYPROPERTIES	= 8,
        STGOP_NEW	= 10
    } 	STGOP;

#endif  // NTDDI_WINXP
/* [v1_enum] */ 
enum _TRANSFER_SOURCE_FLAGS
    {
        TSF_NORMAL	= 0,
        TSF_FAIL_EXIST	= 0,
        TSF_RENAME_EXIST	= 0x1,
        TSF_OVERWRITE_EXIST	= 0x2,
        TSF_ALLOW_DECRYPTION	= 0x4,
        TSF_NO_SECURITY	= 0x8,
        TSF_COPY_CREATION_TIME	= 0x10,
        TSF_COPY_WRITE_TIME	= 0x20,
        TSF_USE_FULL_ACCESS	= 0x40,
        TSF_DELETE_RECYCLE_IF_POSSIBLE	= 0x80,
        TSF_COPY_HARD_LINK	= 0x100,
        TSF_COPY_LOCALIZED_NAME	= 0x200,
        TSF_MOVE_AS_COPY_DELETE	= 0x400,
        TSF_SUSPEND_SHELLEVENTS	= 0x800
    } ;
typedef DWORD TRANSFER_SOURCE_FLAGS;

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0039_v0_0_s_ifspec;

#ifndef __ITransferAdviseSink_INTERFACE_DEFINED__
#define __ITransferAdviseSink_INTERFACE_DEFINED__

/* interface ITransferAdviseSink */
/* [object][uuid] */ 

/* [v1_enum] */ 
enum _TRANSFER_ADVISE_STATE
    {
        TS_NONE	= 0,
        TS_PERFORMING	= 0x1,
        TS_PREPARING	= 0x2,
        TS_INDETERMINATE	= 0x4
    } ;
typedef DWORD TRANSFER_ADVISE_STATE;


EXTERN_C const IID IID_ITransferAdviseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d594d0d8-8da7-457b-b3b4-ce5dbaac0b88")
    ITransferAdviseSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ ULONGLONG ullSizeCurrent,
            /* [in] */ ULONGLONG ullSizeTotal,
            /* [in] */ int nFilesCurrent,
            /* [in] */ int nFilesTotal,
            /* [in] */ int nFoldersCurrent,
            /* [in] */ int nFoldersTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateTransferState( 
            /* [in] */ TRANSFER_ADVISE_STATE ts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfirmOverwrite( 
            /* [in] */ __RPC__in_opt IShellItem *psiSource,
            /* [in] */ __RPC__in_opt IShellItem *psiDestParent,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfirmEncryptionLoss( 
            /* [in] */ __RPC__in_opt IShellItem *psiSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FileFailure( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszItem,
            /* [in] */ HRESULT hrError,
            /* [size_is][unique][out][in] */ __RPC__inout_ecount_full_opt(cchRename) LPWSTR pszRename,
            /* [in] */ ULONG cchRename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubStreamFailure( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [string][in] */ __RPC__in_string LPCWSTR pszStreamName,
            /* [in] */ HRESULT hrError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PropertyFailure( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [unique][in] */ __RPC__in_opt const PROPERTYKEY *pkey,
            /* [in] */ HRESULT hrError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransferAdviseSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITransferAdviseSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITransferAdviseSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ ULONGLONG ullSizeCurrent,
            /* [in] */ ULONGLONG ullSizeTotal,
            /* [in] */ int nFilesCurrent,
            /* [in] */ int nFilesTotal,
            /* [in] */ int nFoldersCurrent,
            /* [in] */ int nFoldersTotal);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateTransferState )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ TRANSFER_ADVISE_STATE ts);
        
        HRESULT ( STDMETHODCALLTYPE *ConfirmOverwrite )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ __RPC__in_opt IShellItem *psiSource,
            /* [in] */ __RPC__in_opt IShellItem *psiDestParent,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *ConfirmEncryptionLoss )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ __RPC__in_opt IShellItem *psiSource);
        
        HRESULT ( STDMETHODCALLTYPE *FileFailure )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszItem,
            /* [in] */ HRESULT hrError,
            /* [size_is][unique][out][in] */ __RPC__inout_ecount_full_opt(cchRename) LPWSTR pszRename,
            /* [in] */ ULONG cchRename);
        
        HRESULT ( STDMETHODCALLTYPE *SubStreamFailure )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [string][in] */ __RPC__in_string LPCWSTR pszStreamName,
            /* [in] */ HRESULT hrError);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyFailure )( 
            __RPC__in ITransferAdviseSink * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [unique][in] */ __RPC__in_opt const PROPERTYKEY *pkey,
            /* [in] */ HRESULT hrError);
        
        END_INTERFACE
    } ITransferAdviseSinkVtbl;

    interface ITransferAdviseSink
    {
        CONST_VTBL struct ITransferAdviseSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferAdviseSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferAdviseSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferAdviseSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferAdviseSink_UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal)	\
    ( (This)->lpVtbl -> UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal) ) 

#define ITransferAdviseSink_UpdateTransferState(This,ts)	\
    ( (This)->lpVtbl -> UpdateTransferState(This,ts) ) 

#define ITransferAdviseSink_ConfirmOverwrite(This,psiSource,psiDestParent,pszName)	\
    ( (This)->lpVtbl -> ConfirmOverwrite(This,psiSource,psiDestParent,pszName) ) 

#define ITransferAdviseSink_ConfirmEncryptionLoss(This,psiSource)	\
    ( (This)->lpVtbl -> ConfirmEncryptionLoss(This,psiSource) ) 

#define ITransferAdviseSink_FileFailure(This,psi,pszItem,hrError,pszRename,cchRename)	\
    ( (This)->lpVtbl -> FileFailure(This,psi,pszItem,hrError,pszRename,cchRename) ) 

#define ITransferAdviseSink_SubStreamFailure(This,psi,pszStreamName,hrError)	\
    ( (This)->lpVtbl -> SubStreamFailure(This,psi,pszStreamName,hrError) ) 

#define ITransferAdviseSink_PropertyFailure(This,psi,pkey,hrError)	\
    ( (This)->lpVtbl -> PropertyFailure(This,psi,pkey,hrError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferAdviseSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0040 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0040_v0_0_s_ifspec;

#ifndef __ITransferSource_INTERFACE_DEFINED__
#define __ITransferSource_INTERFACE_DEFINED__

/* interface ITransferSource */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ITransferSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00adb003-bde9-45c6-8e29-d09f9353e108")
    ITransferSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [annotation][in] */ 
            _In_  ITransferAdviseSink *psink,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [annotation][in] */ 
            _In_  DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperties( 
            /* [annotation][in] */ 
            _In_  IPropertyChangeArray *pproparray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psi,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psi,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDst,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszNameDst,
            /* [in] */ TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RecycleItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDest,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNewDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszNewName,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNewDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LinkItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDest,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszNewName,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNewDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyPropertiesToItem( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultDestinationName( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDest,
            /* [annotation][string][out] */ 
            _Outptr_  LPWSTR *ppszDestinationName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnterFolder( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiChildFolderDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LeaveFolder( 
            /* [annotation][in] */ 
            _In_  IShellItem *psiChildFolderDest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransferSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransferSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransferSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransferSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  ITransferAdviseSink *psink,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IPropertyChangeArray *pproparray);
        
        HRESULT ( STDMETHODCALLTYPE *OpenItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psi,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psi,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDst,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszNameDst,
            /* [in] */ TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNew);
        
        HRESULT ( STDMETHODCALLTYPE *RecycleItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDest,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNewDest);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszNewName,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNewDest);
        
        HRESULT ( STDMETHODCALLTYPE *LinkItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDest,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszNewName,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNewDest);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyPropertiesToItem )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][out] */ 
            _Outptr_  IShellItem **ppsiNew);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultDestinationName )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiSource,
            /* [annotation][in] */ 
            _In_  IShellItem *psiParentDest,
            /* [annotation][string][out] */ 
            _Outptr_  LPWSTR *ppszDestinationName);
        
        HRESULT ( STDMETHODCALLTYPE *EnterFolder )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiChildFolderDest);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveFolder )( 
            ITransferSource * This,
            /* [annotation][in] */ 
            _In_  IShellItem *psiChildFolderDest);
        
        END_INTERFACE
    } ITransferSourceVtbl;

    interface ITransferSource
    {
        CONST_VTBL struct ITransferSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferSource_Advise(This,psink,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,psink,pdwCookie) ) 

#define ITransferSource_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define ITransferSource_SetProperties(This,pproparray)	\
    ( (This)->lpVtbl -> SetProperties(This,pproparray) ) 

#define ITransferSource_OpenItem(This,psi,flags,riid,ppv)	\
    ( (This)->lpVtbl -> OpenItem(This,psi,flags,riid,ppv) ) 

#define ITransferSource_MoveItem(This,psi,psiParentDst,pszNameDst,flags,ppsiNew)	\
    ( (This)->lpVtbl -> MoveItem(This,psi,psiParentDst,pszNameDst,flags,ppsiNew) ) 

#define ITransferSource_RecycleItem(This,psiSource,psiParentDest,flags,ppsiNewDest)	\
    ( (This)->lpVtbl -> RecycleItem(This,psiSource,psiParentDest,flags,ppsiNewDest) ) 

#define ITransferSource_RemoveItem(This,psiSource,flags)	\
    ( (This)->lpVtbl -> RemoveItem(This,psiSource,flags) ) 

#define ITransferSource_RenameItem(This,psiSource,pszNewName,flags,ppsiNewDest)	\
    ( (This)->lpVtbl -> RenameItem(This,psiSource,pszNewName,flags,ppsiNewDest) ) 

#define ITransferSource_LinkItem(This,psiSource,psiParentDest,pszNewName,flags,ppsiNewDest)	\
    ( (This)->lpVtbl -> LinkItem(This,psiSource,psiParentDest,pszNewName,flags,ppsiNewDest) ) 

#define ITransferSource_ApplyPropertiesToItem(This,psiSource,ppsiNew)	\
    ( (This)->lpVtbl -> ApplyPropertiesToItem(This,psiSource,ppsiNew) ) 

#define ITransferSource_GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName)	\
    ( (This)->lpVtbl -> GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName) ) 

#define ITransferSource_EnterFolder(This,psiChildFolderDest)	\
    ( (This)->lpVtbl -> EnterFolder(This,psiChildFolderDest) ) 

#define ITransferSource_LeaveFolder(This,psiChildFolderDest)	\
    ( (This)->lpVtbl -> LeaveFolder(This,psiChildFolderDest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0041 */
/* [local] */ 

#endif  // NTDDI_VISTA
typedef struct SHELL_ITEM_RESOURCE
    {
    GUID guidType;
    WCHAR szName[ 260 ];
    } 	SHELL_ITEM_RESOURCE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0041_v0_0_s_ifspec;

#ifndef __IEnumResources_INTERFACE_DEFINED__
#define __IEnumResources_INTERFACE_DEFINED__

/* interface IEnumResources */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2dd81fe3-a83c-4da9-a330-47249d345ba1")
    IEnumResources : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) SHELL_ITEM_RESOURCE *psir,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumResourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumResources * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumResources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumResources * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) SHELL_ITEM_RESOURCE *psir,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumResources * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumResources * This,
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr);
        
        END_INTERFACE
    } IEnumResourcesVtbl;

    interface IEnumResources
    {
        CONST_VTBL struct IEnumResourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumResources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumResources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumResources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumResources_Next(This,celt,psir,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,psir,pceltFetched) ) 

#define IEnumResources_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumResources_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumResources_Clone(This,ppenumr)	\
    ( (This)->lpVtbl -> Clone(This,ppenumr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumResources_INTERFACE_DEFINED__ */


#ifndef __IShellItemResources_INTERFACE_DEFINED__
#define __IShellItemResources_INTERFACE_DEFINED__

/* interface IShellItemResources */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IShellItemResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff5693be-2ce0-4d48-b5c5-40817d1acdb9")
    IShellItemResources : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ __RPC__out DWORD *pdwAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ __RPC__out ULONGLONG *pullSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimes( 
            /* [out] */ __RPC__out FILETIME *pftCreation,
            /* [out] */ __RPC__out FILETIME *pftWrite,
            /* [out] */ __RPC__out FILETIME *pftAccess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTimes( 
            /* [unique][in] */ __RPC__in_opt const FILETIME *pftCreation,
            /* [unique][in] */ __RPC__in_opt const FILETIME *pftWrite,
            /* [unique][in] */ __RPC__in_opt const FILETIME *pftAccess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResourceDescription( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumResources( 
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SupportsResource( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenResource( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateResource( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MarkForDelete( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemResourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItemResources * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItemResources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItemResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IShellItemResources * This,
            /* [out] */ __RPC__out DWORD *pdwAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            __RPC__in IShellItemResources * This,
            /* [out] */ __RPC__out ULONGLONG *pullSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimes )( 
            __RPC__in IShellItemResources * This,
            /* [out] */ __RPC__out FILETIME *pftCreation,
            /* [out] */ __RPC__out FILETIME *pftWrite,
            /* [out] */ __RPC__out FILETIME *pftAccess);
        
        HRESULT ( STDMETHODCALLTYPE *SetTimes )( 
            __RPC__in IShellItemResources * This,
            /* [unique][in] */ __RPC__in_opt const FILETIME *pftCreation,
            /* [unique][in] */ __RPC__in_opt const FILETIME *pftWrite,
            /* [unique][in] */ __RPC__in_opt const FILETIME *pftAccess);
        
        HRESULT ( STDMETHODCALLTYPE *GetResourceDescription )( 
            __RPC__in IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *EnumResources )( 
            __RPC__in IShellItemResources * This,
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsResource )( 
            __RPC__in IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir);
        
        HRESULT ( STDMETHODCALLTYPE *OpenResource )( 
            __RPC__in IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *CreateResource )( 
            __RPC__in IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *MarkForDelete )( 
            __RPC__in IShellItemResources * This);
        
        END_INTERFACE
    } IShellItemResourcesVtbl;

    interface IShellItemResources
    {
        CONST_VTBL struct IShellItemResourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemResources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemResources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemResources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemResources_GetAttributes(This,pdwAttributes)	\
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes) ) 

#define IShellItemResources_GetSize(This,pullSize)	\
    ( (This)->lpVtbl -> GetSize(This,pullSize) ) 

#define IShellItemResources_GetTimes(This,pftCreation,pftWrite,pftAccess)	\
    ( (This)->lpVtbl -> GetTimes(This,pftCreation,pftWrite,pftAccess) ) 

#define IShellItemResources_SetTimes(This,pftCreation,pftWrite,pftAccess)	\
    ( (This)->lpVtbl -> SetTimes(This,pftCreation,pftWrite,pftAccess) ) 

#define IShellItemResources_GetResourceDescription(This,pcsir,ppszDescription)	\
    ( (This)->lpVtbl -> GetResourceDescription(This,pcsir,ppszDescription) ) 

#define IShellItemResources_EnumResources(This,ppenumr)	\
    ( (This)->lpVtbl -> EnumResources(This,ppenumr) ) 

#define IShellItemResources_SupportsResource(This,pcsir)	\
    ( (This)->lpVtbl -> SupportsResource(This,pcsir) ) 

#define IShellItemResources_OpenResource(This,pcsir,riid,ppv)	\
    ( (This)->lpVtbl -> OpenResource(This,pcsir,riid,ppv) ) 

#define IShellItemResources_CreateResource(This,pcsir,riid,ppv)	\
    ( (This)->lpVtbl -> CreateResource(This,pcsir,riid,ppv) ) 

#define IShellItemResources_MarkForDelete(This)	\
    ( (This)->lpVtbl -> MarkForDelete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemResources_INTERFACE_DEFINED__ */


#ifndef __ITransferDestination_INTERFACE_DEFINED__
#define __ITransferDestination_INTERFACE_DEFINED__

/* interface ITransferDestination */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ITransferDestination;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48addd32-3ca5-4124-abe3-b5a72531b207")
    ITransferDestination : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [annotation][in] */ 
            _In_  ITransferAdviseSink *psink,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateItem( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  DWORD dwAttributes,
            /* [annotation][in] */ 
            _In_  ULONGLONG ullSize,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][in] */ 
            _In_  REFIID riidItem,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppvItem,
            /* [annotation][in] */ 
            _In_  REFIID riidResources,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppvResources) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransferDestinationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransferDestination * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransferDestination * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransferDestination * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITransferDestination * This,
            /* [annotation][in] */ 
            _In_  ITransferAdviseSink *psink,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITransferDestination * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *CreateItem )( 
            ITransferDestination * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][in] */ 
            _In_  DWORD dwAttributes,
            /* [annotation][in] */ 
            _In_  ULONGLONG ullSize,
            /* [annotation][in] */ 
            _In_  TRANSFER_SOURCE_FLAGS flags,
            /* [annotation][in] */ 
            _In_  REFIID riidItem,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppvItem,
            /* [annotation][in] */ 
            _In_  REFIID riidResources,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppvResources);
        
        END_INTERFACE
    } ITransferDestinationVtbl;

    interface ITransferDestination
    {
        CONST_VTBL struct ITransferDestinationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferDestination_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferDestination_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferDestination_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferDestination_Advise(This,psink,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,psink,pdwCookie) ) 

#define ITransferDestination_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define ITransferDestination_CreateItem(This,pszName,dwAttributes,ullSize,flags,riidItem,ppvItem,riidResources,ppvResources)	\
    ( (This)->lpVtbl -> CreateItem(This,pszName,dwAttributes,ullSize,flags,riidItem,ppvItem,riidResources,ppvResources) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferDestination_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0044 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0044_v0_0_s_ifspec;

#ifndef __IFileOperationProgressSink_INTERFACE_DEFINED__
#define __IFileOperationProgressSink_INTERFACE_DEFINED__

/* interface IFileOperationProgressSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IFileOperationProgressSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04b0f1a7-9490-44bc-96e1-4296a31252e2")
    IFileOperationProgressSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartOperations( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FinishOperations( 
            /* [in] */ HRESULT hrResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreRenameItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostRenameItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in_string LPCWSTR pszNewName,
            /* [in] */ HRESULT hrRename,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreMoveItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostMoveItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [in] */ HRESULT hrMove,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreCopyItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostCopyItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [in] */ HRESULT hrCopy,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreDeleteItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostDeleteItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ HRESULT hrDelete,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreNewItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostNewItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTemplateName,
            /* [in] */ DWORD dwFileAttributes,
            /* [in] */ HRESULT hrNew,
            /* [in] */ __RPC__in_opt IShellItem *psiNewItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ UINT iWorkTotal,
            /* [in] */ UINT iWorkSoFar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PauseTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeTimer( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileOperationProgressSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileOperationProgressSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartOperations )( 
            __RPC__in IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *FinishOperations )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ HRESULT hrResult);
        
        HRESULT ( STDMETHODCALLTYPE *PreRenameItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostRenameItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in_string LPCWSTR pszNewName,
            /* [in] */ HRESULT hrRename,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreMoveItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostMoveItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [in] */ HRESULT hrMove,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreCopyItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostCopyItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [in] */ HRESULT hrCopy,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreDeleteItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem);
        
        HRESULT ( STDMETHODCALLTYPE *PostDeleteItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ HRESULT hrDelete,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreNewItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostNewItem )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTemplateName,
            /* [in] */ DWORD dwFileAttributes,
            /* [in] */ HRESULT hrNew,
            /* [in] */ __RPC__in_opt IShellItem *psiNewItem);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            __RPC__in IFileOperationProgressSink * This,
            /* [in] */ UINT iWorkTotal,
            /* [in] */ UINT iWorkSoFar);
        
        HRESULT ( STDMETHODCALLTYPE *ResetTimer )( 
            __RPC__in IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *PauseTimer )( 
            __RPC__in IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResumeTimer )( 
            __RPC__in IFileOperationProgressSink * This);
        
        END_INTERFACE
    } IFileOperationProgressSinkVtbl;

    interface IFileOperationProgressSink
    {
        CONST_VTBL struct IFileOperationProgressSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileOperationProgressSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileOperationProgressSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileOperationProgressSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileOperationProgressSink_StartOperations(This)	\
    ( (This)->lpVtbl -> StartOperations(This) ) 

#define IFileOperationProgressSink_FinishOperations(This,hrResult)	\
    ( (This)->lpVtbl -> FinishOperations(This,hrResult) ) 

#define IFileOperationProgressSink_PreRenameItem(This,dwFlags,psiItem,pszNewName)	\
    ( (This)->lpVtbl -> PreRenameItem(This,dwFlags,psiItem,pszNewName) ) 

#define IFileOperationProgressSink_PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName)	\
    ( (This)->lpVtbl -> PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) ) 

#define IFileOperationProgressSink_PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName)	\
    ( (This)->lpVtbl -> PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) ) 

#define IFileOperationProgressSink_PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreDeleteItem(This,dwFlags,psiItem)	\
    ( (This)->lpVtbl -> PreDeleteItem(This,dwFlags,psiItem) ) 

#define IFileOperationProgressSink_PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName)	\
    ( (This)->lpVtbl -> PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName) ) 

#define IFileOperationProgressSink_PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem)	\
    ( (This)->lpVtbl -> PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem) ) 

#define IFileOperationProgressSink_UpdateProgress(This,iWorkTotal,iWorkSoFar)	\
    ( (This)->lpVtbl -> UpdateProgress(This,iWorkTotal,iWorkSoFar) ) 

#define IFileOperationProgressSink_ResetTimer(This)	\
    ( (This)->lpVtbl -> ResetTimer(This) ) 

#define IFileOperationProgressSink_PauseTimer(This)	\
    ( (This)->lpVtbl -> PauseTimer(This) ) 

#define IFileOperationProgressSink_ResumeTimer(This)	\
    ( (This)->lpVtbl -> ResumeTimer(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileOperationProgressSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0045 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0045_v0_0_s_ifspec;

#ifndef __IShellItemArray_INTERFACE_DEFINED__
#define __IShellItemArray_INTERFACE_DEFINED__

/* interface IShellItemArray */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum SIATTRIBFLAGS
    {
        SIATTRIBFLAGS_AND	= 0x1,
        SIATTRIBFLAGS_OR	= 0x2,
        SIATTRIBFLAGS_APPCOMPAT	= 0x3,
        SIATTRIBFLAGS_MASK	= 0x3,
        SIATTRIBFLAGS_ALLITEMS	= 0x4000
    } 	SIATTRIBFLAGS;

DEFINE_ENUM_FLAG_OPERATORS(SIATTRIBFLAGS)

EXTERN_C const IID IID_IShellItemArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b63ea76d-1f85-456f-a19c-48159efa858b")
    IShellItemArray : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BindToHandler( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionList( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [in] */ SIATTRIBFLAGS AttribFlags,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out DWORD *pdwNumItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemAt( 
            /* [in] */ DWORD dwIndex,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumItems( 
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenumShellItems) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItemArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItemArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItemArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            __RPC__in IShellItemArray * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )( 
            __RPC__in IShellItemArray * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionList )( 
            __RPC__in IShellItemArray * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IShellItemArray * This,
            /* [in] */ SIATTRIBFLAGS AttribFlags,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IShellItemArray * This,
            /* [out] */ __RPC__out DWORD *pdwNumItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemAt )( 
            __RPC__in IShellItemArray * This,
            /* [in] */ DWORD dwIndex,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *EnumItems )( 
            __RPC__in IShellItemArray * This,
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenumShellItems);
        
        END_INTERFACE
    } IShellItemArrayVtbl;

    interface IShellItemArray
    {
        CONST_VTBL struct IShellItemArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemArray_BindToHandler(This,pbc,bhid,riid,ppvOut)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppvOut) ) 

#define IShellItemArray_GetPropertyStore(This,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) ) 

#define IShellItemArray_GetPropertyDescriptionList(This,keyType,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) ) 

#define IShellItemArray_GetAttributes(This,AttribFlags,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,AttribFlags,sfgaoMask,psfgaoAttribs) ) 

#define IShellItemArray_GetCount(This,pdwNumItems)	\
    ( (This)->lpVtbl -> GetCount(This,pdwNumItems) ) 

#define IShellItemArray_GetItemAt(This,dwIndex,ppsi)	\
    ( (This)->lpVtbl -> GetItemAt(This,dwIndex,ppsi) ) 

#define IShellItemArray_EnumItems(This,ppenumShellItems)	\
    ( (This)->lpVtbl -> EnumItems(This,ppenumShellItems) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemArray_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0046 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHCreateShellItemArray(_In_opt_ PCIDLIST_ABSOLUTE pidlParent, _In_opt_ IShellFolder *psf, _In_ UINT cidl, _In_reads_opt_(cidl) PCUITEMID_CHILD_ARRAY ppidl, _Outptr_ IShellItemArray **ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromDataObject(_In_ IDataObject *pdo, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHCreateShellItemArrayFromIDLists(_In_ UINT cidl, _In_reads_(cidl) PCIDLIST_ABSOLUTE_ARRAY rgpidl, _Outptr_ IShellItemArray **ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromShellItem(_In_ IShellItem *psi, _In_ REFIID riid, _Outptr_ void **ppv);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0046_v0_0_s_ifspec;

#ifndef __IInitializeWithItem_INTERFACE_DEFINED__
#define __IInitializeWithItem_INTERFACE_DEFINED__

/* interface IInitializeWithItem */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IInitializeWithItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f73be3f-fb79-493c-a6c7-7ee14e245841")
    IInitializeWithItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ DWORD grfMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializeWithItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInitializeWithItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInitializeWithItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInitializeWithItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IInitializeWithItem * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ DWORD grfMode);
        
        END_INTERFACE
    } IInitializeWithItemVtbl;

    interface IInitializeWithItem
    {
        CONST_VTBL struct IInitializeWithItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeWithItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeWithItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeWithItem_Initialize(This,psi,grfMode)	\
    ( (This)->lpVtbl -> Initialize(This,psi,grfMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeWithItem_INTERFACE_DEFINED__ */


#ifndef __IObjectWithSelection_INTERFACE_DEFINED__
#define __IObjectWithSelection_INTERFACE_DEFINED__

/* interface IObjectWithSelection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IObjectWithSelection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1c9cd5bb-98e9-4491-a60f-31aacc72b83c")
    IObjectWithSelection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSelection( 
            /* [in] */ __RPC__in_opt IShellItemArray *psia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectWithSelectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectWithSelection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectWithSelection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectWithSelection * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSelection )( 
            __RPC__in IObjectWithSelection * This,
            /* [in] */ __RPC__in_opt IShellItemArray *psia);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            __RPC__in IObjectWithSelection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IObjectWithSelectionVtbl;

    interface IObjectWithSelection
    {
        CONST_VTBL struct IObjectWithSelectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithSelection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectWithSelection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectWithSelection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectWithSelection_SetSelection(This,psia)	\
    ( (This)->lpVtbl -> SetSelection(This,psia) ) 

#define IObjectWithSelection_GetSelection(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetSelection(This,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectWithSelection_INTERFACE_DEFINED__ */


#ifndef __IObjectWithBackReferences_INTERFACE_DEFINED__
#define __IObjectWithBackReferences_INTERFACE_DEFINED__

/* interface IObjectWithBackReferences */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IObjectWithBackReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("321a6a6a-d61f-4bf3-97ae-14be2986bb36")
    IObjectWithBackReferences : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RemoveBackReferences( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectWithBackReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectWithBackReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectWithBackReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectWithBackReferences * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveBackReferences )( 
            __RPC__in IObjectWithBackReferences * This);
        
        END_INTERFACE
    } IObjectWithBackReferencesVtbl;

    interface IObjectWithBackReferences
    {
        CONST_VTBL struct IObjectWithBackReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithBackReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectWithBackReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectWithBackReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectWithBackReferences_RemoveBackReferences(This)	\
    ( (This)->lpVtbl -> RemoveBackReferences(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectWithBackReferences_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0049 */
/* [local] */ 

/* [v1_enum] */ 
enum _PROPERTYUI_NAME_FLAGS
    {
        PUIFNF_DEFAULT	= 0,
        PUIFNF_MNEMONIC	= 0x1
    } ;
typedef DWORD PROPERTYUI_NAME_FLAGS;

/* [v1_enum] */ 
enum _PROPERTYUI_FLAGS
    {
        PUIF_DEFAULT	= 0,
        PUIF_RIGHTALIGN	= 0x1,
        PUIF_NOLABELININFOTIP	= 0x2
    } ;
typedef DWORD PROPERTYUI_FLAGS;

/* [v1_enum] */ 
enum _PROPERTYUI_FORMAT_FLAGS
    {
        PUIFFDF_DEFAULT	= 0,
        PUIFFDF_RIGHTTOLEFT	= 0x1,
        PUIFFDF_SHORTFORMAT	= 0x2,
        PUIFFDF_NOTIME	= 0x4,
        PUIFFDF_FRIENDLYDATE	= 0x8
    } ;
typedef DWORD PROPERTYUI_FORMAT_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0049_v0_0_s_ifspec;

#ifndef __IPropertyUI_INTERFACE_DEFINED__
#define __IPropertyUI_INTERFACE_DEFINED__

/* interface IPropertyUI */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("757a7d9f-919a-4118-99d7-dbb208c8cc66")
    IPropertyUI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParsePropertyName( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [out] */ __RPC__out FMTID *pfmtid,
            /* [out] */ __RPC__out PROPID *ppid,
            /* [out][in] */ __RPC__inout ULONG *pchEaten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCannonicalName( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ PROPERTYUI_NAME_FLAGS flags,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescription( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultWidth( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out ULONG *pcxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out PROPERTYUI_FLAGS *pflags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatForDisplay( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ __RPC__in const PROPVARIANT *ppropvar,
            /* [in] */ PROPERTYUI_FORMAT_FLAGS puiff,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHelpInfo( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pwszHelpFile,
            /* [in] */ DWORD cch,
            /* [out] */ __RPC__out UINT *puHelpID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPropertyUI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPropertyUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParsePropertyName )( 
            __RPC__in IPropertyUI * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [out] */ __RPC__out FMTID *pfmtid,
            /* [out] */ __RPC__out PROPID *ppid,
            /* [out][in] */ __RPC__inout ULONG *pchEaten);
        
        HRESULT ( STDMETHODCALLTYPE *GetCannonicalName )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ PROPERTYUI_NAME_FLAGS flags,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescription )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultWidth )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out ULONG *pcxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out PROPERTYUI_FLAGS *pflags);
        
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ __RPC__in const PROPVARIANT *ppropvar,
            /* [in] */ PROPERTYUI_FORMAT_FLAGS puiff,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpInfo )( 
            __RPC__in IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pwszHelpFile,
            /* [in] */ DWORD cch,
            /* [out] */ __RPC__out UINT *puHelpID);
        
        END_INTERFACE
    } IPropertyUIVtbl;

    interface IPropertyUI
    {
        CONST_VTBL struct IPropertyUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyUI_ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten)	\
    ( (This)->lpVtbl -> ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten) ) 

#define IPropertyUI_GetCannonicalName(This,fmtid,pid,pwszText,cchText)	\
    ( (This)->lpVtbl -> GetCannonicalName(This,fmtid,pid,pwszText,cchText) ) 

#define IPropertyUI_GetDisplayName(This,fmtid,pid,flags,pwszText,cchText)	\
    ( (This)->lpVtbl -> GetDisplayName(This,fmtid,pid,flags,pwszText,cchText) ) 

#define IPropertyUI_GetPropertyDescription(This,fmtid,pid,pwszText,cchText)	\
    ( (This)->lpVtbl -> GetPropertyDescription(This,fmtid,pid,pwszText,cchText) ) 

#define IPropertyUI_GetDefaultWidth(This,fmtid,pid,pcxChars)	\
    ( (This)->lpVtbl -> GetDefaultWidth(This,fmtid,pid,pcxChars) ) 

#define IPropertyUI_GetFlags(This,fmtid,pid,pflags)	\
    ( (This)->lpVtbl -> GetFlags(This,fmtid,pid,pflags) ) 

#define IPropertyUI_FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText)	\
    ( (This)->lpVtbl -> FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText) ) 

#define IPropertyUI_GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID)	\
    ( (This)->lpVtbl -> GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyUI_INTERFACE_DEFINED__ */


#ifndef __ICategoryProvider_INTERFACE_DEFINED__
#define __ICategoryProvider_INTERFACE_DEFINED__

/* interface ICategoryProvider */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICategoryProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9af64809-5864-4c26-a720-c1f78c086ee3")
    ICategoryProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanCategorizeOnSCID( 
            /* [in] */ __RPC__in const SHCOLUMNID *pscid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultCategory( 
            /* [out] */ __RPC__out GUID *pguid,
            /* [out] */ __RPC__out SHCOLUMNID *pscid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategoryForSCID( 
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out GUID *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCategories( 
            /* [out] */ __RPC__deref_out_opt IEnumGUID **penum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategoryName( 
            /* [in] */ __RPC__in const GUID *pguid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            /* [in] */ UINT cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCategory( 
            /* [in] */ __RPC__in const GUID *pguid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICategoryProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICategoryProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICategoryProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICategoryProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanCategorizeOnSCID )( 
            __RPC__in ICategoryProvider * This,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultCategory )( 
            __RPC__in ICategoryProvider * This,
            /* [out] */ __RPC__out GUID *pguid,
            /* [out] */ __RPC__out SHCOLUMNID *pscid);
        
        HRESULT ( STDMETHODCALLTYPE *GetCategoryForSCID )( 
            __RPC__in ICategoryProvider * This,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out GUID *pguid);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategories )( 
            __RPC__in ICategoryProvider * This,
            /* [out] */ __RPC__deref_out_opt IEnumGUID **penum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCategoryName )( 
            __RPC__in ICategoryProvider * This,
            /* [in] */ __RPC__in const GUID *pguid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            /* [in] */ UINT cch);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCategory )( 
            __RPC__in ICategoryProvider * This,
            /* [in] */ __RPC__in const GUID *pguid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } ICategoryProviderVtbl;

    interface ICategoryProvider
    {
        CONST_VTBL struct ICategoryProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategoryProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICategoryProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICategoryProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICategoryProvider_CanCategorizeOnSCID(This,pscid)	\
    ( (This)->lpVtbl -> CanCategorizeOnSCID(This,pscid) ) 

#define ICategoryProvider_GetDefaultCategory(This,pguid,pscid)	\
    ( (This)->lpVtbl -> GetDefaultCategory(This,pguid,pscid) ) 

#define ICategoryProvider_GetCategoryForSCID(This,pscid,pguid)	\
    ( (This)->lpVtbl -> GetCategoryForSCID(This,pscid,pguid) ) 

#define ICategoryProvider_EnumCategories(This,penum)	\
    ( (This)->lpVtbl -> EnumCategories(This,penum) ) 

#define ICategoryProvider_GetCategoryName(This,pguid,pszName,cch)	\
    ( (This)->lpVtbl -> GetCategoryName(This,pguid,pszName,cch) ) 

#define ICategoryProvider_CreateCategory(This,pguid,riid,ppv)	\
    ( (This)->lpVtbl -> CreateCategory(This,pguid,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICategoryProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0051 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum CATEGORYINFO_FLAGS
    {
        CATINFO_NORMAL	= 0,
        CATINFO_COLLAPSED	= 0x1,
        CATINFO_HIDDEN	= 0x2,
        CATINFO_EXPANDED	= 0x4,
        CATINFO_NOHEADER	= 0x8,
        CATINFO_NOTCOLLAPSIBLE	= 0x10,
        CATINFO_NOHEADERCOUNT	= 0x20,
        CATINFO_SUBSETTED	= 0x40,
        CATINFO_SEPARATE_IMAGES	= 0x80,
        CATINFO_SHOWEMPTY	= 0x100
    } 	CATEGORYINFO_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(CATEGORYINFO_FLAGS)
typedef /* [v1_enum] */ 
enum CATSORT_FLAGS
    {
        CATSORT_DEFAULT	= 0,
        CATSORT_NAME	= 0x1
    } 	CATSORT_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(CATSORT_FLAGS)
typedef struct CATEGORY_INFO
    {
    CATEGORYINFO_FLAGS cif;
    WCHAR wszName[ 260 ];
    } 	CATEGORY_INFO;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0051_v0_0_s_ifspec;

#ifndef __ICategorizer_INTERFACE_DEFINED__
#define __ICategorizer_INTERFACE_DEFINED__

/* interface ICategorizer */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICategorizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a3b14589-9174-49a8-89a3-06a1ae2b9ba7")
    ICategorizer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDesc,
            /* [in] */ UINT cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][out] */ __RPC__out_ecount_full(cidl) DWORD *rgCategoryIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategoryInfo( 
            /* [in] */ DWORD dwCategoryId,
            /* [out] */ __RPC__out CATEGORY_INFO *pci) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareCategory( 
            /* [in] */ CATSORT_FLAGS csfFlags,
            /* [in] */ DWORD dwCategoryId1,
            /* [in] */ DWORD dwCategoryId2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICategorizerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICategorizer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICategorizer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICategorizer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in ICategorizer * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDesc,
            /* [in] */ UINT cch);
        
        HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            __RPC__in ICategorizer * This,
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][out] */ __RPC__out_ecount_full(cidl) DWORD *rgCategoryIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetCategoryInfo )( 
            __RPC__in ICategorizer * This,
            /* [in] */ DWORD dwCategoryId,
            /* [out] */ __RPC__out CATEGORY_INFO *pci);
        
        HRESULT ( STDMETHODCALLTYPE *CompareCategory )( 
            __RPC__in ICategorizer * This,
            /* [in] */ CATSORT_FLAGS csfFlags,
            /* [in] */ DWORD dwCategoryId1,
            /* [in] */ DWORD dwCategoryId2);
        
        END_INTERFACE
    } ICategorizerVtbl;

    interface ICategorizer
    {
        CONST_VTBL struct ICategorizerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategorizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICategorizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICategorizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICategorizer_GetDescription(This,pszDesc,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszDesc,cch) ) 

#define ICategorizer_GetCategory(This,cidl,apidl,rgCategoryIds)	\
    ( (This)->lpVtbl -> GetCategory(This,cidl,apidl,rgCategoryIds) ) 

#define ICategorizer_GetCategoryInfo(This,dwCategoryId,pci)	\
    ( (This)->lpVtbl -> GetCategoryInfo(This,dwCategoryId,pci) ) 

#define ICategorizer_CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2)	\
    ( (This)->lpVtbl -> CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICategorizer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0052 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#include <pshpack8.h>
typedef struct SHDRAGIMAGE
    {
    SIZE sizeDragImage;
    POINT ptOffset;
    HBITMAP hbmpDragImage;
    COLORREF crColorKey;
    } 	SHDRAGIMAGE;

typedef struct SHDRAGIMAGE *LPSHDRAGIMAGE;

#include <poppack.h> // Return to byte packing
#define DI_GETDRAGIMAGE     TEXT("ShellGetDragImage")


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0052_v0_0_s_ifspec;

#ifndef __IDropTargetHelper_INTERFACE_DEFINED__
#define __IDropTargetHelper_INTERFACE_DEFINED__

/* interface IDropTargetHelper */
/* [object][unique][local][uuid] */ 


EXTERN_C const IID IID_IDropTargetHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4657278B-411B-11D2-839A-00C04FD918D0")
    IDropTargetHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DragEnter( 
            /* [annotation][in] */ 
            _In_  HWND hwndTarget,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject,
            /* [annotation][in] */ 
            _In_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  DWORD dwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragOver( 
            /* [annotation][in] */ 
            _In_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  DWORD dwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Drop( 
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject,
            /* [annotation][in] */ 
            _In_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  DWORD dwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [annotation][in] */ 
            _In_  BOOL fShow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDropTargetHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDropTargetHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDropTargetHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDropTargetHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragEnter )( 
            IDropTargetHelper * This,
            /* [annotation][in] */ 
            _In_  HWND hwndTarget,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject,
            /* [annotation][in] */ 
            _In_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  DWORD dwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *DragLeave )( 
            IDropTargetHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragOver )( 
            IDropTargetHelper * This,
            /* [annotation][in] */ 
            _In_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  DWORD dwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *Drop )( 
            IDropTargetHelper * This,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject,
            /* [annotation][in] */ 
            _In_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  DWORD dwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IDropTargetHelper * This,
            /* [annotation][in] */ 
            _In_  BOOL fShow);
        
        END_INTERFACE
    } IDropTargetHelperVtbl;

    interface IDropTargetHelper
    {
        CONST_VTBL struct IDropTargetHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDropTargetHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDropTargetHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDropTargetHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDropTargetHelper_DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect)	\
    ( (This)->lpVtbl -> DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect) ) 

#define IDropTargetHelper_DragLeave(This)	\
    ( (This)->lpVtbl -> DragLeave(This) ) 

#define IDropTargetHelper_DragOver(This,ppt,dwEffect)	\
    ( (This)->lpVtbl -> DragOver(This,ppt,dwEffect) ) 

#define IDropTargetHelper_Drop(This,pDataObject,ppt,dwEffect)	\
    ( (This)->lpVtbl -> Drop(This,pDataObject,ppt,dwEffect) ) 

#define IDropTargetHelper_Show(This,fShow)	\
    ( (This)->lpVtbl -> Show(This,fShow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDropTargetHelper_INTERFACE_DEFINED__ */


#ifndef __IDragSourceHelper_INTERFACE_DEFINED__
#define __IDragSourceHelper_INTERFACE_DEFINED__

/* interface IDragSourceHelper */
/* [object][unique][local][uuid] */ 


EXTERN_C const IID IID_IDragSourceHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE5BF786-477A-11D2-839D-00C04FD918D0")
    IDragSourceHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromBitmap( 
            /* [annotation][in] */ 
            _In_  LPSHDRAGIMAGE pshdi,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromWindow( 
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][unique][in] */ 
            _In_opt_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDragSourceHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDragSourceHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDragSourceHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDragSourceHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBitmap )( 
            IDragSourceHelper * This,
            /* [annotation][in] */ 
            _In_  LPSHDRAGIMAGE pshdi,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromWindow )( 
            IDragSourceHelper * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][unique][in] */ 
            _In_opt_  POINT *ppt,
            /* [annotation][in] */ 
            _In_  IDataObject *pDataObject);
        
        END_INTERFACE
    } IDragSourceHelperVtbl;

    interface IDragSourceHelper
    {
        CONST_VTBL struct IDragSourceHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDragSourceHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDragSourceHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDragSourceHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDragSourceHelper_InitializeFromBitmap(This,pshdi,pDataObject)	\
    ( (This)->lpVtbl -> InitializeFromBitmap(This,pshdi,pDataObject) ) 

#define IDragSourceHelper_InitializeFromWindow(This,hwnd,ppt,pDataObject)	\
    ( (This)->lpVtbl -> InitializeFromWindow(This,hwnd,ppt,pDataObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDragSourceHelper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0054 */
/* [local] */ 

#endif  // NTDDI_WIN2K
#ifdef UNICODE
#define IShellLink      IShellLinkW
#else
#define IShellLink      IShellLinkA
#endif
typedef /* [v1_enum] */ 
enum SLR_FLAGS
    {
        SLR_NONE	= 0,
        SLR_NO_UI	= 0x1,
        SLR_ANY_MATCH	= 0x2,
        SLR_UPDATE	= 0x4,
        SLR_NOUPDATE	= 0x8,
        SLR_NOSEARCH	= 0x10,
        SLR_NOTRACK	= 0x20,
        SLR_NOLINKINFO	= 0x40,
        SLR_INVOKE_MSI	= 0x80,
        SLR_NO_UI_WITH_MSG_PUMP	= 0x101,
        SLR_OFFER_DELETE_WITHOUT_FILE	= 0x200,
        SLR_KNOWNFOLDER	= 0x400,
        SLR_MACHINE_IN_LOCAL_TARGET	= 0x800,
        SLR_UPDATE_MACHINE_AND_SID	= 0x1000,
        SLR_NO_OBJECT_ID	= 0x2000
    } 	SLR_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(SLR_FLAGS)
typedef /* [v1_enum] */ 
enum SLGP_FLAGS
    {
        SLGP_SHORTPATH	= 0x1,
        SLGP_UNCPRIORITY	= 0x2,
        SLGP_RAWPATH	= 0x4,
        SLGP_RELATIVEPRIORITY	= 0x8
    } 	SLGP_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(SLGP_FLAGS)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0054_v0_0_s_ifspec;

#ifndef __IShellLinkA_INTERFACE_DEFINED__
#define __IShellLinkA_INTERFACE_DEFINED__

/* interface IShellLinkA */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214EE-0000-0000-C000-000000000046")
    IShellLinkA : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAA *pfd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszName,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [string][in] */ __RPC__in_string LPCSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWorkingDirectory( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszDir,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWorkingDirectory( 
            /* [string][in] */ __RPC__in_string LPCSTR pszDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArguments( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszArgs,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArguments( 
            /* [string][in] */ __RPC__in_string LPCSTR pszArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHotkey( 
            /* [out] */ __RPC__out WORD *pwHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotkey( 
            /* [in] */ WORD wHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowCmd( 
            /* [out] */ __RPC__out int *piShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowCmd( 
            /* [in] */ int iShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconLocation( 
            /* [string][in] */ __RPC__in_string LPCSTR pszIconPath,
            /* [in] */ int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRelativePath( 
            /* [string][in] */ __RPC__in_string LPCSTR pszPathRel,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resolve( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [string][in] */ __RPC__in_string LPCSTR pszFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellLinkAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellLinkA * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellLinkA * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellLinkA * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            __RPC__in IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAA *pfd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            __RPC__in IShellLinkA * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            __RPC__in IShellLinkA * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszName,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            __RPC__in IShellLinkA * This,
            /* [string][in] */ __RPC__in_string LPCSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetWorkingDirectory )( 
            __RPC__in IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszDir,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )( 
            __RPC__in IShellLinkA * This,
            /* [string][in] */ __RPC__in_string LPCSTR pszDir);
        
        HRESULT ( STDMETHODCALLTYPE *GetArguments )( 
            __RPC__in IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszArgs,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetArguments )( 
            __RPC__in IShellLinkA * This,
            /* [string][in] */ __RPC__in_string LPCSTR pszArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetHotkey )( 
            __RPC__in IShellLinkA * This,
            /* [out] */ __RPC__out WORD *pwHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotkey )( 
            __RPC__in IShellLinkA * This,
            /* [in] */ WORD wHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowCmd )( 
            __RPC__in IShellLinkA * This,
            /* [out] */ __RPC__out int *piShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowCmd )( 
            __RPC__in IShellLinkA * This,
            /* [in] */ int iShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            __RPC__in IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconLocation )( 
            __RPC__in IShellLinkA * This,
            /* [string][in] */ __RPC__in_string LPCSTR pszIconPath,
            /* [in] */ int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetRelativePath )( 
            __RPC__in IShellLinkA * This,
            /* [string][in] */ __RPC__in_string LPCSTR pszPathRel,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            __RPC__in IShellLinkA * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            __RPC__in IShellLinkA * This,
            /* [string][in] */ __RPC__in_string LPCSTR pszFile);
        
        END_INTERFACE
    } IShellLinkAVtbl;

    interface IShellLinkA
    {
        CONST_VTBL struct IShellLinkAVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkA_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkA_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkA_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkA_GetPath(This,pszFile,cch,pfd,fFlags)	\
    ( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) ) 

#define IShellLinkA_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#define IShellLinkA_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IShellLinkA_GetDescription(This,pszName,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszName,cch) ) 

#define IShellLinkA_SetDescription(This,pszName)	\
    ( (This)->lpVtbl -> SetDescription(This,pszName) ) 

#define IShellLinkA_GetWorkingDirectory(This,pszDir,cch)	\
    ( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) ) 

#define IShellLinkA_SetWorkingDirectory(This,pszDir)	\
    ( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) ) 

#define IShellLinkA_GetArguments(This,pszArgs,cch)	\
    ( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) ) 

#define IShellLinkA_SetArguments(This,pszArgs)	\
    ( (This)->lpVtbl -> SetArguments(This,pszArgs) ) 

#define IShellLinkA_GetHotkey(This,pwHotkey)	\
    ( (This)->lpVtbl -> GetHotkey(This,pwHotkey) ) 

#define IShellLinkA_SetHotkey(This,wHotkey)	\
    ( (This)->lpVtbl -> SetHotkey(This,wHotkey) ) 

#define IShellLinkA_GetShowCmd(This,piShowCmd)	\
    ( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) ) 

#define IShellLinkA_SetShowCmd(This,iShowCmd)	\
    ( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) ) 

#define IShellLinkA_GetIconLocation(This,pszIconPath,cch,piIcon)	\
    ( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) ) 

#define IShellLinkA_SetIconLocation(This,pszIconPath,iIcon)	\
    ( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) ) 

#define IShellLinkA_SetRelativePath(This,pszPathRel,dwReserved)	\
    ( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) ) 

#define IShellLinkA_Resolve(This,hwnd,fFlags)	\
    ( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) ) 

#define IShellLinkA_SetPath(This,pszFile)	\
    ( (This)->lpVtbl -> SetPath(This,pszFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkA_INTERFACE_DEFINED__ */


#ifndef __IShellLinkW_INTERFACE_DEFINED__
#define __IShellLinkW_INTERFACE_DEFINED__

/* interface IShellLinkW */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F9-0000-0000-C000-000000000046")
    IShellLinkW : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAW *pfd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWorkingDirectory( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDir,
            int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWorkingDirectory( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArguments( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszArgs,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArguments( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHotkey( 
            /* [out] */ __RPC__out WORD *pwHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotkey( 
            /* [in] */ WORD wHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowCmd( 
            /* [out] */ __RPC__out int *piShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowCmd( 
            /* [in] */ int iShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconLocation( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszIconPath,
            /* [in] */ int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRelativePath( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszPathRel,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resolve( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellLinkWVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellLinkW * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellLinkW * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellLinkW * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAW *pfd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            __RPC__in IShellLinkW * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            __RPC__in IShellLinkW * This,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetWorkingDirectory )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDir,
            int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDir);
        
        HRESULT ( STDMETHODCALLTYPE *GetArguments )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszArgs,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetArguments )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetHotkey )( 
            __RPC__in IShellLinkW * This,
            /* [out] */ __RPC__out WORD *pwHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotkey )( 
            __RPC__in IShellLinkW * This,
            /* [in] */ WORD wHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowCmd )( 
            __RPC__in IShellLinkW * This,
            /* [out] */ __RPC__out int *piShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowCmd )( 
            __RPC__in IShellLinkW * This,
            /* [in] */ int iShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconLocation )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszIconPath,
            /* [in] */ int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetRelativePath )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPathRel,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            __RPC__in IShellLinkW * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszFile);
        
        END_INTERFACE
    } IShellLinkWVtbl;

    interface IShellLinkW
    {
        CONST_VTBL struct IShellLinkWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkW_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkW_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkW_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkW_GetPath(This,pszFile,cch,pfd,fFlags)	\
    ( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) ) 

#define IShellLinkW_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#define IShellLinkW_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IShellLinkW_GetDescription(This,pszName,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszName,cch) ) 

#define IShellLinkW_SetDescription(This,pszName)	\
    ( (This)->lpVtbl -> SetDescription(This,pszName) ) 

#define IShellLinkW_GetWorkingDirectory(This,pszDir,cch)	\
    ( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) ) 

#define IShellLinkW_SetWorkingDirectory(This,pszDir)	\
    ( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) ) 

#define IShellLinkW_GetArguments(This,pszArgs,cch)	\
    ( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) ) 

#define IShellLinkW_SetArguments(This,pszArgs)	\
    ( (This)->lpVtbl -> SetArguments(This,pszArgs) ) 

#define IShellLinkW_GetHotkey(This,pwHotkey)	\
    ( (This)->lpVtbl -> GetHotkey(This,pwHotkey) ) 

#define IShellLinkW_SetHotkey(This,wHotkey)	\
    ( (This)->lpVtbl -> SetHotkey(This,wHotkey) ) 

#define IShellLinkW_GetShowCmd(This,piShowCmd)	\
    ( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) ) 

#define IShellLinkW_SetShowCmd(This,iShowCmd)	\
    ( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) ) 

#define IShellLinkW_GetIconLocation(This,pszIconPath,cch,piIcon)	\
    ( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) ) 

#define IShellLinkW_SetIconLocation(This,pszIconPath,iIcon)	\
    ( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) ) 

#define IShellLinkW_SetRelativePath(This,pszPathRel,dwReserved)	\
    ( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) ) 

#define IShellLinkW_Resolve(This,hwnd,fFlags)	\
    ( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) ) 

#define IShellLinkW_SetPath(This,pszFile)	\
    ( (This)->lpVtbl -> SetPath(This,pszFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkW_INTERFACE_DEFINED__ */


#ifndef __IShellLinkDataList_INTERFACE_DEFINED__
#define __IShellLinkDataList_INTERFACE_DEFINED__

/* interface IShellLinkDataList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkDataList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45e2b4ae-b1c3-11d0-b92f-00a0c90312e1")
    IShellLinkDataList : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE AddDataBlock( 
            /* [annotation][in] */ 
            _In_  void *pDataBlock) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE CopyDataBlock( 
            /* [annotation][in] */ 
            _In_  DWORD dwSig,
            /* [annotation][out] */ 
            _Outptr_  void **ppDataBlock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveDataBlock( 
            /* [in] */ DWORD dwSig) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellLinkDataListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellLinkDataList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellLinkDataList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellLinkDataList * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddDataBlock )( 
            IShellLinkDataList * This,
            /* [annotation][in] */ 
            _In_  void *pDataBlock);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyDataBlock )( 
            IShellLinkDataList * This,
            /* [annotation][in] */ 
            _In_  DWORD dwSig,
            /* [annotation][out] */ 
            _Outptr_  void **ppDataBlock);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveDataBlock )( 
            __RPC__in IShellLinkDataList * This,
            /* [in] */ DWORD dwSig);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            __RPC__in IShellLinkDataList * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            __RPC__in IShellLinkDataList * This,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IShellLinkDataListVtbl;

    interface IShellLinkDataList
    {
        CONST_VTBL struct IShellLinkDataListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkDataList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkDataList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkDataList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkDataList_AddDataBlock(This,pDataBlock)	\
    ( (This)->lpVtbl -> AddDataBlock(This,pDataBlock) ) 

#define IShellLinkDataList_CopyDataBlock(This,dwSig,ppDataBlock)	\
    ( (This)->lpVtbl -> CopyDataBlock(This,dwSig,ppDataBlock) ) 

#define IShellLinkDataList_RemoveDataBlock(This,dwSig)	\
    ( (This)->lpVtbl -> RemoveDataBlock(This,dwSig) ) 

#define IShellLinkDataList_GetFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) ) 

#define IShellLinkDataList_SetFlags(This,dwFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkDataList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0057 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN2K)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0057_v0_0_s_ifspec;

#ifndef __IResolveShellLink_INTERFACE_DEFINED__
#define __IResolveShellLink_INTERFACE_DEFINED__

/* interface IResolveShellLink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IResolveShellLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5cd52983-9449-11d2-963a-00c04f79adf0")
    IResolveShellLink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResolveShellLink( 
            /* [in] */ __RPC__in_opt IUnknown *punkLink,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IResolveShellLinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IResolveShellLink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IResolveShellLink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IResolveShellLink * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResolveShellLink )( 
            __RPC__in IResolveShellLink * This,
            /* [in] */ __RPC__in_opt IUnknown *punkLink,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        END_INTERFACE
    } IResolveShellLinkVtbl;

    interface IResolveShellLink
    {
        CONST_VTBL struct IResolveShellLinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IResolveShellLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IResolveShellLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IResolveShellLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IResolveShellLink_ResolveShellLink(This,punkLink,hwnd,fFlags)	\
    ( (This)->lpVtbl -> ResolveShellLink(This,punkLink,hwnd,fFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IResolveShellLink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0058 */
/* [local] */ 

#endif  // NTDDI_WIN2K


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0058_v0_0_s_ifspec;

#ifndef __IActionProgressDialog_INTERFACE_DEFINED__
#define __IActionProgressDialog_INTERFACE_DEFINED__

/* interface IActionProgressDialog */
/* [unique][uuid][object] */ 

/* [v1_enum] */ 
enum _SPINITF
    {
        SPINITF_NORMAL	= 0,
        SPINITF_MODAL	= 0x1,
        SPINITF_NOMINIMIZE	= 0x8
    } ;
typedef DWORD SPINITF;


EXTERN_C const IID IID_IActionProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49ff1172-eadc-446d-9285-156453a6431c")
    IActionProgressDialog : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ SPINITF flags,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszCancel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActionProgressDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IActionProgressDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IActionProgressDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IActionProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IActionProgressDialog * This,
            /* [in] */ SPINITF flags,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszCancel);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            __RPC__in IActionProgressDialog * This);
        
        END_INTERFACE
    } IActionProgressDialogVtbl;

    interface IActionProgressDialog
    {
        CONST_VTBL struct IActionProgressDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActionProgressDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActionProgressDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActionProgressDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActionProgressDialog_Initialize(This,flags,pszTitle,pszCancel)	\
    ( (This)->lpVtbl -> Initialize(This,flags,pszTitle,pszCancel) ) 

#define IActionProgressDialog_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActionProgressDialog_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0059 */
/* [local] */ 

#define ARCONTENT_AUTORUNINF             0x00000002   // That's the one we have today, and always had
#define ARCONTENT_AUDIOCD                0x00000004   // Audio CD (not MP3 and the like, the stuff you buy at the store)
#define ARCONTENT_DVDMOVIE               0x00000008   // DVD Movie (not MPEGs, the stuff you buy at the store)
#define ARCONTENT_BLANKCD                0x00000010   // Blank CD-R/CD-RW)
#define ARCONTENT_BLANKDVD               0x00000020   // Blank DVD-R/DVD-RW
#define ARCONTENT_UNKNOWNCONTENT         0x00000040   // Whatever files.  Mean that it's formatted.
#define ARCONTENT_AUTOPLAYPIX            0x00000080   // Any files classified by shell as image. (jpg, bmp, etc.)
#define ARCONTENT_AUTOPLAYMUSIC          0x00000100   // Any files classified by shell as music. (wma, mp3, etc.)
#define ARCONTENT_AUTOPLAYVIDEO          0x00000200   // Any files classified by shell as video. (mpg, avi, etc.)
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define ARCONTENT_VCD                    0x00000400   // VCD format
#define ARCONTENT_SVCD                   0x00000800   // Super-VCD format
#define ARCONTENT_DVDAUDIO               0x00001000   // DVD-Audio
#define ARCONTENT_BLANKBD                0x00002000   // Blank BD-R/BD-RW
#define ARCONTENT_BLURAY                 0x00004000   // Blu-ray Disc
#define ARCONTENT_CAMERASTORAGE          0x00008000   // Camera Storage
#define ARCONTENT_CUSTOMEVENT            0x00010000   // Custom Event
#define ARCONTENT_NONE                   0x00000000   // Empty (but formatted)
#define ARCONTENT_MASK                   0x0001FFFE   // Bits that denote valid content types
#define ARCONTENT_PHASE_UNKNOWN          0x00000000   // We can be in any phase.  This is XP behavior.
#define ARCONTENT_PHASE_PRESNIFF         0x10000000   // These are contents we know w/o scanning the media for complete data (e.g. Audio track, DVD Movie).
#define ARCONTENT_PHASE_SNIFFING         0x20000000   // We are in the middle of searching the media.  There could be more contents to be found than currently reported.
#define ARCONTENT_PHASE_FINAL            0x40000000   // We have finished searching; contents we report are final.
#define ARCONTENT_PHASE_MASK             0x70000000   // Bits that denote what phase we are in the Autoplay process.
#endif  // NTDDI_VISTA


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0059_v0_0_s_ifspec;

#ifndef __IActionProgress_INTERFACE_DEFINED__
#define __IActionProgress_INTERFACE_DEFINED__

/* interface IActionProgress */
/* [unique][uuid][object] */ 

/* [v1_enum] */ 
enum _SPBEGINF
    {
        SPBEGINF_NORMAL	= 0,
        SPBEGINF_AUTOTIME	= 0x2,
        SPBEGINF_NOPROGRESSBAR	= 0x10,
        SPBEGINF_MARQUEEPROGRESS	= 0x20,
        SPBEGINF_NOCANCELBUTTON	= 0x40
    } ;
typedef DWORD SPBEGINF;

typedef /* [v1_enum] */ 
enum _SPACTION
    {
        SPACTION_NONE	= 0,
        SPACTION_MOVING	= ( SPACTION_NONE + 1 ) ,
        SPACTION_COPYING	= ( SPACTION_MOVING + 1 ) ,
        SPACTION_RECYCLING	= ( SPACTION_COPYING + 1 ) ,
        SPACTION_APPLYINGATTRIBS	= ( SPACTION_RECYCLING + 1 ) ,
        SPACTION_DOWNLOADING	= ( SPACTION_APPLYINGATTRIBS + 1 ) ,
        SPACTION_SEARCHING_INTERNET	= ( SPACTION_DOWNLOADING + 1 ) ,
        SPACTION_CALCULATING	= ( SPACTION_SEARCHING_INTERNET + 1 ) ,
        SPACTION_UPLOADING	= ( SPACTION_CALCULATING + 1 ) ,
        SPACTION_SEARCHING_FILES	= ( SPACTION_UPLOADING + 1 ) ,
        SPACTION_DELETING	= ( SPACTION_SEARCHING_FILES + 1 ) ,
        SPACTION_RENAMING	= ( SPACTION_DELETING + 1 ) ,
        SPACTION_FORMATTING	= ( SPACTION_RENAMING + 1 ) ,
        SPACTION_COPY_MOVING	= ( SPACTION_FORMATTING + 1 ) 
    } 	SPACTION;

typedef /* [v1_enum] */ 
enum _SPTEXT
    {
        SPTEXT_ACTIONDESCRIPTION	= 1,
        SPTEXT_ACTIONDETAIL	= ( SPTEXT_ACTIONDESCRIPTION + 1 ) 
    } 	SPTEXT;


EXTERN_C const IID IID_IActionProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49ff1173-eadc-446d-9285-156453a6431c")
    IActionProgress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Begin( 
            /* [in] */ SPACTION action,
            /* [in] */ SPBEGINF flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ ULONGLONG ulCompleted,
            /* [in] */ ULONGLONG ulTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateText( 
            /* [in] */ SPTEXT sptext,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText,
            /* [in] */ BOOL fMayCompact) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryCancel( 
            /* [out] */ __RPC__out BOOL *pfCancelled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetCancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActionProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IActionProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IActionProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IActionProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            __RPC__in IActionProgress * This,
            /* [in] */ SPACTION action,
            /* [in] */ SPBEGINF flags);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            __RPC__in IActionProgress * This,
            /* [in] */ ULONGLONG ulCompleted,
            /* [in] */ ULONGLONG ulTotal);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateText )( 
            __RPC__in IActionProgress * This,
            /* [in] */ SPTEXT sptext,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText,
            /* [in] */ BOOL fMayCompact);
        
        HRESULT ( STDMETHODCALLTYPE *QueryCancel )( 
            __RPC__in IActionProgress * This,
            /* [out] */ __RPC__out BOOL *pfCancelled);
        
        HRESULT ( STDMETHODCALLTYPE *ResetCancel )( 
            __RPC__in IActionProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            __RPC__in IActionProgress * This);
        
        END_INTERFACE
    } IActionProgressVtbl;

    interface IActionProgress
    {
        CONST_VTBL struct IActionProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActionProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActionProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActionProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActionProgress_Begin(This,action,flags)	\
    ( (This)->lpVtbl -> Begin(This,action,flags) ) 

#define IActionProgress_UpdateProgress(This,ulCompleted,ulTotal)	\
    ( (This)->lpVtbl -> UpdateProgress(This,ulCompleted,ulTotal) ) 

#define IActionProgress_UpdateText(This,sptext,pszText,fMayCompact)	\
    ( (This)->lpVtbl -> UpdateText(This,sptext,pszText,fMayCompact) ) 

#define IActionProgress_QueryCancel(This,pfCancelled)	\
    ( (This)->lpVtbl -> QueryCancel(This,pfCancelled) ) 

#define IActionProgress_ResetCancel(This)	\
    ( (This)->lpVtbl -> ResetCancel(This) ) 

#define IActionProgress_End(This)	\
    ( (This)->lpVtbl -> End(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActionProgress_INTERFACE_DEFINED__ */


#ifndef __IShellExtInit_INTERFACE_DEFINED__
#define __IShellExtInit_INTERFACE_DEFINED__

/* interface IShellExtInit */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IShellExtInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E8-0000-0000-C000-000000000046")
    IShellExtInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [annotation][unique][in] */ 
            _In_opt_  PCIDLIST_ABSOLUTE pidlFolder,
            /* [annotation][unique][in] */ 
            _In_opt_  IDataObject *pdtobj,
            /* [annotation][unique][in] */ 
            _In_opt_  HKEY hkeyProgID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellExtInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellExtInit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellExtInit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellExtInit * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IShellExtInit * This,
            /* [annotation][unique][in] */ 
            _In_opt_  PCIDLIST_ABSOLUTE pidlFolder,
            /* [annotation][unique][in] */ 
            _In_opt_  IDataObject *pdtobj,
            /* [annotation][unique][in] */ 
            _In_opt_  HKEY hkeyProgID);
        
        END_INTERFACE
    } IShellExtInitVtbl;

    interface IShellExtInit
    {
        CONST_VTBL struct IShellExtInitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellExtInit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellExtInit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellExtInit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellExtInit_Initialize(This,pidlFolder,pdtobj,hkeyProgID)	\
    ( (This)->lpVtbl -> Initialize(This,pidlFolder,pdtobj,hkeyProgID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellExtInit_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0061 */
/* [local] */ 

typedef IShellExtInit *LPSHELLEXTINIT;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0061_v0_0_s_ifspec;

#ifndef __IShellPropSheetExt_INTERFACE_DEFINED__
#define __IShellPropSheetExt_INTERFACE_DEFINED__

/* interface IShellPropSheetExt */
/* [unique][local][object][uuid] */ 

/* [v1_enum] */ 
enum _EXPPS
    {
        EXPPS_FILETYPES	= 0x1
    } ;
typedef UINT EXPPS;


EXTERN_C const IID IID_IShellPropSheetExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E9-0000-0000-C000-000000000046")
    IShellPropSheetExt : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPages( 
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfnAddPage,
            /* [annotation][in] */ 
            _In_  LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplacePage( 
            /* [annotation][in] */ 
            _In_  EXPPS uPageID,
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfnReplaceWith,
            /* [annotation][in] */ 
            _In_  LPARAM lParam) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellPropSheetExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellPropSheetExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellPropSheetExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellPropSheetExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPages )( 
            IShellPropSheetExt * This,
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfnAddPage,
            /* [annotation][in] */ 
            _In_  LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *ReplacePage )( 
            IShellPropSheetExt * This,
            /* [annotation][in] */ 
            _In_  EXPPS uPageID,
            /* [annotation][in] */ 
            _In_  LPFNSVADDPROPSHEETPAGE pfnReplaceWith,
            /* [annotation][in] */ 
            _In_  LPARAM lParam);
        
        END_INTERFACE
    } IShellPropSheetExtVtbl;

    interface IShellPropSheetExt
    {
        CONST_VTBL struct IShellPropSheetExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellPropSheetExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellPropSheetExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellPropSheetExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellPropSheetExt_AddPages(This,pfnAddPage,lParam)	\
    ( (This)->lpVtbl -> AddPages(This,pfnAddPage,lParam) ) 

#define IShellPropSheetExt_ReplacePage(This,uPageID,pfnReplaceWith,lParam)	\
    ( (This)->lpVtbl -> ReplacePage(This,uPageID,pfnReplaceWith,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellPropSheetExt_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0062 */
/* [local] */ 

typedef IShellPropSheetExt *LPSHELLPROPSHEETEXT;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0062_v0_0_s_ifspec;

#ifndef __IRemoteComputer_INTERFACE_DEFINED__
#define __IRemoteComputer_INTERFACE_DEFINED__

/* interface IRemoteComputer */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IRemoteComputer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214FE-0000-0000-C000-000000000046")
    IRemoteComputer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszMachine,
            /* [in] */ BOOL bEnumerating) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRemoteComputerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRemoteComputer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRemoteComputer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRemoteComputer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IRemoteComputer * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMachine,
            /* [in] */ BOOL bEnumerating);
        
        END_INTERFACE
    } IRemoteComputerVtbl;

    interface IRemoteComputer
    {
        CONST_VTBL struct IRemoteComputerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteComputer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRemoteComputer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRemoteComputer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRemoteComputer_Initialize(This,pszMachine,bEnumerating)	\
    ( (This)->lpVtbl -> Initialize(This,pszMachine,bEnumerating) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemoteComputer_INTERFACE_DEFINED__ */


#ifndef __IQueryContinue_INTERFACE_DEFINED__
#define __IQueryContinue_INTERFACE_DEFINED__

/* interface IQueryContinue */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IQueryContinue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7307055c-b24a-486b-9f25-163e597a28a9")
    IQueryContinue : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContinue( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueryContinueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IQueryContinue * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IQueryContinue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IQueryContinue * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContinue )( 
            __RPC__in IQueryContinue * This);
        
        END_INTERFACE
    } IQueryContinueVtbl;

    interface IQueryContinue
    {
        CONST_VTBL struct IQueryContinueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryContinue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueryContinue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueryContinue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueryContinue_QueryContinue(This)	\
    ( (This)->lpVtbl -> QueryContinue(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueryContinue_INTERFACE_DEFINED__ */


#ifndef __IObjectWithCancelEvent_INTERFACE_DEFINED__
#define __IObjectWithCancelEvent_INTERFACE_DEFINED__

/* interface IObjectWithCancelEvent */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IObjectWithCancelEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F279B885-0AE9-4b85-AC06-DDECF9408941")
    IObjectWithCancelEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCancelEvent( 
            /* [annotation][out] */ 
            _Out_  HANDLE *phEvent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectWithCancelEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectWithCancelEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectWithCancelEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectWithCancelEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCancelEvent )( 
            IObjectWithCancelEvent * This,
            /* [annotation][out] */ 
            _Out_  HANDLE *phEvent);
        
        END_INTERFACE
    } IObjectWithCancelEventVtbl;

    interface IObjectWithCancelEvent
    {
        CONST_VTBL struct IObjectWithCancelEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithCancelEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectWithCancelEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectWithCancelEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectWithCancelEvent_GetCancelEvent(This,phEvent)	\
    ( (This)->lpVtbl -> GetCancelEvent(This,phEvent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectWithCancelEvent_INTERFACE_DEFINED__ */


#ifndef __IUserNotification_INTERFACE_DEFINED__
#define __IUserNotification_INTERFACE_DEFINED__

/* interface IUserNotification */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IUserNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba9711ba-5893-4787-a7e1-41277151550b")
    IUserNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBalloonInfo( 
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszText,
            /* [in] */ DWORD dwInfoFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBalloonRetry( 
            /* [in] */ DWORD dwShowTime,
            /* [in] */ DWORD dwInterval,
            /* [in] */ UINT cRetryCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconInfo( 
            /* [unique][in] */ __RPC__in_opt HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszToolTip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [unique][in] */ __RPC__in_opt IQueryContinue *pqc,
            /* [in] */ DWORD dwContinuePollInterval) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlaySound( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszSoundName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUserNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUserNotification * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUserNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUserNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalloonInfo )( 
            __RPC__in IUserNotification * This,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszText,
            /* [in] */ DWORD dwInfoFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalloonRetry )( 
            __RPC__in IUserNotification * This,
            /* [in] */ DWORD dwShowTime,
            /* [in] */ DWORD dwInterval,
            /* [in] */ UINT cRetryCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconInfo )( 
            __RPC__in IUserNotification * This,
            /* [unique][in] */ __RPC__in_opt HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszToolTip);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            __RPC__in IUserNotification * This,
            /* [unique][in] */ __RPC__in_opt IQueryContinue *pqc,
            /* [in] */ DWORD dwContinuePollInterval);
        
        HRESULT ( STDMETHODCALLTYPE *PlaySound )( 
            __RPC__in IUserNotification * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszSoundName);
        
        END_INTERFACE
    } IUserNotificationVtbl;

    interface IUserNotification
    {
        CONST_VTBL struct IUserNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUserNotification_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags)	\
    ( (This)->lpVtbl -> SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) ) 

#define IUserNotification_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount)	\
    ( (This)->lpVtbl -> SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) ) 

#define IUserNotification_SetIconInfo(This,hIcon,pszToolTip)	\
    ( (This)->lpVtbl -> SetIconInfo(This,hIcon,pszToolTip) ) 

#define IUserNotification_Show(This,pqc,dwContinuePollInterval)	\
    ( (This)->lpVtbl -> Show(This,pqc,dwContinuePollInterval) ) 

#define IUserNotification_PlaySound(This,pszSoundName)	\
    ( (This)->lpVtbl -> PlaySound(This,pszSoundName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUserNotification_INTERFACE_DEFINED__ */


#ifndef __IItemNameLimits_INTERFACE_DEFINED__
#define __IItemNameLimits_INTERFACE_DEFINED__

/* interface IItemNameLimits */
/* [object][uuid] */ 


EXTERN_C const IID IID_IItemNameLimits;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1df0d7f1-b267-4d28-8b10-12e23202a5c4")
    IItemNameLimits : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetValidCharacters( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszValidChars,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszInvalidChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxLength( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [out] */ __RPC__out int *piMaxNameLen) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IItemNameLimitsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IItemNameLimits * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IItemNameLimits * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IItemNameLimits * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetValidCharacters )( 
            __RPC__in IItemNameLimits * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszValidChars,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszInvalidChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )( 
            __RPC__in IItemNameLimits * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [out] */ __RPC__out int *piMaxNameLen);
        
        END_INTERFACE
    } IItemNameLimitsVtbl;

    interface IItemNameLimits
    {
        CONST_VTBL struct IItemNameLimitsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IItemNameLimits_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IItemNameLimits_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IItemNameLimits_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IItemNameLimits_GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars)	\
    ( (This)->lpVtbl -> GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars) ) 

#define IItemNameLimits_GetMaxLength(This,pszName,piMaxNameLen)	\
    ( (This)->lpVtbl -> GetMaxLength(This,pszName,piMaxNameLen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IItemNameLimits_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0067 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0067_v0_0_s_ifspec;

#ifndef __ISearchFolderItemFactory_INTERFACE_DEFINED__
#define __ISearchFolderItemFactory_INTERFACE_DEFINED__

/* interface ISearchFolderItemFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISearchFolderItemFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a0ffbc28-5482-4366-be27-3e81e78e06c2")
    ISearchFolderItemFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDisplayName( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszDisplayName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderTypeID( 
            /* [in] */ FOLDERTYPEID ftid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderLogicalViewMode( 
            /* [in] */ FOLDERLOGICALVIEWMODE flvm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconSize( 
            /* [in] */ int iIconSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVisibleColumns( 
            /* [in] */ UINT cVisibleColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cVisibleColumns) const PROPERTYKEY *rgKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSortColumns( 
            /* [in] */ UINT cSortColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cSortColumns) SORTCOLUMN *rgSortColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGroupColumn( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyGroup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStacks( 
            /* [in] */ UINT cStackKeys,
            /* [size_is][in] */ __RPC__in_ecount_full(cStackKeys) PROPERTYKEY *rgStackKeys) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScope( 
            /* [in] */ __RPC__in_opt IShellItemArray *psiaScope) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCondition( 
            /* [in] */ __RPC__in_opt ICondition *pCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShellItem( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISearchFolderItemFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISearchFolderItemFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISearchFolderItemFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDisplayName);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderTypeID )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ FOLDERTYPEID ftid);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderLogicalViewMode )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ FOLDERLOGICALVIEWMODE flvm);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconSize )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ int iIconSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetVisibleColumns )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ UINT cVisibleColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cVisibleColumns) const PROPERTYKEY *rgKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetSortColumns )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ UINT cSortColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cSortColumns) SORTCOLUMN *rgSortColumns);
        
        HRESULT ( STDMETHODCALLTYPE *SetGroupColumn )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyGroup);
        
        HRESULT ( STDMETHODCALLTYPE *SetStacks )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ UINT cStackKeys,
            /* [size_is][in] */ __RPC__in_ecount_full(cStackKeys) PROPERTYKEY *rgStackKeys);
        
        HRESULT ( STDMETHODCALLTYPE *SetScope )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in_opt IShellItemArray *psiaScope);
        
        HRESULT ( STDMETHODCALLTYPE *SetCondition )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in_opt ICondition *pCondition);
        
        HRESULT ( STDMETHODCALLTYPE *GetShellItem )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            __RPC__in ISearchFolderItemFactory * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        END_INTERFACE
    } ISearchFolderItemFactoryVtbl;

    interface ISearchFolderItemFactory
    {
        CONST_VTBL struct ISearchFolderItemFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchFolderItemFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearchFolderItemFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearchFolderItemFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISearchFolderItemFactory_SetDisplayName(This,pszDisplayName)	\
    ( (This)->lpVtbl -> SetDisplayName(This,pszDisplayName) ) 

#define ISearchFolderItemFactory_SetFolderTypeID(This,ftid)	\
    ( (This)->lpVtbl -> SetFolderTypeID(This,ftid) ) 

#define ISearchFolderItemFactory_SetFolderLogicalViewMode(This,flvm)	\
    ( (This)->lpVtbl -> SetFolderLogicalViewMode(This,flvm) ) 

#define ISearchFolderItemFactory_SetIconSize(This,iIconSize)	\
    ( (This)->lpVtbl -> SetIconSize(This,iIconSize) ) 

#define ISearchFolderItemFactory_SetVisibleColumns(This,cVisibleColumns,rgKey)	\
    ( (This)->lpVtbl -> SetVisibleColumns(This,cVisibleColumns,rgKey) ) 

#define ISearchFolderItemFactory_SetSortColumns(This,cSortColumns,rgSortColumns)	\
    ( (This)->lpVtbl -> SetSortColumns(This,cSortColumns,rgSortColumns) ) 

#define ISearchFolderItemFactory_SetGroupColumn(This,keyGroup)	\
    ( (This)->lpVtbl -> SetGroupColumn(This,keyGroup) ) 

#define ISearchFolderItemFactory_SetStacks(This,cStackKeys,rgStackKeys)	\
    ( (This)->lpVtbl -> SetStacks(This,cStackKeys,rgStackKeys) ) 

#define ISearchFolderItemFactory_SetScope(This,psiaScope)	\
    ( (This)->lpVtbl -> SetScope(This,psiaScope) ) 

#define ISearchFolderItemFactory_SetCondition(This,pCondition)	\
    ( (This)->lpVtbl -> SetCondition(This,pCondition) ) 

#define ISearchFolderItemFactory_GetShellItem(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetShellItem(This,riid,ppv) ) 

#define ISearchFolderItemFactory_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearchFolderItemFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0068 */
/* [local] */ 

#endif  // NTDDI_VISTA
#define IEI_PRIORITY_MAX        ITSAT_MAX_PRIORITY
#define IEI_PRIORITY_MIN        ITSAT_MIN_PRIORITY
#define IEIT_PRIORITY_NORMAL     ITSAT_DEFAULT_PRIORITY
#define IEIFLAG_ASYNC       0x0001      // (deprecated) ask the extractor if it supports ASYNC extract (free threaded)
#define IEIFLAG_CACHE       0x0002      // returned from the extractor if it does NOT cache the thumbnail
#define IEIFLAG_ASPECT      0x0004      // passed to the extractor to beg it to render to the aspect ratio of the supplied rect
#define IEIFLAG_OFFLINE     0x0008      // if the extractor shouldn't hit the net to get any content neede for the rendering
#define IEIFLAG_GLEAM       0x0010      // does the image have a gleam ? this will be returned if it does
#define IEIFLAG_SCREEN      0x0020      // render as if for the screen  (this is exlusive with IEIFLAG_ASPECT )
#define IEIFLAG_ORIGSIZE    0x0040      // render to the approx size passed, but crop if neccessary
#define IEIFLAG_NOSTAMP     0x0080      // returned from the extractor if it does NOT want an icon stamp on the thumbnail
#define IEIFLAG_NOBORDER    0x0100      // returned from the extractor if it does NOT want an a border around the thumbnail
#define IEIFLAG_QUALITY     0x0200      // passed to the Extract method to indicate that a slower, higher quality image is desired, re-compute the thumbnail
#define IEIFLAG_REFRESH     0x0400      // returned from the extractor if it would like to have Refresh Thumbnail available


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0068_v0_0_s_ifspec;

#ifndef __IExtractImage_INTERFACE_DEFINED__
#define __IExtractImage_INTERFACE_DEFINED__

/* interface IExtractImage */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExtractImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB2E617C-0920-11d1-9A0B-00C04FC2D6C1")
    IExtractImage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszPathBuffer,
            /* [in] */ DWORD cch,
            /* [unique][out][in] */ __RPC__inout_opt DWORD *pdwPriority,
            /* [in] */ __RPC__in const SIZE *prgSize,
            /* [in] */ DWORD dwRecClrDepth,
            /* [out][in] */ __RPC__inout DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Extract( 
            /* [out] */ __RPC__deref_out_opt HBITMAP *phBmpThumbnail) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtractImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExtractImage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExtractImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExtractImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            __RPC__in IExtractImage * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszPathBuffer,
            /* [in] */ DWORD cch,
            /* [unique][out][in] */ __RPC__inout_opt DWORD *pdwPriority,
            /* [in] */ __RPC__in const SIZE *prgSize,
            /* [in] */ DWORD dwRecClrDepth,
            /* [out][in] */ __RPC__inout DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Extract )( 
            __RPC__in IExtractImage * This,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phBmpThumbnail);
        
        END_INTERFACE
    } IExtractImageVtbl;

    interface IExtractImage
    {
        CONST_VTBL struct IExtractImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtractImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtractImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtractImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtractImage_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags)	\
    ( (This)->lpVtbl -> GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) ) 

#define IExtractImage_Extract(This,phBmpThumbnail)	\
    ( (This)->lpVtbl -> Extract(This,phBmpThumbnail) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtractImage_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0069 */
/* [local] */ 

typedef IExtractImage *LPEXTRACTIMAGE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0069_v0_0_s_ifspec;

#ifndef __IExtractImage2_INTERFACE_DEFINED__
#define __IExtractImage2_INTERFACE_DEFINED__

/* interface IExtractImage2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExtractImage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("953BB1EE-93B4-11d1-98A3-00C04FB687DA")
    IExtractImage2 : public IExtractImage
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDateStamp( 
            /* [out] */ __RPC__out FILETIME *pDateStamp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtractImage2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExtractImage2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExtractImage2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExtractImage2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            __RPC__in IExtractImage2 * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszPathBuffer,
            /* [in] */ DWORD cch,
            /* [unique][out][in] */ __RPC__inout_opt DWORD *pdwPriority,
            /* [in] */ __RPC__in const SIZE *prgSize,
            /* [in] */ DWORD dwRecClrDepth,
            /* [out][in] */ __RPC__inout DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Extract )( 
            __RPC__in IExtractImage2 * This,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phBmpThumbnail);
        
        HRESULT ( STDMETHODCALLTYPE *GetDateStamp )( 
            __RPC__in IExtractImage2 * This,
            /* [out] */ __RPC__out FILETIME *pDateStamp);
        
        END_INTERFACE
    } IExtractImage2Vtbl;

    interface IExtractImage2
    {
        CONST_VTBL struct IExtractImage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtractImage2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtractImage2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtractImage2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtractImage2_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags)	\
    ( (This)->lpVtbl -> GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) ) 

#define IExtractImage2_Extract(This,phBmpThumbnail)	\
    ( (This)->lpVtbl -> Extract(This,phBmpThumbnail) ) 


#define IExtractImage2_GetDateStamp(This,pDateStamp)	\
    ( (This)->lpVtbl -> GetDateStamp(This,pDateStamp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtractImage2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0070 */
/* [local] */ 

typedef IExtractImage2 *LPEXTRACTIMAGE2;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0070_v0_0_s_ifspec;

#ifndef __IThumbnailHandlerFactory_INTERFACE_DEFINED__
#define __IThumbnailHandlerFactory_INTERFACE_DEFINED__

/* interface IThumbnailHandlerFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IThumbnailHandlerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e35b4b2e-00da-4bc1-9f13-38bc11f5d417")
    IThumbnailHandlerFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThumbnailHandler( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IThumbnailHandlerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IThumbnailHandlerFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IThumbnailHandlerFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IThumbnailHandlerFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailHandler )( 
            __RPC__in IThumbnailHandlerFactory * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IThumbnailHandlerFactoryVtbl;

    interface IThumbnailHandlerFactory
    {
        CONST_VTBL struct IThumbnailHandlerFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnailHandlerFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnailHandlerFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnailHandlerFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThumbnailHandlerFactory_GetThumbnailHandler(This,pidlChild,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> GetThumbnailHandler(This,pidlChild,pbc,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnailHandlerFactory_INTERFACE_DEFINED__ */


#ifndef __IParentAndItem_INTERFACE_DEFINED__
#define __IParentAndItem_INTERFACE_DEFINED__

/* interface IParentAndItem */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IParentAndItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b3a4b685-b685-4805-99d9-5dead2873236")
    IParentAndItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetParentAndItem( 
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlParent,
            /* [unique][in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetParentAndItem( 
            /* [annotation][out] */ 
            _Outptr_opt_  PIDLIST_ABSOLUTE *ppidlParent,
            /* [annotation][out] */ 
            _Outptr_opt_  IShellFolder **ppsf,
            /* [annotation][out] */ 
            _Outptr_opt_  PITEMID_CHILD *ppidlChild) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IParentAndItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IParentAndItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IParentAndItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IParentAndItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetParentAndItem )( 
            __RPC__in IParentAndItem * This,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlParent,
            /* [unique][in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetParentAndItem )( 
            IParentAndItem * This,
            /* [annotation][out] */ 
            _Outptr_opt_  PIDLIST_ABSOLUTE *ppidlParent,
            /* [annotation][out] */ 
            _Outptr_opt_  IShellFolder **ppsf,
            /* [annotation][out] */ 
            _Outptr_opt_  PITEMID_CHILD *ppidlChild);
        
        END_INTERFACE
    } IParentAndItemVtbl;

    interface IParentAndItem
    {
        CONST_VTBL struct IParentAndItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParentAndItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IParentAndItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IParentAndItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IParentAndItem_SetParentAndItem(This,pidlParent,psf,pidlChild)	\
    ( (This)->lpVtbl -> SetParentAndItem(This,pidlParent,psf,pidlChild) ) 

#define IParentAndItem_GetParentAndItem(This,ppidlParent,ppsf,ppidlChild)	\
    ( (This)->lpVtbl -> GetParentAndItem(This,ppidlParent,ppsf,ppidlChild) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IParentAndItem_RemoteGetParentAndItem_Proxy( 
    __RPC__in IParentAndItem * This,
    /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidlParent,
    /* [out] */ __RPC__deref_out_opt IShellFolder **ppsf,
    /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlChild);


void __RPC_STUB IParentAndItem_RemoteGetParentAndItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IParentAndItem_INTERFACE_DEFINED__ */


#ifndef __IDockingWindow_INTERFACE_DEFINED__
#define __IDockingWindow_INTERFACE_DEFINED__

/* interface IDockingWindow */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDockingWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("012dd920-7b26-11d0-8ca9-00a0c92dbfe8")
    IDockingWindow : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowDW( 
            /* [in] */ BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseDW( 
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResizeBorderDW( 
            /* [unique][in] */ __RPC__in_opt LPCRECT prcBorder,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDockingWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDockingWindow * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDockingWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDockingWindow * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            __RPC__in IDockingWindow * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            __RPC__in IDockingWindow * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *ShowDW )( 
            __RPC__in IDockingWindow * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *CloseDW )( 
            __RPC__in IDockingWindow * This,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ResizeBorderDW )( 
            __RPC__in IDockingWindow * This,
            /* [unique][in] */ __RPC__in_opt LPCRECT prcBorder,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved);
        
        END_INTERFACE
    } IDockingWindowVtbl;

    interface IDockingWindow
    {
        CONST_VTBL struct IDockingWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDockingWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDockingWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDockingWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDockingWindow_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDockingWindow_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDockingWindow_ShowDW(This,fShow)	\
    ( (This)->lpVtbl -> ShowDW(This,fShow) ) 

#define IDockingWindow_CloseDW(This,dwReserved)	\
    ( (This)->lpVtbl -> CloseDW(This,dwReserved) ) 

#define IDockingWindow_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)	\
    ( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDockingWindow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0073 */
/* [local] */ 

#define DBIM_MINSIZE    0x0001
#define DBIM_MAXSIZE    0x0002
#define DBIM_INTEGRAL   0x0004
#define DBIM_ACTUAL     0x0008
#define DBIM_TITLE      0x0010
#define DBIM_MODEFLAGS  0x0020
#define DBIM_BKCOLOR    0x0040
#include <pshpack8.h>
typedef struct DESKBANDINFO
    {
    DWORD dwMask;
    POINTL ptMinSize;
    POINTL ptMaxSize;
    POINTL ptIntegral;
    POINTL ptActual;
    WCHAR wszTitle[ 256 ];
    DWORD dwModeFlags;
    COLORREF crBkgnd;
    } 	DESKBANDINFO;

#include <poppack.h>
#define DBIMF_NORMAL            0x0000
#define DBIMF_FIXED             0x0001
#define DBIMF_FIXEDBMP          0x0004   // a fixed background bitmap (if supported)
#define DBIMF_VARIABLEHEIGHT    0x0008
#define DBIMF_UNDELETEABLE      0x0010
#define DBIMF_DEBOSSED          0x0020
#define DBIMF_BKCOLOR           0x0040
#define DBIMF_USECHEVRON        0x0080
#define DBIMF_BREAK             0x0100
#define DBIMF_ADDTOFRONT        0x0200
#define DBIMF_TOPALIGN          0x0400
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define DBIMF_NOGRIPPER         0x0800
#define DBIMF_ALWAYSGRIPPER     0x1000
#define DBIMF_NOMARGINS         0x2000
#endif  // NTDDI_VISTA
#define DBIF_VIEWMODE_NORMAL         0x0000
#define DBIF_VIEWMODE_VERTICAL       0x0001
#define DBIF_VIEWMODE_FLOATING       0x0002
#define DBIF_VIEWMODE_TRANSPARENT    0x0004

enum tagDESKBANDCID
    {
        DBID_BANDINFOCHANGED	= 0,
        DBID_SHOWONLY	= 1,
        DBID_MAXIMIZEBAND	= 2,
        DBID_PUSHCHEVRON	= 3,
        DBID_DELAYINIT	= 4,
        DBID_FINISHINIT	= 5,
        DBID_SETWINDOWTHEME	= 6,
        DBID_PERMITAUTOHIDE	= 7
    } ;
#define DBPC_SELECTFIRST    (DWORD)-1
#define DBPC_SELECTLAST     (DWORD)-2
#define CGID_DeskBand IID_IDeskBand


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0073_v0_0_s_ifspec;

#ifndef __IDeskBand_INTERFACE_DEFINED__
#define __IDeskBand_INTERFACE_DEFINED__

/* interface IDeskBand */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDeskBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB0FE172-1A3A-11D0-89B3-00A0C90A90AC")
    IDeskBand : public IDockingWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBandInfo( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out][in] */ __RPC__inout DESKBANDINFO *pdbi) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeskBandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDeskBand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDeskBand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDeskBand * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            __RPC__in IDeskBand * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            __RPC__in IDeskBand * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *ShowDW )( 
            __RPC__in IDeskBand * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *CloseDW )( 
            __RPC__in IDeskBand * This,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ResizeBorderDW )( 
            __RPC__in IDeskBand * This,
            /* [unique][in] */ __RPC__in_opt LPCRECT prcBorder,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandInfo )( 
            __RPC__in IDeskBand * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out][in] */ __RPC__inout DESKBANDINFO *pdbi);
        
        END_INTERFACE
    } IDeskBandVtbl;

    interface IDeskBand
    {
        CONST_VTBL struct IDeskBandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBand_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDeskBand_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDeskBand_ShowDW(This,fShow)	\
    ( (This)->lpVtbl -> ShowDW(This,fShow) ) 

#define IDeskBand_CloseDW(This,dwReserved)	\
    ( (This)->lpVtbl -> CloseDW(This,dwReserved) ) 

#define IDeskBand_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)	\
    ( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) ) 


#define IDeskBand_GetBandInfo(This,dwBandID,dwViewMode,pdbi)	\
    ( (This)->lpVtbl -> GetBandInfo(This,dwBandID,dwViewMode,pdbi) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0074 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0074_v0_0_s_ifspec;

#ifndef __IDeskBandInfo_INTERFACE_DEFINED__
#define __IDeskBandInfo_INTERFACE_DEFINED__

/* interface IDeskBandInfo */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDeskBandInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77E425FC-CBF9-4307-BA6A-BB5727745661")
    IDeskBandInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDefaultBandWidth( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out] */ __RPC__out int *pnWidth) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeskBandInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDeskBandInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDeskBandInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDeskBandInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultBandWidth )( 
            __RPC__in IDeskBandInfo * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out] */ __RPC__out int *pnWidth);
        
        END_INTERFACE
    } IDeskBandInfoVtbl;

    interface IDeskBandInfo
    {
        CONST_VTBL struct IDeskBandInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBandInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBandInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBandInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBandInfo_GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth)	\
    ( (This)->lpVtbl -> GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBandInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0075 */
/* [local] */ 

#endif  // NTDDI_VISTA


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0075_v0_0_s_ifspec;

#ifndef __ITaskbarList_INTERFACE_DEFINED__
#define __ITaskbarList_INTERFACE_DEFINED__

/* interface ITaskbarList */
/* [object][uuid] */ 


EXTERN_C const IID IID_ITaskbarList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56FDF342-FD6D-11d0-958A-006097C9A090")
    ITaskbarList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HrInit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTab( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteTab( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateTab( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetActiveAlt( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITaskbarListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITaskbarList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITaskbarList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITaskbarList * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrInit )( 
            __RPC__in ITaskbarList * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTab )( 
            __RPC__in ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTab )( 
            __RPC__in ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateTab )( 
            __RPC__in ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveAlt )( 
            __RPC__in ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        END_INTERFACE
    } ITaskbarListVtbl;

    interface ITaskbarList
    {
        CONST_VTBL struct ITaskbarListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskbarList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskbarList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskbarList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskbarList_HrInit(This)	\
    ( (This)->lpVtbl -> HrInit(This) ) 

#define ITaskbarList_AddTab(This,hwnd)	\
    ( (This)->lpVtbl -> AddTab(This,hwnd) ) 

#define ITaskbarList_DeleteTab(This,hwnd)	\
    ( (This)->lpVtbl -> DeleteTab(This,hwnd) ) 

#define ITaskbarList_ActivateTab(This,hwnd)	\
    ( (This)->lpVtbl -> ActivateTab(This,hwnd) ) 

#define ITaskbarList_SetActiveAlt(This,hwnd)	\
    ( (This)->lpVtbl -> SetActiveAlt(This,hwnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskbarList_INTERFACE_DEFINED__ */


#ifndef __ITaskbarList2_INTERFACE_DEFINED__
#define __ITaskbarList2_INTERFACE_DEFINED__

/* interface ITaskbarList2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ITaskbarList2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("602D4995-B13A-429b-A66E-1935E44F4317")
    ITaskbarList2 : public ITaskbarList
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MarkFullscreenWindow( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ BOOL fFullscreen) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITaskbarList2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITaskbarList2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITaskbarList2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITaskbarList2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrInit )( 
            __RPC__in ITaskbarList2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTab )( 
            __RPC__in ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTab )( 
            __RPC__in ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateTab )( 
            __RPC__in ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveAlt )( 
            __RPC__in ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *MarkFullscreenWindow )( 
            __RPC__in ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ BOOL fFullscreen);
        
        END_INTERFACE
    } ITaskbarList2Vtbl;

    interface ITaskbarList2
    {
        CONST_VTBL struct ITaskbarList2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskbarList2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskbarList2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskbarList2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskbarList2_HrInit(This)	\
    ( (This)->lpVtbl -> HrInit(This) ) 

#define ITaskbarList2_AddTab(This,hwnd)	\
    ( (This)->lpVtbl -> AddTab(This,hwnd) ) 

#define ITaskbarList2_DeleteTab(This,hwnd)	\
    ( (This)->lpVtbl -> DeleteTab(This,hwnd) ) 

#define ITaskbarList2_ActivateTab(This,hwnd)	\
    ( (This)->lpVtbl -> ActivateTab(This,hwnd) ) 

#define ITaskbarList2_SetActiveAlt(This,hwnd)	\
    ( (This)->lpVtbl -> SetActiveAlt(This,hwnd) ) 


#define ITaskbarList2_MarkFullscreenWindow(This,hwnd,fFullscreen)	\
    ( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskbarList2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0077 */
/* [local] */ 

#ifdef MIDL_PASS
typedef IUnknown *HIMAGELIST;

#endif
typedef /* [v1_enum] */ 
enum THUMBBUTTONFLAGS
    {
        THBF_ENABLED	= 0,
        THBF_DISABLED	= 0x1,
        THBF_DISMISSONCLICK	= 0x2,
        THBF_NOBACKGROUND	= 0x4,
        THBF_HIDDEN	= 0x8,
        THBF_NONINTERACTIVE	= 0x10
    } 	THUMBBUTTONFLAGS;

DEFINE_ENUM_FLAG_OPERATORS(THUMBBUTTONFLAGS)
typedef /* [v1_enum] */ 
enum THUMBBUTTONMASK
    {
        THB_BITMAP	= 0x1,
        THB_ICON	= 0x2,
        THB_TOOLTIP	= 0x4,
        THB_FLAGS	= 0x8
    } 	THUMBBUTTONMASK;

DEFINE_ENUM_FLAG_OPERATORS(THUMBBUTTONMASK)
#include <pshpack8.h>
typedef struct THUMBBUTTON
    {
    THUMBBUTTONMASK dwMask;
    UINT iId;
    UINT iBitmap;
    HICON hIcon;
    WCHAR szTip[ 260 ];
    THUMBBUTTONFLAGS dwFlags;
    } 	THUMBBUTTON;

typedef struct THUMBBUTTON *LPTHUMBBUTTON;

#include <poppack.h>
#define THBN_CLICKED        0x1800


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0077_v0_0_s_ifspec;

#ifndef __ITaskbarList3_INTERFACE_DEFINED__
#define __ITaskbarList3_INTERFACE_DEFINED__

/* interface ITaskbarList3 */
/* [object][uuid] */ 

typedef /* [v1_enum] */ 
enum TBPFLAG
    {
        TBPF_NOPROGRESS	= 0,
        TBPF_INDETERMINATE	= 0x1,
        TBPF_NORMAL	= 0x2,
        TBPF_ERROR	= 0x4,
        TBPF_PAUSED	= 0x8
    } 	TBPFLAG;

DEFINE_ENUM_FLAG_OPERATORS(TBPFLAG)

EXTERN_C const IID IID_ITaskbarList3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ea1afb91-9e28-4b86-90e9-9e9f8a5eefaf")
    ITaskbarList3 : public ITaskbarList2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProgressValue( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ ULONGLONG ullCompleted,
            /* [in] */ ULONGLONG ullTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressState( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ TBPFLAG tbpFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterTab( 
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndMDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterTab( 
            /* [in] */ __RPC__in HWND hwndTab) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTabOrder( 
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndInsertBefore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTabActive( 
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndMDI,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThumbBarAddButtons( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ UINT cButtons,
            /* [size_is][in] */ __RPC__in_ecount_full(cButtons) LPTHUMBBUTTON pButton) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThumbBarUpdateButtons( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ UINT cButtons,
            /* [size_is][in] */ __RPC__in_ecount_full(cButtons) LPTHUMBBUTTON pButton) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThumbBarSetImageList( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in_opt HIMAGELIST himl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOverlayIcon( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThumbnailTooltip( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThumbnailClip( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in RECT *prcClip) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITaskbarList3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITaskbarList3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITaskbarList3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrInit )( 
            __RPC__in ITaskbarList3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTab )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTab )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateTab )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveAlt )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *MarkFullscreenWindow )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ BOOL fFullscreen);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressValue )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ ULONGLONG ullCompleted,
            /* [in] */ ULONGLONG ullTotal);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressState )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ TBPFLAG tbpFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterTab )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndMDI);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterTab )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwndTab);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabOrder )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndInsertBefore);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabActive )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndMDI,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ThumbBarAddButtons )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ UINT cButtons,
            /* [size_is][in] */ __RPC__in_ecount_full(cButtons) LPTHUMBBUTTON pButton);
        
        HRESULT ( STDMETHODCALLTYPE *ThumbBarUpdateButtons )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ UINT cButtons,
            /* [size_is][in] */ __RPC__in_ecount_full(cButtons) LPTHUMBBUTTON pButton);
        
        HRESULT ( STDMETHODCALLTYPE *ThumbBarSetImageList )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in_opt HIMAGELIST himl);
        
        HRESULT ( STDMETHODCALLTYPE *SetOverlayIcon )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailTooltip )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTip);
        
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailClip )( 
            __RPC__in ITaskbarList3 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in RECT *prcClip);
        
        END_INTERFACE
    } ITaskbarList3Vtbl;

    interface ITaskbarList3
    {
        CONST_VTBL struct ITaskbarList3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskbarList3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskbarList3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskbarList3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskbarList3_HrInit(This)	\
    ( (This)->lpVtbl -> HrInit(This) ) 

#define ITaskbarList3_AddTab(This,hwnd)	\
    ( (This)->lpVtbl -> AddTab(This,hwnd) ) 

#define ITaskbarList3_DeleteTab(This,hwnd)	\
    ( (This)->lpVtbl -> DeleteTab(This,hwnd) ) 

#define ITaskbarList3_ActivateTab(This,hwnd)	\
    ( (This)->lpVtbl -> ActivateTab(This,hwnd) ) 

#define ITaskbarList3_SetActiveAlt(This,hwnd)	\
    ( (This)->lpVtbl -> SetActiveAlt(This,hwnd) ) 


#define ITaskbarList3_MarkFullscreenWindow(This,hwnd,fFullscreen)	\
    ( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) ) 


#define ITaskbarList3_SetProgressValue(This,hwnd,ullCompleted,ullTotal)	\
    ( (This)->lpVtbl -> SetProgressValue(This,hwnd,ullCompleted,ullTotal) ) 

#define ITaskbarList3_SetProgressState(This,hwnd,tbpFlags)	\
    ( (This)->lpVtbl -> SetProgressState(This,hwnd,tbpFlags) ) 

#define ITaskbarList3_RegisterTab(This,hwndTab,hwndMDI)	\
    ( (This)->lpVtbl -> RegisterTab(This,hwndTab,hwndMDI) ) 

#define ITaskbarList3_UnregisterTab(This,hwndTab)	\
    ( (This)->lpVtbl -> UnregisterTab(This,hwndTab) ) 

#define ITaskbarList3_SetTabOrder(This,hwndTab,hwndInsertBefore)	\
    ( (This)->lpVtbl -> SetTabOrder(This,hwndTab,hwndInsertBefore) ) 

#define ITaskbarList3_SetTabActive(This,hwndTab,hwndMDI,dwReserved)	\
    ( (This)->lpVtbl -> SetTabActive(This,hwndTab,hwndMDI,dwReserved) ) 

#define ITaskbarList3_ThumbBarAddButtons(This,hwnd,cButtons,pButton)	\
    ( (This)->lpVtbl -> ThumbBarAddButtons(This,hwnd,cButtons,pButton) ) 

#define ITaskbarList3_ThumbBarUpdateButtons(This,hwnd,cButtons,pButton)	\
    ( (This)->lpVtbl -> ThumbBarUpdateButtons(This,hwnd,cButtons,pButton) ) 

#define ITaskbarList3_ThumbBarSetImageList(This,hwnd,himl)	\
    ( (This)->lpVtbl -> ThumbBarSetImageList(This,hwnd,himl) ) 

#define ITaskbarList3_SetOverlayIcon(This,hwnd,hIcon,pszDescription)	\
    ( (This)->lpVtbl -> SetOverlayIcon(This,hwnd,hIcon,pszDescription) ) 

#define ITaskbarList3_SetThumbnailTooltip(This,hwnd,pszTip)	\
    ( (This)->lpVtbl -> SetThumbnailTooltip(This,hwnd,pszTip) ) 

#define ITaskbarList3_SetThumbnailClip(This,hwnd,prcClip)	\
    ( (This)->lpVtbl -> SetThumbnailClip(This,hwnd,prcClip) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskbarList3_INTERFACE_DEFINED__ */


#ifndef __ITaskbarList4_INTERFACE_DEFINED__
#define __ITaskbarList4_INTERFACE_DEFINED__

/* interface ITaskbarList4 */
/* [object][uuid] */ 

typedef /* [v1_enum] */ 
enum STPFLAG
    {
        STPF_NONE	= 0,
        STPF_USEAPPTHUMBNAILALWAYS	= 0x1,
        STPF_USEAPPTHUMBNAILWHENACTIVE	= 0x2,
        STPF_USEAPPPEEKALWAYS	= 0x4,
        STPF_USEAPPPEEKWHENACTIVE	= 0x8
    } 	STPFLAG;

DEFINE_ENUM_FLAG_OPERATORS(STPFLAG)

EXTERN_C const IID IID_ITaskbarList4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c43dc798-95d1-4bea-9030-bb99e2983a1a")
    ITaskbarList4 : public ITaskbarList3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTabProperties( 
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ STPFLAG stpFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITaskbarList4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITaskbarList4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITaskbarList4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrInit )( 
            __RPC__in ITaskbarList4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTab )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTab )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateTab )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveAlt )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *MarkFullscreenWindow )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ BOOL fFullscreen);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressValue )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ ULONGLONG ullCompleted,
            /* [in] */ ULONGLONG ullTotal);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressState )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ TBPFLAG tbpFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterTab )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndMDI);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterTab )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwndTab);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabOrder )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndInsertBefore);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabActive )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ __RPC__in HWND hwndMDI,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ThumbBarAddButtons )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ UINT cButtons,
            /* [size_is][in] */ __RPC__in_ecount_full(cButtons) LPTHUMBBUTTON pButton);
        
        HRESULT ( STDMETHODCALLTYPE *ThumbBarUpdateButtons )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ UINT cButtons,
            /* [size_is][in] */ __RPC__in_ecount_full(cButtons) LPTHUMBBUTTON pButton);
        
        HRESULT ( STDMETHODCALLTYPE *ThumbBarSetImageList )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in_opt HIMAGELIST himl);
        
        HRESULT ( STDMETHODCALLTYPE *SetOverlayIcon )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailTooltip )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTip);
        
        HRESULT ( STDMETHODCALLTYPE *SetThumbnailClip )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in RECT *prcClip);
        
        HRESULT ( STDMETHODCALLTYPE *SetTabProperties )( 
            __RPC__in ITaskbarList4 * This,
            /* [in] */ __RPC__in HWND hwndTab,
            /* [in] */ STPFLAG stpFlags);
        
        END_INTERFACE
    } ITaskbarList4Vtbl;

    interface ITaskbarList4
    {
        CONST_VTBL struct ITaskbarList4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskbarList4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskbarList4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskbarList4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskbarList4_HrInit(This)	\
    ( (This)->lpVtbl -> HrInit(This) ) 

#define ITaskbarList4_AddTab(This,hwnd)	\
    ( (This)->lpVtbl -> AddTab(This,hwnd) ) 

#define ITaskbarList4_DeleteTab(This,hwnd)	\
    ( (This)->lpVtbl -> DeleteTab(This,hwnd) ) 

#define ITaskbarList4_ActivateTab(This,hwnd)	\
    ( (This)->lpVtbl -> ActivateTab(This,hwnd) ) 

#define ITaskbarList4_SetActiveAlt(This,hwnd)	\
    ( (This)->lpVtbl -> SetActiveAlt(This,hwnd) ) 


#define ITaskbarList4_MarkFullscreenWindow(This,hwnd,fFullscreen)	\
    ( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) ) 


#define ITaskbarList4_SetProgressValue(This,hwnd,ullCompleted,ullTotal)	\
    ( (This)->lpVtbl -> SetProgressValue(This,hwnd,ullCompleted,ullTotal) ) 

#define ITaskbarList4_SetProgressState(This,hwnd,tbpFlags)	\
    ( (This)->lpVtbl -> SetProgressState(This,hwnd,tbpFlags) ) 

#define ITaskbarList4_RegisterTab(This,hwndTab,hwndMDI)	\
    ( (This)->lpVtbl -> RegisterTab(This,hwndTab,hwndMDI) ) 

#define ITaskbarList4_UnregisterTab(This,hwndTab)	\
    ( (This)->lpVtbl -> UnregisterTab(This,hwndTab) ) 

#define ITaskbarList4_SetTabOrder(This,hwndTab,hwndInsertBefore)	\
    ( (This)->lpVtbl -> SetTabOrder(This,hwndTab,hwndInsertBefore) ) 

#define ITaskbarList4_SetTabActive(This,hwndTab,hwndMDI,dwReserved)	\
    ( (This)->lpVtbl -> SetTabActive(This,hwndTab,hwndMDI,dwReserved) ) 

#define ITaskbarList4_ThumbBarAddButtons(This,hwnd,cButtons,pButton)	\
    ( (This)->lpVtbl -> ThumbBarAddButtons(This,hwnd,cButtons,pButton) ) 

#define ITaskbarList4_ThumbBarUpdateButtons(This,hwnd,cButtons,pButton)	\
    ( (This)->lpVtbl -> ThumbBarUpdateButtons(This,hwnd,cButtons,pButton) ) 

#define ITaskbarList4_ThumbBarSetImageList(This,hwnd,himl)	\
    ( (This)->lpVtbl -> ThumbBarSetImageList(This,hwnd,himl) ) 

#define ITaskbarList4_SetOverlayIcon(This,hwnd,hIcon,pszDescription)	\
    ( (This)->lpVtbl -> SetOverlayIcon(This,hwnd,hIcon,pszDescription) ) 

#define ITaskbarList4_SetThumbnailTooltip(This,hwnd,pszTip)	\
    ( (This)->lpVtbl -> SetThumbnailTooltip(This,hwnd,pszTip) ) 

#define ITaskbarList4_SetThumbnailClip(This,hwnd,prcClip)	\
    ( (This)->lpVtbl -> SetThumbnailClip(This,hwnd,prcClip) ) 


#define ITaskbarList4_SetTabProperties(This,hwndTab,stpFlags)	\
    ( (This)->lpVtbl -> SetTabProperties(This,hwndTab,stpFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskbarList4_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0079 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0079_v0_0_s_ifspec;

#ifndef __IExplorerBrowserEvents_INTERFACE_DEFINED__
#define __IExplorerBrowserEvents_INTERFACE_DEFINED__

/* interface IExplorerBrowserEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IExplorerBrowserEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("361bbdc7-e6ee-4e13-be58-58e2240c810f")
    IExplorerBrowserEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnNavigationPending( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnViewCreated( 
            /* [in] */ __RPC__in_opt IShellView *psv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnNavigationComplete( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnNavigationFailed( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExplorerBrowserEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExplorerBrowserEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExplorerBrowserEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExplorerBrowserEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnNavigationPending )( 
            __RPC__in IExplorerBrowserEvents * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder);
        
        HRESULT ( STDMETHODCALLTYPE *OnViewCreated )( 
            __RPC__in IExplorerBrowserEvents * This,
            /* [in] */ __RPC__in_opt IShellView *psv);
        
        HRESULT ( STDMETHODCALLTYPE *OnNavigationComplete )( 
            __RPC__in IExplorerBrowserEvents * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder);
        
        HRESULT ( STDMETHODCALLTYPE *OnNavigationFailed )( 
            __RPC__in IExplorerBrowserEvents * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder);
        
        END_INTERFACE
    } IExplorerBrowserEventsVtbl;

    interface IExplorerBrowserEvents
    {
        CONST_VTBL struct IExplorerBrowserEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerBrowserEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerBrowserEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerBrowserEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerBrowserEvents_OnNavigationPending(This,pidlFolder)	\
    ( (This)->lpVtbl -> OnNavigationPending(This,pidlFolder) ) 

#define IExplorerBrowserEvents_OnViewCreated(This,psv)	\
    ( (This)->lpVtbl -> OnViewCreated(This,psv) ) 

#define IExplorerBrowserEvents_OnNavigationComplete(This,pidlFolder)	\
    ( (This)->lpVtbl -> OnNavigationComplete(This,pidlFolder) ) 

#define IExplorerBrowserEvents_OnNavigationFailed(This,pidlFolder)	\
    ( (This)->lpVtbl -> OnNavigationFailed(This,pidlFolder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerBrowserEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0080 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum EXPLORER_BROWSER_OPTIONS
    {
        EBO_NONE	= 0,
        EBO_NAVIGATEONCE	= 0x1,
        EBO_SHOWFRAMES	= 0x2,
        EBO_ALWAYSNAVIGATE	= 0x4,
        EBO_NOTRAVELLOG	= 0x8,
        EBO_NOWRAPPERWINDOW	= 0x10,
        EBO_HTMLSHAREPOINTVIEW	= 0x20,
        EBO_NOBORDER	= 0x40,
        EBO_NOPERSISTVIEWSTATE	= 0x80
    } 	EXPLORER_BROWSER_OPTIONS;

DEFINE_ENUM_FLAG_OPERATORS(EXPLORER_BROWSER_OPTIONS)
typedef /* [v1_enum] */ 
enum EXPLORER_BROWSER_FILL_FLAGS
    {
        EBF_NONE	= 0,
        EBF_SELECTFROMDATAOBJECT	= 0x100,
        EBF_NODROPTARGET	= 0x200
    } 	EXPLORER_BROWSER_FILL_FLAGS;

DEFINE_ENUM_FLAG_OPERATORS(EXPLORER_BROWSER_FILL_FLAGS)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0080_v0_0_s_ifspec;

#ifndef __IExplorerBrowser_INTERFACE_DEFINED__
#define __IExplorerBrowser_INTERFACE_DEFINED__

/* interface IExplorerBrowser */
/* [object][uuid] */ 


EXTERN_C const IID IID_IExplorerBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dfd3b6b5-c10c-4be9-85f6-a66969f402f6")
    IExplorerBrowser : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [annotation][in] */ 
            _In_  HWND hwndParent,
            /* [annotation][in] */ 
            _In_  const RECT *prc,
            /* [annotation][unique][in] */ 
            _In_opt_  const FOLDERSETTINGS *pfs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetRect( 
            /* [annotation][unique][out][in] */ 
            _Inout_opt_  HDWP *phdwp,
            /* [annotation][in] */ 
            _In_  RECT rcBrowser) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPropertyBag( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszPropertyBag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEmptyText( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszEmptyText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderSettings( 
            /* [in] */ __RPC__in const FOLDERSETTINGS *pfs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IExplorerBrowserEvents *psbe,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptions( 
            /* [in] */ EXPLORER_BROWSER_OPTIONS dwFlag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [out] */ __RPC__out EXPLORER_BROWSER_OPTIONS *pdwFlag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrowseToIDList( 
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrowseToObject( 
            /* [in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FillFromObject( 
            /* [unique][in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ EXPLORER_BROWSER_FILL_FLAGS dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentView( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExplorerBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExplorerBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExplorerBrowser * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IExplorerBrowser * This,
            /* [annotation][in] */ 
            _In_  HWND hwndParent,
            /* [annotation][in] */ 
            _In_  const RECT *prc,
            /* [annotation][unique][in] */ 
            _In_opt_  const FOLDERSETTINGS *pfs);
        
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            __RPC__in IExplorerBrowser * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            IExplorerBrowser * This,
            /* [annotation][unique][out][in] */ 
            _Inout_opt_  HDWP *phdwp,
            /* [annotation][in] */ 
            _In_  RECT rcBrowser);
        
        HRESULT ( STDMETHODCALLTYPE *SetPropertyBag )( 
            __RPC__in IExplorerBrowser * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPropertyBag);
        
        HRESULT ( STDMETHODCALLTYPE *SetEmptyText )( 
            __RPC__in IExplorerBrowser * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszEmptyText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderSettings )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ __RPC__in const FOLDERSETTINGS *pfs);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ __RPC__in_opt IExplorerBrowserEvents *psbe,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ EXPLORER_BROWSER_OPTIONS dwFlag);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            __RPC__in IExplorerBrowser * This,
            /* [out] */ __RPC__out EXPLORER_BROWSER_OPTIONS *pdwFlag);
        
        HRESULT ( STDMETHODCALLTYPE *BrowseToIDList )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *BrowseToObject )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *FillFromObject )( 
            __RPC__in IExplorerBrowser * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ EXPLORER_BROWSER_FILL_FLAGS dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            __RPC__in IExplorerBrowser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentView )( 
            __RPC__in IExplorerBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IExplorerBrowserVtbl;

    interface IExplorerBrowser
    {
        CONST_VTBL struct IExplorerBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerBrowser_Initialize(This,hwndParent,prc,pfs)	\
    ( (This)->lpVtbl -> Initialize(This,hwndParent,prc,pfs) ) 

#define IExplorerBrowser_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IExplorerBrowser_SetRect(This,phdwp,rcBrowser)	\
    ( (This)->lpVtbl -> SetRect(This,phdwp,rcBrowser) ) 

#define IExplorerBrowser_SetPropertyBag(This,pszPropertyBag)	\
    ( (This)->lpVtbl -> SetPropertyBag(This,pszPropertyBag) ) 

#define IExplorerBrowser_SetEmptyText(This,pszEmptyText)	\
    ( (This)->lpVtbl -> SetEmptyText(This,pszEmptyText) ) 

#define IExplorerBrowser_SetFolderSettings(This,pfs)	\
    ( (This)->lpVtbl -> SetFolderSettings(This,pfs) ) 

#define IExplorerBrowser_Advise(This,psbe,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,psbe,pdwCookie) ) 

#define IExplorerBrowser_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IExplorerBrowser_SetOptions(This,dwFlag)	\
    ( (This)->lpVtbl -> SetOptions(This,dwFlag) ) 

#define IExplorerBrowser_GetOptions(This,pdwFlag)	\
    ( (This)->lpVtbl -> GetOptions(This,pdwFlag) ) 

#define IExplorerBrowser_BrowseToIDList(This,pidl,uFlags)	\
    ( (This)->lpVtbl -> BrowseToIDList(This,pidl,uFlags) ) 

#define IExplorerBrowser_BrowseToObject(This,punk,uFlags)	\
    ( (This)->lpVtbl -> BrowseToObject(This,punk,uFlags) ) 

#define IExplorerBrowser_FillFromObject(This,punk,dwFlags)	\
    ( (This)->lpVtbl -> FillFromObject(This,punk,dwFlags) ) 

#define IExplorerBrowser_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IExplorerBrowser_GetCurrentView(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetCurrentView(This,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerBrowser_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0081 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0081_v0_0_s_ifspec;

#ifndef __IEnumObjects_INTERFACE_DEFINED__
#define __IEnumObjects_INTERFACE_DEFINED__

/* interface IEnumObjects */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumObjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2c1c7e2e-2d0e-4059-831e-1e6f82335c2e")
    IEnumObjects : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  void **rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumObjects **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumObjectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumObjects * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumObjects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumObjects * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumObjects * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  void **rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumObjects * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumObjects * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumObjects * This,
            /* [out] */ __RPC__deref_out_opt IEnumObjects **ppenum);
        
        END_INTERFACE
    } IEnumObjectsVtbl;

    interface IEnumObjects
    {
        CONST_VTBL struct IEnumObjectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumObjects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumObjects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumObjects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumObjects_Next(This,celt,riid,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,riid,rgelt,pceltFetched) ) 

#define IEnumObjects_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumObjects_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumObjects_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumObjects_RemoteNext_Proxy( 
    __RPC__in IEnumObjects * This,
    /* [in] */ ULONG celt,
    /* [in] */ __RPC__in REFIID riid,
    /* [iid_is][length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) void **rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumObjects_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumObjects_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0082 */
/* [local] */ 

/* [v1_enum] */ 
enum _OPPROGDLGF
    {
        OPPROGDLG_DEFAULT	= 0,
        OPPROGDLG_ENABLEPAUSE	= 0x80,
        OPPROGDLG_ALLOWUNDO	= 0x100,
        OPPROGDLG_DONTDISPLAYSOURCEPATH	= 0x200,
        OPPROGDLG_DONTDISPLAYDESTPATH	= 0x400,
        OPPROGDLG_NOMULTIDAYESTIMATES	= 0x800,
        OPPROGDLG_DONTDISPLAYLOCATIONS	= 0x1000
    } ;
typedef DWORD OPPROGDLGF;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0082_v0_0_s_ifspec;

#ifndef __IOperationsProgressDialog_INTERFACE_DEFINED__
#define __IOperationsProgressDialog_INTERFACE_DEFINED__

/* interface IOperationsProgressDialog */
/* [unique][object][uuid] */ 

/* [v1_enum] */ 
enum _PDMODE
    {
        PDM_DEFAULT	= 0,
        PDM_RUN	= 0x1,
        PDM_PREFLIGHT	= 0x2,
        PDM_UNDOING	= 0x4,
        PDM_ERRORSBLOCKING	= 0x8,
        PDM_INDETERMINATE	= 0x10
    } ;
typedef DWORD PDMODE;

typedef /* [v1_enum] */ 
enum PDOPSTATUS
    {
        PDOPS_RUNNING	= 1,
        PDOPS_PAUSED	= 2,
        PDOPS_CANCELLED	= 3,
        PDOPS_STOPPED	= 4,
        PDOPS_ERRORS	= 5
    } 	PDOPSTATUS;


EXTERN_C const IID IID_IOperationsProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C9FB851-E5C9-43EB-A370-F0677B13874C")
    IOperationsProgressDialog : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartProgressDialog( 
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ OPPROGDLGF flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopProgressDialog( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOperation( 
            /* [in] */ SPACTION action) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ PDMODE mode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ ULONGLONG ullPointsCurrent,
            /* [in] */ ULONGLONG ullPointsTotal,
            /* [in] */ ULONGLONG ullSizeCurrent,
            /* [in] */ ULONGLONG ullSizeTotal,
            /* [in] */ ULONGLONG ullItemsCurrent,
            /* [in] */ ULONGLONG ullItemsTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateLocations( 
            /* [unique][in] */ __RPC__in_opt IShellItem *psiSource,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiTarget,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PauseTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMilliseconds( 
            /* [out] */ __RPC__out ULONGLONG *pullElapsed,
            /* [out] */ __RPC__out ULONGLONG *pullRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOperationStatus( 
            /* [out] */ __RPC__out PDOPSTATUS *popstatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOperationsProgressDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IOperationsProgressDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartProgressDialog )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ OPPROGDLGF flags);
        
        HRESULT ( STDMETHODCALLTYPE *StopProgressDialog )( 
            __RPC__in IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetOperation )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [in] */ SPACTION action);
        
        HRESULT ( STDMETHODCALLTYPE *SetMode )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [in] */ PDMODE mode);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [in] */ ULONGLONG ullPointsCurrent,
            /* [in] */ ULONGLONG ullPointsTotal,
            /* [in] */ ULONGLONG ullSizeCurrent,
            /* [in] */ ULONGLONG ullSizeTotal,
            /* [in] */ ULONGLONG ullItemsCurrent,
            /* [in] */ ULONGLONG ullItemsTotal);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateLocations )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiSource,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiTarget,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiItem);
        
        HRESULT ( STDMETHODCALLTYPE *ResetTimer )( 
            __RPC__in IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *PauseTimer )( 
            __RPC__in IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResumeTimer )( 
            __RPC__in IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMilliseconds )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [out] */ __RPC__out ULONGLONG *pullElapsed,
            /* [out] */ __RPC__out ULONGLONG *pullRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetOperationStatus )( 
            __RPC__in IOperationsProgressDialog * This,
            /* [out] */ __RPC__out PDOPSTATUS *popstatus);
        
        END_INTERFACE
    } IOperationsProgressDialogVtbl;

    interface IOperationsProgressDialog
    {
        CONST_VTBL struct IOperationsProgressDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOperationsProgressDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOperationsProgressDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOperationsProgressDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOperationsProgressDialog_StartProgressDialog(This,hwndOwner,flags)	\
    ( (This)->lpVtbl -> StartProgressDialog(This,hwndOwner,flags) ) 

#define IOperationsProgressDialog_StopProgressDialog(This)	\
    ( (This)->lpVtbl -> StopProgressDialog(This) ) 

#define IOperationsProgressDialog_SetOperation(This,action)	\
    ( (This)->lpVtbl -> SetOperation(This,action) ) 

#define IOperationsProgressDialog_SetMode(This,mode)	\
    ( (This)->lpVtbl -> SetMode(This,mode) ) 

#define IOperationsProgressDialog_UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal)	\
    ( (This)->lpVtbl -> UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal) ) 

#define IOperationsProgressDialog_UpdateLocations(This,psiSource,psiTarget,psiItem)	\
    ( (This)->lpVtbl -> UpdateLocations(This,psiSource,psiTarget,psiItem) ) 

#define IOperationsProgressDialog_ResetTimer(This)	\
    ( (This)->lpVtbl -> ResetTimer(This) ) 

#define IOperationsProgressDialog_PauseTimer(This)	\
    ( (This)->lpVtbl -> PauseTimer(This) ) 

#define IOperationsProgressDialog_ResumeTimer(This)	\
    ( (This)->lpVtbl -> ResumeTimer(This) ) 

#define IOperationsProgressDialog_GetMilliseconds(This,pullElapsed,pullRemaining)	\
    ( (This)->lpVtbl -> GetMilliseconds(This,pullElapsed,pullRemaining) ) 

#define IOperationsProgressDialog_GetOperationStatus(This,popstatus)	\
    ( (This)->lpVtbl -> GetOperationStatus(This,popstatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOperationsProgressDialog_INTERFACE_DEFINED__ */


#ifndef __IIOCancelInformation_INTERFACE_DEFINED__
#define __IIOCancelInformation_INTERFACE_DEFINED__

/* interface IIOCancelInformation */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IIOCancelInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5b0bf81-8cb5-4b1b-9449-1a159e0c733c")
    IIOCancelInformation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCancelInformation( 
            /* [in] */ DWORD dwThreadID,
            /* [in] */ UINT uMsgCancel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCancelInformation( 
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwThreadID,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puMsgCancel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIOCancelInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIOCancelInformation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIOCancelInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIOCancelInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCancelInformation )( 
            IIOCancelInformation * This,
            /* [in] */ DWORD dwThreadID,
            /* [in] */ UINT uMsgCancel);
        
        HRESULT ( STDMETHODCALLTYPE *GetCancelInformation )( 
            IIOCancelInformation * This,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwThreadID,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puMsgCancel);
        
        END_INTERFACE
    } IIOCancelInformationVtbl;

    interface IIOCancelInformation
    {
        CONST_VTBL struct IIOCancelInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIOCancelInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIOCancelInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIOCancelInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIOCancelInformation_SetCancelInformation(This,dwThreadID,uMsgCancel)	\
    ( (This)->lpVtbl -> SetCancelInformation(This,dwThreadID,uMsgCancel) ) 

#define IIOCancelInformation_GetCancelInformation(This,pdwThreadID,puMsgCancel)	\
    ( (This)->lpVtbl -> GetCancelInformation(This,pdwThreadID,puMsgCancel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIOCancelInformation_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0084 */
/* [local] */ 

#define FOFX_NOSKIPJUNCTIONS         0x00010000  // Don't avoid binding to junctions (like Task folder, Recycle-Bin)
#define FOFX_PREFERHARDLINK          0x00020000  // Create hard link if possible
#define FOFX_SHOWELEVATIONPROMPT     0x00040000  // Show elevation prompts when error UI is disabled (use with FOF_NOERRORUI)
#define FOFX_RECYCLEONDELETE         0x00080000  // Recycle when deleting, rather than permanently deleting
#define FOFX_EARLYFAILURE            0x00100000  // Fail operation as soon as a single error occurs rather than trying to process other items (applies only when using FOF_NOERRORUI)
#define FOFX_PRESERVEFILEEXTENSIONS  0x00200000  // Rename collisions preserve file extns (use with FOF_RENAMEONCOLLISION)
#define FOFX_KEEPNEWERFILE           0x00400000  // Keep newer file on naming conflicts
#define FOFX_NOCOPYHOOKS             0x00800000  // Don't use copy hooks
#define FOFX_NOMINIMIZEBOX           0x01000000  // Don't allow minimizing the progress dialog
#define FOFX_MOVEACLSACROSSVOLUMES   0x02000000  // Copy security information when performing a cross-volume move operation
#define FOFX_DONTDISPLAYSOURCEPATH   0x04000000  // Don't display the path of source file in progress dialog
#define FOFX_DONTDISPLAYDESTPATH     0x08000000  // Don't display the path of destination file in progress dialog
#define FOFX_REQUIREELEVATION        0x10000000  // User expects the elevation; don't show a dialog to confirm
#define FOFX_ADDUNDORECORD           0x20000000  // This is a user-invoked operation, and should be placed on the undo stack.  This flag is preferred to FOF_ALLOWUNDO
#define FOFX_COPYASDOWNLOAD          0x40000000  // Show Downloading instead of Copying
#define FOFX_DONTDISPLAYLOCATIONS    0x80000000  // Hides the locations line in the progress dialog


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0084_v0_0_s_ifspec;

#ifndef __IFileOperation_INTERFACE_DEFINED__
#define __IFileOperation_INTERFACE_DEFINED__

/* interface IFileOperation */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("947aab5f-0a5c-4c13-b4d6-4bf7836fc9f8")
    IFileOperation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IFileOperationProgressSink *pfops,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOperationFlags( 
            /* [in] */ DWORD dwOperationFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressMessage( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressDialog( 
            /* [in] */ __RPC__in_opt IOperationsProgressDialog *popd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperties( 
            /* [in] */ __RPC__in_opt IPropertyChangeArray *pproparray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOwnerWindow( 
            /* [in] */ __RPC__in HWND hwndOwner) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyPropertiesToItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyPropertiesToItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in_string LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameItems( 
            /* [in] */ __RPC__in_opt IUnknown *pUnkItems,
            /* [string][in] */ __RPC__in_string LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszCopyName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [in] */ DWORD dwFileAttributes,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTemplateName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformOperations( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAnyOperationsAborted( 
            /* [out] */ __RPC__out BOOL *pfAnyOperationsAborted) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IFileOperationProgressSink *pfops,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IFileOperation * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOperationFlags )( 
            __RPC__in IFileOperation * This,
            /* [in] */ DWORD dwOperationFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressMessage )( 
            __RPC__in IFileOperation * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressDialog )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IOperationsProgressDialog *popd);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IPropertyChangeArray *pproparray);
        
        HRESULT ( STDMETHODCALLTYPE *SetOwnerWindow )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in HWND hwndOwner);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyPropertiesToItem )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyPropertiesToItems )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItem )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in_string LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItems )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *pUnkItems,
            /* [string][in] */ __RPC__in_string LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItem )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItems )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CopyItem )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszCopyName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *CopyItems )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteItems )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems);
        
        HRESULT ( STDMETHODCALLTYPE *NewItem )( 
            __RPC__in IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [in] */ DWORD dwFileAttributes,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTemplateName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *PerformOperations )( 
            __RPC__in IFileOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAnyOperationsAborted )( 
            __RPC__in IFileOperation * This,
            /* [out] */ __RPC__out BOOL *pfAnyOperationsAborted);
        
        END_INTERFACE
    } IFileOperationVtbl;

    interface IFileOperation
    {
        CONST_VTBL struct IFileOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileOperation_Advise(This,pfops,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfops,pdwCookie) ) 

#define IFileOperation_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileOperation_SetOperationFlags(This,dwOperationFlags)	\
    ( (This)->lpVtbl -> SetOperationFlags(This,dwOperationFlags) ) 

#define IFileOperation_SetProgressMessage(This,pszMessage)	\
    ( (This)->lpVtbl -> SetProgressMessage(This,pszMessage) ) 

#define IFileOperation_SetProgressDialog(This,popd)	\
    ( (This)->lpVtbl -> SetProgressDialog(This,popd) ) 

#define IFileOperation_SetProperties(This,pproparray)	\
    ( (This)->lpVtbl -> SetProperties(This,pproparray) ) 

#define IFileOperation_SetOwnerWindow(This,hwndOwner)	\
    ( (This)->lpVtbl -> SetOwnerWindow(This,hwndOwner) ) 

#define IFileOperation_ApplyPropertiesToItem(This,psiItem)	\
    ( (This)->lpVtbl -> ApplyPropertiesToItem(This,psiItem) ) 

#define IFileOperation_ApplyPropertiesToItems(This,punkItems)	\
    ( (This)->lpVtbl -> ApplyPropertiesToItems(This,punkItems) ) 

#define IFileOperation_RenameItem(This,psiItem,pszNewName,pfopsItem)	\
    ( (This)->lpVtbl -> RenameItem(This,psiItem,pszNewName,pfopsItem) ) 

#define IFileOperation_RenameItems(This,pUnkItems,pszNewName)	\
    ( (This)->lpVtbl -> RenameItems(This,pUnkItems,pszNewName) ) 

#define IFileOperation_MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem)	\
    ( (This)->lpVtbl -> MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem) ) 

#define IFileOperation_MoveItems(This,punkItems,psiDestinationFolder)	\
    ( (This)->lpVtbl -> MoveItems(This,punkItems,psiDestinationFolder) ) 

#define IFileOperation_CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem)	\
    ( (This)->lpVtbl -> CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem) ) 

#define IFileOperation_CopyItems(This,punkItems,psiDestinationFolder)	\
    ( (This)->lpVtbl -> CopyItems(This,punkItems,psiDestinationFolder) ) 

#define IFileOperation_DeleteItem(This,psiItem,pfopsItem)	\
    ( (This)->lpVtbl -> DeleteItem(This,psiItem,pfopsItem) ) 

#define IFileOperation_DeleteItems(This,punkItems)	\
    ( (This)->lpVtbl -> DeleteItems(This,punkItems) ) 

#define IFileOperation_NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem)	\
    ( (This)->lpVtbl -> NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem) ) 

#define IFileOperation_PerformOperations(This)	\
    ( (This)->lpVtbl -> PerformOperations(This) ) 

#define IFileOperation_GetAnyOperationsAborted(This,pfAnyOperationsAborted)	\
    ( (This)->lpVtbl -> GetAnyOperationsAborted(This,pfAnyOperationsAborted) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileOperation_INTERFACE_DEFINED__ */


#ifndef __IObjectProvider_INTERFACE_DEFINED__
#define __IObjectProvider_INTERFACE_DEFINED__

/* interface IObjectProvider */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IObjectProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a6087428-3be3-4d73-b308-7c04a540bf1a")
    IObjectProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryObject( 
            /* [in] */ __RPC__in REFGUID guidObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryObject )( 
            __RPC__in IObjectProvider * This,
            /* [in] */ __RPC__in REFGUID guidObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut);
        
        END_INTERFACE
    } IObjectProviderVtbl;

    interface IObjectProvider
    {
        CONST_VTBL struct IObjectProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectProvider_QueryObject(This,guidObject,riid,ppvOut)	\
    ( (This)->lpVtbl -> QueryObject(This,guidObject,riid,ppvOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0086 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0086_v0_0_s_ifspec;

#ifndef __INamespaceWalkCB_INTERFACE_DEFINED__
#define __INamespaceWalkCB_INTERFACE_DEFINED__

/* interface INamespaceWalkCB */
/* [object][uuid] */ 


EXTERN_C const IID IID_INamespaceWalkCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d92995f8-cf5e-4a76-bf59-ead39ea2b97e")
    INamespaceWalkCB : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FoundItem( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnterFolder( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LeaveFolder( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeProgressDialog( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszTitle,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszCancel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INamespaceWalkCBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INamespaceWalkCB * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INamespaceWalkCB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INamespaceWalkCB * This);
        
        HRESULT ( STDMETHODCALLTYPE *FoundItem )( 
            __RPC__in INamespaceWalkCB * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *EnterFolder )( 
            __RPC__in INamespaceWalkCB * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveFolder )( 
            __RPC__in INamespaceWalkCB * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeProgressDialog )( 
            __RPC__in INamespaceWalkCB * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszTitle,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszCancel);
        
        END_INTERFACE
    } INamespaceWalkCBVtbl;

    interface INamespaceWalkCB
    {
        CONST_VTBL struct INamespaceWalkCBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamespaceWalkCB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamespaceWalkCB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamespaceWalkCB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamespaceWalkCB_FoundItem(This,psf,pidl)	\
    ( (This)->lpVtbl -> FoundItem(This,psf,pidl) ) 

#define INamespaceWalkCB_EnterFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> EnterFolder(This,psf,pidl) ) 

#define INamespaceWalkCB_LeaveFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> LeaveFolder(This,psf,pidl) ) 

#define INamespaceWalkCB_InitializeProgressDialog(This,ppszTitle,ppszCancel)	\
    ( (This)->lpVtbl -> InitializeProgressDialog(This,ppszTitle,ppszCancel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamespaceWalkCB_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0087 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0087_v0_0_s_ifspec;

#ifndef __INamespaceWalkCB2_INTERFACE_DEFINED__
#define __INamespaceWalkCB2_INTERFACE_DEFINED__

/* interface INamespaceWalkCB2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_INamespaceWalkCB2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7ac7492b-c38e-438a-87db-68737844ff70")
    INamespaceWalkCB2 : public INamespaceWalkCB
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE WalkComplete( 
            /* [in] */ HRESULT hr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INamespaceWalkCB2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INamespaceWalkCB2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INamespaceWalkCB2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *FoundItem )( 
            __RPC__in INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *EnterFolder )( 
            __RPC__in INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveFolder )( 
            __RPC__in INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeProgressDialog )( 
            __RPC__in INamespaceWalkCB2 * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszTitle,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszCancel);
        
        HRESULT ( STDMETHODCALLTYPE *WalkComplete )( 
            __RPC__in INamespaceWalkCB2 * This,
            /* [in] */ HRESULT hr);
        
        END_INTERFACE
    } INamespaceWalkCB2Vtbl;

    interface INamespaceWalkCB2
    {
        CONST_VTBL struct INamespaceWalkCB2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamespaceWalkCB2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamespaceWalkCB2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamespaceWalkCB2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamespaceWalkCB2_FoundItem(This,psf,pidl)	\
    ( (This)->lpVtbl -> FoundItem(This,psf,pidl) ) 

#define INamespaceWalkCB2_EnterFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> EnterFolder(This,psf,pidl) ) 

#define INamespaceWalkCB2_LeaveFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> LeaveFolder(This,psf,pidl) ) 

#define INamespaceWalkCB2_InitializeProgressDialog(This,ppszTitle,ppszCancel)	\
    ( (This)->lpVtbl -> InitializeProgressDialog(This,ppszTitle,ppszCancel) ) 


#define INamespaceWalkCB2_WalkComplete(This,hr)	\
    ( (This)->lpVtbl -> WalkComplete(This,hr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamespaceWalkCB2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0088 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0088_v0_0_s_ifspec;

#ifndef __INamespaceWalk_INTERFACE_DEFINED__
#define __INamespaceWalk_INTERFACE_DEFINED__

/* interface INamespaceWalk */
/* [object][uuid] */ 

typedef /* [v1_enum] */ 
enum NAMESPACEWALKFLAG
    {
        NSWF_DEFAULT	= 0,
        NSWF_NONE_IMPLIES_ALL	= 0x1,
        NSWF_ONE_IMPLIES_ALL	= 0x2,
        NSWF_DONT_TRAVERSE_LINKS	= 0x4,
        NSWF_DONT_ACCUMULATE_RESULT	= 0x8,
        NSWF_TRAVERSE_STREAM_JUNCTIONS	= 0x10,
        NSWF_FILESYSTEM_ONLY	= 0x20,
        NSWF_SHOW_PROGRESS	= 0x40,
        NSWF_FLAG_VIEWORDER	= 0x80,
        NSWF_IGNORE_AUTOPLAY_HIDA	= 0x100,
        NSWF_ASYNC	= 0x200,
        NSWF_DONT_RESOLVE_LINKS	= 0x400,
        NSWF_ACCUMULATE_FOLDERS	= 0x800,
        NSWF_DONT_SORT	= 0x1000,
        NSWF_USE_TRANSFER_MEDIUM	= 0x2000,
        NSWF_DONT_TRAVERSE_STREAM_JUNCTIONS	= 0x4000,
        NSWF_ANY_IMPLIES_ALL	= 0x8000
    } 	NAMESPACEWALKFLAG;

DEFINE_ENUM_FLAG_OPERATORS(NAMESPACEWALKFLAG)

EXTERN_C const IID IID_INamespaceWalk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57ced8a7-3f4a-432c-9350-30f24483f74f")
    INamespaceWalk : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Walk( 
            /* [in] */ __RPC__in_opt IUnknown *punkToWalk,
            /* [in] */ DWORD dwFlags,
            /* [in] */ int cDepth,
            /* [unique][in] */ __RPC__in_opt INamespaceWalkCB *pnswcb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDArrayResult( 
            /* [out] */ __RPC__out UINT *pcItems,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcItems) PIDLIST_ABSOLUTE **prgpidl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INamespaceWalkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INamespaceWalk * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INamespaceWalk * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INamespaceWalk * This);
        
        HRESULT ( STDMETHODCALLTYPE *Walk )( 
            __RPC__in INamespaceWalk * This,
            /* [in] */ __RPC__in_opt IUnknown *punkToWalk,
            /* [in] */ DWORD dwFlags,
            /* [in] */ int cDepth,
            /* [unique][in] */ __RPC__in_opt INamespaceWalkCB *pnswcb);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDArrayResult )( 
            __RPC__in INamespaceWalk * This,
            /* [out] */ __RPC__out UINT *pcItems,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcItems) PIDLIST_ABSOLUTE **prgpidl);
        
        END_INTERFACE
    } INamespaceWalkVtbl;

    interface INamespaceWalk
    {
        CONST_VTBL struct INamespaceWalkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamespaceWalk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamespaceWalk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamespaceWalk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamespaceWalk_Walk(This,punkToWalk,dwFlags,cDepth,pnswcb)	\
    ( (This)->lpVtbl -> Walk(This,punkToWalk,dwFlags,cDepth,pnswcb) ) 

#define INamespaceWalk_GetIDArrayResult(This,pcItems,prgpidl)	\
    ( (This)->lpVtbl -> GetIDArrayResult(This,pcItems,prgpidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamespaceWalk_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0089 */
/* [local] */ 

#endif  // NTDDI_WINXP || (_WIN32_IE >= _WIN32_IE_IE70)
__inline void FreeIDListArray(_In_reads_(cItems) PIDLIST_RELATIVE *ppidls, UINT cItems)
{                                        
     UINT i;                             
     for (i = 0; i < cItems; i++)        
     {                                   
         CoTaskMemFree(ppidls[i]);       
     }                                   
     CoTaskMemFree(ppidls);              
}                                        
#if defined(STRICT_TYPED_ITEMIDS) && defined(__cplusplus)
__inline void FreeIDListArrayFull(_In_reads_(cItems) PIDLIST_ABSOLUTE *ppidls, UINT cItems)
{                                        
     for (UINT i = 0; i < cItems; i++)   
     {                                   
         CoTaskMemFree(ppidls[i]);       
     }                                   
     CoTaskMemFree(ppidls);              
}                                        
__inline void FreeIDListArrayChild(_In_reads_(cItems) PITEMID_CHILD *ppidls, UINT cItems)
{                                        
     for (UINT i = 0; i < cItems; i++)   
     {                                   
         CoTaskMemFree(ppidls[i]);       
     }                                   
     CoTaskMemFree(ppidls);              
}                                        
#else //  defined(STRICT_TYPED_ITEMIDS) && defined(__cplusplus)
#define FreeIDListArrayFull FreeIDListArray
#define FreeIDListArrayChild FreeIDListArray
#endif //  defined(STRICT_TYPED_ITEMIDS) && defined(__cplusplus)
#include <pshpack8.h>
typedef struct tagBANDSITEINFO
    {
    DWORD dwMask;
    DWORD dwState;
    DWORD dwStyle;
    } 	BANDSITEINFO;

#include <poppack.h>

enum tagBANDSITECID
    {
        BSID_BANDADDED	= 0,
        BSID_BANDREMOVED	= ( BSID_BANDADDED + 1 ) 
    } ;
#define BSIM_STATE          0x00000001
#define BSIM_STYLE          0x00000002
#define BSSF_VISIBLE        0x00000001
#define BSSF_NOTITLE        0x00000002
#define BSSF_UNDELETEABLE   0x00001000
#define BSIS_AUTOGRIPPER               0x00000000
#define BSIS_NOGRIPPER                 0x00000001
#define BSIS_ALWAYSGRIPPER             0x00000002
#define BSIS_LEFTALIGN                 0x00000004
#define BSIS_SINGLECLICK               0x00000008
#define BSIS_NOCONTEXTMENU             0x00000010
#define BSIS_NODROPTARGET              0x00000020
#define BSIS_NOCAPTION                 0x00000040
#define BSIS_PREFERNOLINEBREAK         0x00000080
#define BSIS_LOCKED                    0x00000100
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define BSIS_PRESERVEORDERDURINGLAYOUT 0x00000200
#define BSIS_FIXEDORDER                0x00000400
#endif  // _WIN32_IE_IE70
#define SID_SBandSite IID_IBandSite
#define CGID_BandSite IID_IBandSite


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0089_v0_0_s_ifspec;

#ifndef __IBandSite_INTERFACE_DEFINED__
#define __IBandSite_INTERFACE_DEFINED__

/* interface IBandSite */
/* [uuid][object] */ 


EXTERN_C const IID IID_IBandSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CF504B0-DE96-11D0-8B3F-00A0C911E8E5")
    IBandSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddBand( 
            /* [in] */ __RPC__in_opt IUnknown *punk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumBands( 
            /* [in] */ UINT uBand,
            /* [out] */ __RPC__out DWORD *pdwBandID) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE QueryBand( 
            /* [annotation][in] */ 
            _In_  DWORD dwBandID,
            /* [annotation][out] */ 
            _Outptr_opt_  IDeskBand **ppstb,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwState,
            /* [annotation][size_is][string][out] */ 
            _Out_writes_opt_(cchName)  LPWSTR pszName,
            /* [annotation][in] */ 
            _In_  int cchName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBandState( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveBand( 
            /* [in] */ DWORD dwBandID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBandObject( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBandSiteInfo( 
            /* [in] */ __RPC__in const BANDSITEINFO *pbsinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBandSiteInfo( 
            /* [out][in] */ __RPC__inout BANDSITEINFO *pbsinfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBandSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBandSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBandSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBandSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddBand )( 
            __RPC__in IBandSite * This,
            /* [in] */ __RPC__in_opt IUnknown *punk);
        
        HRESULT ( STDMETHODCALLTYPE *EnumBands )( 
            __RPC__in IBandSite * This,
            /* [in] */ UINT uBand,
            /* [out] */ __RPC__out DWORD *pdwBandID);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *QueryBand )( 
            IBandSite * This,
            /* [annotation][in] */ 
            _In_  DWORD dwBandID,
            /* [annotation][out] */ 
            _Outptr_opt_  IDeskBand **ppstb,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwState,
            /* [annotation][size_is][string][out] */ 
            _Out_writes_opt_(cchName)  LPWSTR pszName,
            /* [annotation][in] */ 
            _In_  int cchName);
        
        HRESULT ( STDMETHODCALLTYPE *SetBandState )( 
            __RPC__in IBandSite * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwState);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveBand )( 
            __RPC__in IBandSite * This,
            /* [in] */ DWORD dwBandID);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandObject )( 
            __RPC__in IBandSite * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *SetBandSiteInfo )( 
            __RPC__in IBandSite * This,
            /* [in] */ __RPC__in const BANDSITEINFO *pbsinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandSiteInfo )( 
            __RPC__in IBandSite * This,
            /* [out][in] */ __RPC__inout BANDSITEINFO *pbsinfo);
        
        END_INTERFACE
    } IBandSiteVtbl;

    interface IBandSite
    {
        CONST_VTBL struct IBandSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBandSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBandSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBandSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBandSite_AddBand(This,punk)	\
    ( (This)->lpVtbl -> AddBand(This,punk) ) 

#define IBandSite_EnumBands(This,uBand,pdwBandID)	\
    ( (This)->lpVtbl -> EnumBands(This,uBand,pdwBandID) ) 

#define IBandSite_QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName)	\
    ( (This)->lpVtbl -> QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName) ) 

#define IBandSite_SetBandState(This,dwBandID,dwMask,dwState)	\
    ( (This)->lpVtbl -> SetBandState(This,dwBandID,dwMask,dwState) ) 

#define IBandSite_RemoveBand(This,dwBandID)	\
    ( (This)->lpVtbl -> RemoveBand(This,dwBandID) ) 

#define IBandSite_GetBandObject(This,dwBandID,riid,ppv)	\
    ( (This)->lpVtbl -> GetBandObject(This,dwBandID,riid,ppv) ) 

#define IBandSite_SetBandSiteInfo(This,pbsinfo)	\
    ( (This)->lpVtbl -> SetBandSiteInfo(This,pbsinfo) ) 

#define IBandSite_GetBandSiteInfo(This,pbsinfo)	\
    ( (This)->lpVtbl -> GetBandSiteInfo(This,pbsinfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IBandSite_RemoteQueryBand_Proxy( 
    __RPC__in IBandSite * This,
    /* [in] */ DWORD dwBandID,
    /* [out] */ __RPC__deref_out_opt IDeskBand **ppstb,
    /* [out] */ __RPC__out DWORD *pdwState,
    /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchName) LPWSTR pszName,
    /* [in] */ int cchName);


void __RPC_STUB IBandSite_RemoteQueryBand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBandSite_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0090 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0090_v0_0_s_ifspec;

#ifndef __IModalWindow_INTERFACE_DEFINED__
#define __IModalWindow_INTERFACE_DEFINED__

/* interface IModalWindow */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IModalWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4db1657-70d7-485e-8e3e-6fcb5a5c1802")
    IModalWindow : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Show( 
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IModalWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IModalWindow * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IModalWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IModalWindow * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IModalWindow * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner);
        
        END_INTERFACE
    } IModalWindowVtbl;

    interface IModalWindow
    {
        CONST_VTBL struct IModalWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IModalWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IModalWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IModalWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IModalWindow_Show(This,hwndOwner)	\
    ( (This)->lpVtbl -> Show(This,hwndOwner) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IModalWindow_RemoteShow_Proxy( 
    __RPC__in IModalWindow * This,
    /* [unique][in] */ __RPC__in_opt HWND hwndOwner);


void __RPC_STUB IModalWindow_RemoteShow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IModalWindow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0091 */
/* [local] */ 

#endif  // NTDDI_WINXP


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0091_v0_0_s_ifspec;

#ifndef __IContextMenuSite_INTERFACE_DEFINED__
#define __IContextMenuSite_INTERFACE_DEFINED__

/* interface IContextMenuSite */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IContextMenuSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0811AEBE-0B87-4C54-9E72-548CF649016B")
    IContextMenuSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DoContextMenuPopup( 
            /* [in] */ __RPC__in_opt IUnknown *punkContextMenu,
            /* [in] */ UINT fFlags,
            /* [in] */ POINT pt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IContextMenuSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IContextMenuSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IContextMenuSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IContextMenuSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoContextMenuPopup )( 
            __RPC__in IContextMenuSite * This,
            /* [in] */ __RPC__in_opt IUnknown *punkContextMenu,
            /* [in] */ UINT fFlags,
            /* [in] */ POINT pt);
        
        END_INTERFACE
    } IContextMenuSiteVtbl;

    interface IContextMenuSite
    {
        CONST_VTBL struct IContextMenuSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenuSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenuSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenuSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenuSite_DoContextMenuPopup(This,punkContextMenu,fFlags,pt)	\
    ( (This)->lpVtbl -> DoContextMenuPopup(This,punkContextMenu,fFlags,pt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenuSite_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0092 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
#if (NTDDI_VERSION >= NTDDI_WINXP)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0092_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0092_v0_0_s_ifspec;

#ifndef __IMenuBand_INTERFACE_DEFINED__
#define __IMenuBand_INTERFACE_DEFINED__

/* interface IMenuBand */
/* [local][unique][object][uuid] */ 


enum tagMENUBANDHANDLERCID
    {
        MBHANDCID_PIDLSELECT	= 0
    } ;

EXTERN_C const IID IID_IMenuBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("568804CD-CBD7-11d0-9816-00C04FD91972")
    IMenuBand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsMenuMessage( 
            /* [annotation][in] */ 
            _In_  MSG *pmsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateMenuMessage( 
            /* [annotation][out][in] */ 
            _Inout_  MSG *pmsg,
            /* [annotation][out] */ 
            _Out_  LRESULT *plRet) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMenuBandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuBand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuBand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuBand * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsMenuMessage )( 
            IMenuBand * This,
            /* [annotation][in] */ 
            _In_  MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateMenuMessage )( 
            IMenuBand * This,
            /* [annotation][out][in] */ 
            _Inout_  MSG *pmsg,
            /* [annotation][out] */ 
            _Out_  LRESULT *plRet);
        
        END_INTERFACE
    } IMenuBandVtbl;

    interface IMenuBand
    {
        CONST_VTBL struct IMenuBandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuBand_IsMenuMessage(This,pmsg)	\
    ( (This)->lpVtbl -> IsMenuMessage(This,pmsg) ) 

#define IMenuBand_TranslateMenuMessage(This,pmsg,plRet)	\
    ( (This)->lpVtbl -> TranslateMenuMessage(This,pmsg,plRet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuBand_INTERFACE_DEFINED__ */


#ifndef __IRegTreeItem_INTERFACE_DEFINED__
#define __IRegTreeItem_INTERFACE_DEFINED__

/* interface IRegTreeItem */
/* [object][local][uuid] */ 


EXTERN_C const IID IID_IRegTreeItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9521922-0812-4d44-9EC3-7FD38C726F3D")
    IRegTreeItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCheckState( 
            /* [annotation][out] */ 
            _Out_  BOOL *pbCheck) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCheckState( 
            /* [annotation][in] */ 
            _In_  BOOL bCheck) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRegTreeItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRegTreeItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRegTreeItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRegTreeItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCheckState )( 
            IRegTreeItem * This,
            /* [annotation][out] */ 
            _Out_  BOOL *pbCheck);
        
        HRESULT ( STDMETHODCALLTYPE *SetCheckState )( 
            IRegTreeItem * This,
            /* [annotation][in] */ 
            _In_  BOOL bCheck);
        
        END_INTERFACE
    } IRegTreeItemVtbl;

    interface IRegTreeItem
    {
        CONST_VTBL struct IRegTreeItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegTreeItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRegTreeItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRegTreeItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRegTreeItem_GetCheckState(This,pbCheck)	\
    ( (This)->lpVtbl -> GetCheckState(This,pbCheck) ) 

#define IRegTreeItem_SetCheckState(This,bCheck)	\
    ( (This)->lpVtbl -> SetCheckState(This,bCheck) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRegTreeItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0094 */
/* [local] */ 

#endif  // NTDDI_WINXP
#endif  // NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= _WIN32_IE_IE60)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0094_v0_0_s_ifspec;

#ifndef __IDeskBar_INTERFACE_DEFINED__
#define __IDeskBar_INTERFACE_DEFINED__

/* interface IDeskBar */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IDeskBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB0FE173-1A3A-11D0-89B3-00A0C90A90AC")
    IDeskBar : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetClient( 
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punkClient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClient( 
            /* [annotation][out] */ 
            _Outptr_  IUnknown **ppunkClient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPosRectChangeDB( 
            /* [annotation][in] */ 
            _In_  RECT *prc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeskBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeskBar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeskBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeskBar * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IDeskBar * This,
            /* [out] */ HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IDeskBar * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetClient )( 
            IDeskBar * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punkClient);
        
        HRESULT ( STDMETHODCALLTYPE *GetClient )( 
            IDeskBar * This,
            /* [annotation][out] */ 
            _Outptr_  IUnknown **ppunkClient);
        
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChangeDB )( 
            IDeskBar * This,
            /* [annotation][in] */ 
            _In_  RECT *prc);
        
        END_INTERFACE
    } IDeskBarVtbl;

    interface IDeskBar
    {
        CONST_VTBL struct IDeskBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBar_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDeskBar_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDeskBar_SetClient(This,punkClient)	\
    ( (This)->lpVtbl -> SetClient(This,punkClient) ) 

#define IDeskBar_GetClient(This,ppunkClient)	\
    ( (This)->lpVtbl -> GetClient(This,ppunkClient) ) 

#define IDeskBar_OnPosRectChangeDB(This,prc)	\
    ( (This)->lpVtbl -> OnPosRectChangeDB(This,prc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBar_INTERFACE_DEFINED__ */


#ifndef __IMenuPopup_INTERFACE_DEFINED__
#define __IMenuPopup_INTERFACE_DEFINED__

/* interface IMenuPopup */
/* [local][unique][object][uuid] */ 


enum tagMENUPOPUPSELECT
    {
        MPOS_EXECUTE	= 0,
        MPOS_FULLCANCEL	= ( MPOS_EXECUTE + 1 ) ,
        MPOS_CANCELLEVEL	= ( MPOS_FULLCANCEL + 1 ) ,
        MPOS_SELECTLEFT	= ( MPOS_CANCELLEVEL + 1 ) ,
        MPOS_SELECTRIGHT	= ( MPOS_SELECTLEFT + 1 ) ,
        MPOS_CHILDTRACKING	= ( MPOS_SELECTRIGHT + 1 ) 
    } ;

enum tagMENUPOPUPPOPUPFLAGS
    {
        MPPF_SETFOCUS	= 0x1,
        MPPF_INITIALSELECT	= 0x2,
        MPPF_NOANIMATE	= 0x4,
        MPPF_KEYBOARD	= 0x10,
        MPPF_REPOSITION	= 0x20,
        MPPF_FORCEZORDER	= 0x40,
        MPPF_FINALSELECT	= 0x80,
        MPPF_TOP	= 0x20000000,
        MPPF_LEFT	= 0x40000000,
        MPPF_RIGHT	= 0x60000000,
        MPPF_BOTTOM	= ( int  )0x80000000,
        MPPF_POS_MASK	= ( int  )0xe0000000,
        MPPF_ALIGN_LEFT	= 0x2000000,
        MPPF_ALIGN_RIGHT	= 0x4000000
    } ;
typedef int MP_POPUPFLAGS;


EXTERN_C const IID IID_IMenuPopup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1E7AFEB-6A2E-11d0-8C78-00C04FD918B4")
    IMenuPopup : public IDeskBar
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Popup( 
            /* [annotation][in] */ 
            _In_  POINTL *ppt,
            /* [annotation][unique][in] */ 
            _In_opt_  RECTL *prcExclude,
            /* [annotation][in] */ 
            _In_  MP_POPUPFLAGS dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelect( 
            /* [annotation][in] */ 
            _In_  DWORD dwSelectType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSubMenu( 
            /* [annotation][in] */ 
            _In_  IMenuPopup *pmp,
            /* [annotation][in] */ 
            _In_  BOOL fSet) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMenuPopupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuPopup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuPopup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuPopup * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IMenuPopup * This,
            /* [out] */ HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IMenuPopup * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetClient )( 
            IMenuPopup * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punkClient);
        
        HRESULT ( STDMETHODCALLTYPE *GetClient )( 
            IMenuPopup * This,
            /* [annotation][out] */ 
            _Outptr_  IUnknown **ppunkClient);
        
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChangeDB )( 
            IMenuPopup * This,
            /* [annotation][in] */ 
            _In_  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *Popup )( 
            IMenuPopup * This,
            /* [annotation][in] */ 
            _In_  POINTL *ppt,
            /* [annotation][unique][in] */ 
            _In_opt_  RECTL *prcExclude,
            /* [annotation][in] */ 
            _In_  MP_POPUPFLAGS dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelect )( 
            IMenuPopup * This,
            /* [annotation][in] */ 
            _In_  DWORD dwSelectType);
        
        HRESULT ( STDMETHODCALLTYPE *SetSubMenu )( 
            IMenuPopup * This,
            /* [annotation][in] */ 
            _In_  IMenuPopup *pmp,
            /* [annotation][in] */ 
            _In_  BOOL fSet);
        
        END_INTERFACE
    } IMenuPopupVtbl;

    interface IMenuPopup
    {
        CONST_VTBL struct IMenuPopupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuPopup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuPopup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuPopup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuPopup_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IMenuPopup_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IMenuPopup_SetClient(This,punkClient)	\
    ( (This)->lpVtbl -> SetClient(This,punkClient) ) 

#define IMenuPopup_GetClient(This,ppunkClient)	\
    ( (This)->lpVtbl -> GetClient(This,ppunkClient) ) 

#define IMenuPopup_OnPosRectChangeDB(This,prc)	\
    ( (This)->lpVtbl -> OnPosRectChangeDB(This,prc) ) 


#define IMenuPopup_Popup(This,ppt,prcExclude,dwFlags)	\
    ( (This)->lpVtbl -> Popup(This,ppt,prcExclude,dwFlags) ) 

#define IMenuPopup_OnSelect(This,dwSelectType)	\
    ( (This)->lpVtbl -> OnSelect(This,dwSelectType) ) 

#define IMenuPopup_SetSubMenu(This,pmp,fSet)	\
    ( (This)->lpVtbl -> SetSubMenu(This,pmp,fSet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuPopup_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0096 */
/* [local] */ 

#endif  // _WIN32_IE_IE60
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef /* [v1_enum] */ 
enum FILE_USAGE_TYPE
    {
        FUT_PLAYING	= 0,
        FUT_EDITING	= ( FUT_PLAYING + 1 ) ,
        FUT_GENERIC	= ( FUT_EDITING + 1 ) 
    } 	FILE_USAGE_TYPE;

#define OF_CAP_CANSWITCHTO     0x0001
#define OF_CAP_CANCLOSE        0x0002


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0096_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0096_v0_0_s_ifspec;

#ifndef __IFileIsInUse_INTERFACE_DEFINED__
#define __IFileIsInUse_INTERFACE_DEFINED__

/* interface IFileIsInUse */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IFileIsInUse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64a1cbf0-3a1a-4461-9158-376969693950")
    IFileIsInUse : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAppName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUsage( 
            /* [out] */ __RPC__out FILE_USAGE_TYPE *pfut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [out] */ __RPC__out DWORD *pdwCapFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSwitchToHWND( 
            /* [out] */ __RPC__deref_out_opt HWND *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseFile( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileIsInUseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileIsInUse * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileIsInUse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileIsInUse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppName )( 
            __RPC__in IFileIsInUse * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetUsage )( 
            __RPC__in IFileIsInUse * This,
            /* [out] */ __RPC__out FILE_USAGE_TYPE *pfut);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            __RPC__in IFileIsInUse * This,
            /* [out] */ __RPC__out DWORD *pdwCapFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSwitchToHWND )( 
            __RPC__in IFileIsInUse * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *CloseFile )( 
            __RPC__in IFileIsInUse * This);
        
        END_INTERFACE
    } IFileIsInUseVtbl;

    interface IFileIsInUse
    {
        CONST_VTBL struct IFileIsInUseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileIsInUse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileIsInUse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileIsInUse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileIsInUse_GetAppName(This,ppszName)	\
    ( (This)->lpVtbl -> GetAppName(This,ppszName) ) 

#define IFileIsInUse_GetUsage(This,pfut)	\
    ( (This)->lpVtbl -> GetUsage(This,pfut) ) 

#define IFileIsInUse_GetCapabilities(This,pdwCapFlags)	\
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapFlags) ) 

#define IFileIsInUse_GetSwitchToHWND(This,phwnd)	\
    ( (This)->lpVtbl -> GetSwitchToHWND(This,phwnd) ) 

#define IFileIsInUse_CloseFile(This)	\
    ( (This)->lpVtbl -> CloseFile(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileIsInUse_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0097 */
/* [local] */ 


typedef /* [v1_enum] */ 
enum FDE_OVERWRITE_RESPONSE
    {
        FDEOR_DEFAULT	= 0,
        FDEOR_ACCEPT	= 1,
        FDEOR_REFUSE	= 2
    } 	FDE_OVERWRITE_RESPONSE;

typedef /* [v1_enum] */ 
enum FDE_SHAREVIOLATION_RESPONSE
    {
        FDESVR_DEFAULT	= 0,
        FDESVR_ACCEPT	= 1,
        FDESVR_REFUSE	= 2
    } 	FDE_SHAREVIOLATION_RESPONSE;

typedef /* [v1_enum] */ 
enum FDAP
    {
        FDAP_BOTTOM	= 0,
        FDAP_TOP	= 1
    } 	FDAP;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0097_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0097_v0_0_s_ifspec;

#ifndef __IFileDialogEvents_INTERFACE_DEFINED__
#define __IFileDialogEvents_INTERFACE_DEFINED__

/* interface IFileDialogEvents */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileDialogEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("973510db-7d7f-452b-8975-74a85828d354")
    IFileDialogEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFileOk( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFolderChanging( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psiFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFolderChange( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelectionChange( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnShareViolation( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_SHAREVIOLATION_RESPONSE *pResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTypeChange( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnOverwrite( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_OVERWRITE_RESPONSE *pResponse) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileDialogEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileDialogEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileDialogEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFileOk )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnFolderChanging )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psiFolder);
        
        HRESULT ( STDMETHODCALLTYPE *OnFolderChange )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnShareViolation )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_SHAREVIOLATION_RESPONSE *pResponse);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeChange )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnOverwrite )( 
            __RPC__in IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_OVERWRITE_RESPONSE *pResponse);
        
        END_INTERFACE
    } IFileDialogEventsVtbl;

    interface IFileDialogEvents
    {
        CONST_VTBL struct IFileDialogEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialogEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialogEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialogEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialogEvents_OnFileOk(This,pfd)	\
    ( (This)->lpVtbl -> OnFileOk(This,pfd) ) 

#define IFileDialogEvents_OnFolderChanging(This,pfd,psiFolder)	\
    ( (This)->lpVtbl -> OnFolderChanging(This,pfd,psiFolder) ) 

#define IFileDialogEvents_OnFolderChange(This,pfd)	\
    ( (This)->lpVtbl -> OnFolderChange(This,pfd) ) 

#define IFileDialogEvents_OnSelectionChange(This,pfd)	\
    ( (This)->lpVtbl -> OnSelectionChange(This,pfd) ) 

#define IFileDialogEvents_OnShareViolation(This,pfd,psi,pResponse)	\
    ( (This)->lpVtbl -> OnShareViolation(This,pfd,psi,pResponse) ) 

#define IFileDialogEvents_OnTypeChange(This,pfd)	\
    ( (This)->lpVtbl -> OnTypeChange(This,pfd) ) 

#define IFileDialogEvents_OnOverwrite(This,pfd,psi,pResponse)	\
    ( (This)->lpVtbl -> OnOverwrite(This,pfd,psi,pResponse) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialogEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0098 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0098_v0_0_s_ifspec;

#ifndef __IFileDialog_INTERFACE_DEFINED__
#define __IFileDialog_INTERFACE_DEFINED__

/* interface IFileDialog */
/* [unique][object][uuid] */ 

/* [v1_enum] */ 
enum _FILEOPENDIALOGOPTIONS
    {
        FOS_OVERWRITEPROMPT	= 0x2,
        FOS_STRICTFILETYPES	= 0x4,
        FOS_NOCHANGEDIR	= 0x8,
        FOS_PICKFOLDERS	= 0x20,
        FOS_FORCEFILESYSTEM	= 0x40,
        FOS_ALLNONSTORAGEITEMS	= 0x80,
        FOS_NOVALIDATE	= 0x100,
        FOS_ALLOWMULTISELECT	= 0x200,
        FOS_PATHMUSTEXIST	= 0x800,
        FOS_FILEMUSTEXIST	= 0x1000,
        FOS_CREATEPROMPT	= 0x2000,
        FOS_SHAREAWARE	= 0x4000,
        FOS_NOREADONLYRETURN	= 0x8000,
        FOS_NOTESTFILECREATE	= 0x10000,
        FOS_HIDEMRUPLACES	= 0x20000,
        FOS_HIDEPINNEDPLACES	= 0x40000,
        FOS_NODEREFERENCELINKS	= 0x100000,
        FOS_OKBUTTONNEEDSINTERACTION	= 0x200000,
        FOS_DONTADDTORECENT	= 0x2000000,
        FOS_FORCESHOWHIDDEN	= 0x10000000,
        FOS_DEFAULTNOMINIMODE	= 0x20000000,
        FOS_FORCEPREVIEWPANEON	= 0x40000000,
        FOS_SUPPORTSTREAMABLEITEMS	= 0x80000000
    } ;
typedef DWORD FILEOPENDIALOGOPTIONS;


EXTERN_C const IID IID_IFileDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42f85136-db7e-439c-85f1-e4075d135fc8")
    IFileDialog : public IModalWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFileTypes( 
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileTypeIndex( 
            /* [in] */ UINT iFileType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileTypeIndex( 
            /* [out] */ __RPC__out UINT *piFileType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptions( 
            /* [in] */ FILEOPENDIALOGOPTIONS fos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [out] */ __RPC__out FILEOPENDIALOGOPTIONS *pfos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOkButtonLabel( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileNameLabel( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResult( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPlace( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultExtension( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszDefaultExtension) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ HRESULT hr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClientGuid( 
            /* [in] */ __RPC__in REFGUID guid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearClientData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFilter( 
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileDialog * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IFileDialog * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )( 
            __RPC__in IFileDialog * This,
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )( 
            __RPC__in IFileDialog * This,
            /* [in] */ UINT iFileType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )( 
            __RPC__in IFileDialog * This,
            /* [out] */ __RPC__out UINT *piFileType);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IFileDialog * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            __RPC__in IFileDialog * This,
            /* [in] */ FILEOPENDIALOGOPTIONS fos);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            __RPC__in IFileDialog * This,
            /* [out] */ __RPC__out FILEOPENDIALOGOPTIONS *pfos);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IFileDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            __RPC__in IFileDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            __RPC__in IFileDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            __RPC__in IFileDialog * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            __RPC__in IFileDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )( 
            __RPC__in IFileDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )( 
            __RPC__in IFileDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            __RPC__in IFileDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *AddPlace )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )( 
            __RPC__in IFileDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDefaultExtension);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IFileDialog * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )( 
            __RPC__in IFileDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            __RPC__in IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter);
        
        END_INTERFACE
    } IFileDialogVtbl;

    interface IFileDialog
    {
        CONST_VTBL struct IFileDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialog_Show(This,hwndOwner)	\
    ( (This)->lpVtbl -> Show(This,hwndOwner) ) 


#define IFileDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)	\
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) ) 

#define IFileDialog_SetFileTypeIndex(This,iFileType)	\
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) ) 

#define IFileDialog_GetFileTypeIndex(This,piFileType)	\
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) ) 

#define IFileDialog_Advise(This,pfde,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) ) 

#define IFileDialog_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileDialog_SetOptions(This,fos)	\
    ( (This)->lpVtbl -> SetOptions(This,fos) ) 

#define IFileDialog_GetOptions(This,pfos)	\
    ( (This)->lpVtbl -> GetOptions(This,pfos) ) 

#define IFileDialog_SetDefaultFolder(This,psi)	\
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) ) 

#define IFileDialog_SetFolder(This,psi)	\
    ( (This)->lpVtbl -> SetFolder(This,psi) ) 

#define IFileDialog_GetFolder(This,ppsi)	\
    ( (This)->lpVtbl -> GetFolder(This,ppsi) ) 

#define IFileDialog_GetCurrentSelection(This,ppsi)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) ) 

#define IFileDialog_SetFileName(This,pszName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszName) ) 

#define IFileDialog_GetFileName(This,pszName)	\
    ( (This)->lpVtbl -> GetFileName(This,pszName) ) 

#define IFileDialog_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define IFileDialog_SetOkButtonLabel(This,pszText)	\
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) ) 

#define IFileDialog_SetFileNameLabel(This,pszLabel)	\
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) ) 

#define IFileDialog_GetResult(This,ppsi)	\
    ( (This)->lpVtbl -> GetResult(This,ppsi) ) 

#define IFileDialog_AddPlace(This,psi,fdap)	\
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) ) 

#define IFileDialog_SetDefaultExtension(This,pszDefaultExtension)	\
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) ) 

#define IFileDialog_Close(This,hr)	\
    ( (This)->lpVtbl -> Close(This,hr) ) 

#define IFileDialog_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IFileDialog_ClearClientData(This)	\
    ( (This)->lpVtbl -> ClearClientData(This) ) 

#define IFileDialog_SetFilter(This,pFilter)	\
    ( (This)->lpVtbl -> SetFilter(This,pFilter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialog_INTERFACE_DEFINED__ */


#ifndef __IFileSaveDialog_INTERFACE_DEFINED__
#define __IFileSaveDialog_INTERFACE_DEFINED__

/* interface IFileSaveDialog */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileSaveDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84bccd23-5fde-4cdb-aea4-af64b83d78ab")
    IFileSaveDialog : public IFileDialog
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSaveAsItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperties( 
            /* [in] */ __RPC__in_opt IPropertyStore *pStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCollectedProperties( 
            /* [in] */ __RPC__in_opt IPropertyDescriptionList *pList,
            /* [in] */ BOOL fAppendDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__deref_out_opt IPropertyStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyProperties( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ __RPC__in_opt IPropertyStore *pStore,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pSink) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileSaveDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileSaveDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileSaveDialog * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IFileSaveDialog * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ UINT iFileType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )( 
            __RPC__in IFileSaveDialog * This,
            /* [out] */ __RPC__out UINT *piFileType);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ FILEOPENDIALOGOPTIONS fos);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            __RPC__in IFileSaveDialog * This,
            /* [out] */ __RPC__out FILEOPENDIALOGOPTIONS *pfos);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            __RPC__in IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            __RPC__in IFileSaveDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            __RPC__in IFileSaveDialog * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            __RPC__in IFileSaveDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )( 
            __RPC__in IFileSaveDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )( 
            __RPC__in IFileSaveDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            __RPC__in IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *AddPlace )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )( 
            __RPC__in IFileSaveDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDefaultExtension);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )( 
            __RPC__in IFileSaveDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter);
        
        HRESULT ( STDMETHODCALLTYPE *SetSaveAsItem )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IPropertyStore *pStore);
        
        HRESULT ( STDMETHODCALLTYPE *SetCollectedProperties )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IPropertyDescriptionList *pList,
            /* [in] */ BOOL fAppendDefault);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            __RPC__in IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IPropertyStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyProperties )( 
            __RPC__in IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ __RPC__in_opt IPropertyStore *pStore,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pSink);
        
        END_INTERFACE
    } IFileSaveDialogVtbl;

    interface IFileSaveDialog
    {
        CONST_VTBL struct IFileSaveDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSaveDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSaveDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSaveDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSaveDialog_Show(This,hwndOwner)	\
    ( (This)->lpVtbl -> Show(This,hwndOwner) ) 


#define IFileSaveDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)	\
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) ) 

#define IFileSaveDialog_SetFileTypeIndex(This,iFileType)	\
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) ) 

#define IFileSaveDialog_GetFileTypeIndex(This,piFileType)	\
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) ) 

#define IFileSaveDialog_Advise(This,pfde,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) ) 

#define IFileSaveDialog_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileSaveDialog_SetOptions(This,fos)	\
    ( (This)->lpVtbl -> SetOptions(This,fos) ) 

#define IFileSaveDialog_GetOptions(This,pfos)	\
    ( (This)->lpVtbl -> GetOptions(This,pfos) ) 

#define IFileSaveDialog_SetDefaultFolder(This,psi)	\
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) ) 

#define IFileSaveDialog_SetFolder(This,psi)	\
    ( (This)->lpVtbl -> SetFolder(This,psi) ) 

#define IFileSaveDialog_GetFolder(This,ppsi)	\
    ( (This)->lpVtbl -> GetFolder(This,ppsi) ) 

#define IFileSaveDialog_GetCurrentSelection(This,ppsi)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) ) 

#define IFileSaveDialog_SetFileName(This,pszName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszName) ) 

#define IFileSaveDialog_GetFileName(This,pszName)	\
    ( (This)->lpVtbl -> GetFileName(This,pszName) ) 

#define IFileSaveDialog_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define IFileSaveDialog_SetOkButtonLabel(This,pszText)	\
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) ) 

#define IFileSaveDialog_SetFileNameLabel(This,pszLabel)	\
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) ) 

#define IFileSaveDialog_GetResult(This,ppsi)	\
    ( (This)->lpVtbl -> GetResult(This,ppsi) ) 

#define IFileSaveDialog_AddPlace(This,psi,fdap)	\
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) ) 

#define IFileSaveDialog_SetDefaultExtension(This,pszDefaultExtension)	\
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) ) 

#define IFileSaveDialog_Close(This,hr)	\
    ( (This)->lpVtbl -> Close(This,hr) ) 

#define IFileSaveDialog_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IFileSaveDialog_ClearClientData(This)	\
    ( (This)->lpVtbl -> ClearClientData(This) ) 

#define IFileSaveDialog_SetFilter(This,pFilter)	\
    ( (This)->lpVtbl -> SetFilter(This,pFilter) ) 


#define IFileSaveDialog_SetSaveAsItem(This,psi)	\
    ( (This)->lpVtbl -> SetSaveAsItem(This,psi) ) 

#define IFileSaveDialog_SetProperties(This,pStore)	\
    ( (This)->lpVtbl -> SetProperties(This,pStore) ) 

#define IFileSaveDialog_SetCollectedProperties(This,pList,fAppendDefault)	\
    ( (This)->lpVtbl -> SetCollectedProperties(This,pList,fAppendDefault) ) 

#define IFileSaveDialog_GetProperties(This,ppStore)	\
    ( (This)->lpVtbl -> GetProperties(This,ppStore) ) 

#define IFileSaveDialog_ApplyProperties(This,psi,pStore,hwnd,pSink)	\
    ( (This)->lpVtbl -> ApplyProperties(This,psi,pStore,hwnd,pSink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSaveDialog_INTERFACE_DEFINED__ */


#ifndef __IFileOpenDialog_INTERFACE_DEFINED__
#define __IFileOpenDialog_INTERFACE_DEFINED__

/* interface IFileOpenDialog */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileOpenDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d57c7288-d4ad-4768-be02-9d969532d960")
    IFileOpenDialog : public IFileDialog
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItems( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsai) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileOpenDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileOpenDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileOpenDialog * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IFileOpenDialog * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ UINT iFileType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__out UINT *piFileType);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ FILEOPENDIALOGOPTIONS fos);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__out FILEOPENDIALOGOPTIONS *pfos);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            __RPC__in IFileOpenDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            __RPC__in IFileOpenDialog * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            __RPC__in IFileOpenDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )( 
            __RPC__in IFileOpenDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )( 
            __RPC__in IFileOpenDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *AddPlace )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )( 
            __RPC__in IFileOpenDialog * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDefaultExtension);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )( 
            __RPC__in IFileOpenDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            __RPC__in IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )( 
            __RPC__in IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsai);
        
        END_INTERFACE
    } IFileOpenDialogVtbl;

    interface IFileOpenDialog
    {
        CONST_VTBL struct IFileOpenDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileOpenDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileOpenDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileOpenDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileOpenDialog_Show(This,hwndOwner)	\
    ( (This)->lpVtbl -> Show(This,hwndOwner) ) 


#define IFileOpenDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)	\
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) ) 

#define IFileOpenDialog_SetFileTypeIndex(This,iFileType)	\
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) ) 

#define IFileOpenDialog_GetFileTypeIndex(This,piFileType)	\
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) ) 

#define IFileOpenDialog_Advise(This,pfde,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) ) 

#define IFileOpenDialog_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileOpenDialog_SetOptions(This,fos)	\
    ( (This)->lpVtbl -> SetOptions(This,fos) ) 

#define IFileOpenDialog_GetOptions(This,pfos)	\
    ( (This)->lpVtbl -> GetOptions(This,pfos) ) 

#define IFileOpenDialog_SetDefaultFolder(This,psi)	\
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) ) 

#define IFileOpenDialog_SetFolder(This,psi)	\
    ( (This)->lpVtbl -> SetFolder(This,psi) ) 

#define IFileOpenDialog_GetFolder(This,ppsi)	\
    ( (This)->lpVtbl -> GetFolder(This,ppsi) ) 

#define IFileOpenDialog_GetCurrentSelection(This,ppsi)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) ) 

#define IFileOpenDialog_SetFileName(This,pszName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszName) ) 

#define IFileOpenDialog_GetFileName(This,pszName)	\
    ( (This)->lpVtbl -> GetFileName(This,pszName) ) 

#define IFileOpenDialog_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define IFileOpenDialog_SetOkButtonLabel(This,pszText)	\
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) ) 

#define IFileOpenDialog_SetFileNameLabel(This,pszLabel)	\
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) ) 

#define IFileOpenDialog_GetResult(This,ppsi)	\
    ( (This)->lpVtbl -> GetResult(This,ppsi) ) 

#define IFileOpenDialog_AddPlace(This,psi,fdap)	\
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) ) 

#define IFileOpenDialog_SetDefaultExtension(This,pszDefaultExtension)	\
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) ) 

#define IFileOpenDialog_Close(This,hr)	\
    ( (This)->lpVtbl -> Close(This,hr) ) 

#define IFileOpenDialog_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IFileOpenDialog_ClearClientData(This)	\
    ( (This)->lpVtbl -> ClearClientData(This) ) 

#define IFileOpenDialog_SetFilter(This,pFilter)	\
    ( (This)->lpVtbl -> SetFilter(This,pFilter) ) 


#define IFileOpenDialog_GetResults(This,ppenum)	\
    ( (This)->lpVtbl -> GetResults(This,ppenum) ) 

#define IFileOpenDialog_GetSelectedItems(This,ppsai)	\
    ( (This)->lpVtbl -> GetSelectedItems(This,ppsai) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileOpenDialog_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0101 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum CDCONTROLSTATEF
    {
        CDCS_INACTIVE	= 0,
        CDCS_ENABLED	= 0x1,
        CDCS_VISIBLE	= 0x2,
        CDCS_ENABLEDVISIBLE	= 0x3
    } 	CDCONTROLSTATEF;

DEFINE_ENUM_FLAG_OPERATORS(CDCONTROLSTATEF)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0101_v0_0_s_ifspec;

#ifndef __IFileDialogCustomize_INTERFACE_DEFINED__
#define __IFileDialogCustomize_INTERFACE_DEFINED__

/* interface IFileDialogCustomize */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileDialogCustomize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6fdd21a-163f-4975-9c8c-a69f1ba37034")
    IFileDialogCustomize : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnableOpenDropDown( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddMenu( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPushButton( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddComboBox( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRadioButtonList( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCheckButton( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel,
            /* [in] */ BOOL bChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddEditBox( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSeparator( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddText( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlLabel( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlState( 
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ CDCONTROLSTATEF dwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditBoxText( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][out] */ __RPC__deref_out_opt_string WCHAR **ppszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEditBoxText( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCheckButtonState( 
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out BOOL *pbChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCheckButtonState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ BOOL bChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllControlItems( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlItemState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlItemState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ CDCONTROLSTATEF dwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out DWORD *pdwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSelectedControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartVisualGroup( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndVisualGroup( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeProminent( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlItemText( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileDialogCustomizeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFileDialogCustomize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFileDialogCustomize * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnableOpenDropDown )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddMenu )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *AddPushButton )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *AddComboBox )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddRadioButtonList )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddCheckButton )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *AddEditBox )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *AddSeparator )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlLabel )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlState )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlState )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ CDCONTROLSTATEF dwState);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditBoxText )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][out] */ __RPC__deref_out_opt_string WCHAR **ppszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetEditBoxText )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetCheckButtonState )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out BOOL *pbChecked);
        
        HRESULT ( STDMETHODCALLTYPE *SetCheckButtonState )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *AddControlItem )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveControlItem )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllControlItems )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlItemState )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlItemState )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ CDCONTROLSTATEF dwState);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedControlItem )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out DWORD *pdwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *SetSelectedControlItem )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *StartVisualGroup )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *EndVisualGroup )( 
            __RPC__in IFileDialogCustomize * This);
        
        HRESULT ( STDMETHODCALLTYPE *MakeProminent )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlItemText )( 
            __RPC__in IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLabel);
        
        END_INTERFACE
    } IFileDialogCustomizeVtbl;

    interface IFileDialogCustomize
    {
        CONST_VTBL struct IFileDialogCustomizeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialogCustomize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialogCustomize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialogCustomize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialogCustomize_EnableOpenDropDown(This,dwIDCtl)	\
    ( (This)->lpVtbl -> EnableOpenDropDown(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddMenu(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> AddMenu(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_AddPushButton(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> AddPushButton(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_AddComboBox(This,dwIDCtl)	\
    ( (This)->lpVtbl -> AddComboBox(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddRadioButtonList(This,dwIDCtl)	\
    ( (This)->lpVtbl -> AddRadioButtonList(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddCheckButton(This,dwIDCtl,pszLabel,bChecked)	\
    ( (This)->lpVtbl -> AddCheckButton(This,dwIDCtl,pszLabel,bChecked) ) 

#define IFileDialogCustomize_AddEditBox(This,dwIDCtl,pszText)	\
    ( (This)->lpVtbl -> AddEditBox(This,dwIDCtl,pszText) ) 

#define IFileDialogCustomize_AddSeparator(This,dwIDCtl)	\
    ( (This)->lpVtbl -> AddSeparator(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddText(This,dwIDCtl,pszText)	\
    ( (This)->lpVtbl -> AddText(This,dwIDCtl,pszText) ) 

#define IFileDialogCustomize_SetControlLabel(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> SetControlLabel(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_GetControlState(This,dwIDCtl,pdwState)	\
    ( (This)->lpVtbl -> GetControlState(This,dwIDCtl,pdwState) ) 

#define IFileDialogCustomize_SetControlState(This,dwIDCtl,dwState)	\
    ( (This)->lpVtbl -> SetControlState(This,dwIDCtl,dwState) ) 

#define IFileDialogCustomize_GetEditBoxText(This,dwIDCtl,ppszText)	\
    ( (This)->lpVtbl -> GetEditBoxText(This,dwIDCtl,ppszText) ) 

#define IFileDialogCustomize_SetEditBoxText(This,dwIDCtl,pszText)	\
    ( (This)->lpVtbl -> SetEditBoxText(This,dwIDCtl,pszText) ) 

#define IFileDialogCustomize_GetCheckButtonState(This,dwIDCtl,pbChecked)	\
    ( (This)->lpVtbl -> GetCheckButtonState(This,dwIDCtl,pbChecked) ) 

#define IFileDialogCustomize_SetCheckButtonState(This,dwIDCtl,bChecked)	\
    ( (This)->lpVtbl -> SetCheckButtonState(This,dwIDCtl,bChecked) ) 

#define IFileDialogCustomize_AddControlItem(This,dwIDCtl,dwIDItem,pszLabel)	\
    ( (This)->lpVtbl -> AddControlItem(This,dwIDCtl,dwIDItem,pszLabel) ) 

#define IFileDialogCustomize_RemoveControlItem(This,dwIDCtl,dwIDItem)	\
    ( (This)->lpVtbl -> RemoveControlItem(This,dwIDCtl,dwIDItem) ) 

#define IFileDialogCustomize_RemoveAllControlItems(This,dwIDCtl)	\
    ( (This)->lpVtbl -> RemoveAllControlItems(This,dwIDCtl) ) 

#define IFileDialogCustomize_GetControlItemState(This,dwIDCtl,dwIDItem,pdwState)	\
    ( (This)->lpVtbl -> GetControlItemState(This,dwIDCtl,dwIDItem,pdwState) ) 

#define IFileDialogCustomize_SetControlItemState(This,dwIDCtl,dwIDItem,dwState)	\
    ( (This)->lpVtbl -> SetControlItemState(This,dwIDCtl,dwIDItem,dwState) ) 

#define IFileDialogCustomize_GetSelectedControlItem(This,dwIDCtl,pdwIDItem)	\
    ( (This)->lpVtbl -> GetSelectedControlItem(This,dwIDCtl,pdwIDItem) ) 

#define IFileDialogCustomize_SetSelectedControlItem(This,dwIDCtl,dwIDItem)	\
    ( (This)->lpVtbl -> SetSelectedControlItem(This,dwIDCtl,dwIDItem) ) 

#define IFileDialogCustomize_StartVisualGroup(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> StartVisualGroup(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_EndVisualGroup(This)	\
    ( (This)->lpVtbl -> EndVisualGroup(This) ) 

#define IFileDialogCustomize_MakeProminent(This,dwIDCtl)	\
    ( (This)->lpVtbl -> MakeProminent(This,dwIDCtl) ) 

#define IFileDialogCustomize_SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel)	\
    ( (This)->lpVtbl -> SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialogCustomize_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0102 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum ASSOCIATIONLEVEL
    {
        AL_MACHINE	= 0,
        AL_EFFECTIVE	= ( AL_MACHINE + 1 ) ,
        AL_USER	= ( AL_EFFECTIVE + 1 ) 
    } 	ASSOCIATIONLEVEL;

typedef /* [v1_enum] */ 
enum ASSOCIATIONTYPE
    {
        AT_FILEEXTENSION	= 0,
        AT_URLPROTOCOL	= ( AT_FILEEXTENSION + 1 ) ,
        AT_STARTMENUCLIENT	= ( AT_URLPROTOCOL + 1 ) ,
        AT_MIMETYPE	= ( AT_STARTMENUCLIENT + 1 ) 
    } 	ASSOCIATIONTYPE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0102_v0_0_s_ifspec;

#ifndef __IApplicationAssociationRegistration_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistration_INTERFACE_DEFINED__

/* interface IApplicationAssociationRegistration */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IApplicationAssociationRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4e530b0a-e611-4c77-a3ac-9031d022281b")
    IApplicationAssociationRegistration : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryCurrentDefault( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAssociation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryAppIsDefault( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryAppIsDefaultAll( 
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppAsDefault( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName,
            /* [string][in] */ __RPC__in_string LPCWSTR pszSet,
            /* [in] */ ASSOCIATIONTYPE atSetType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppAsDefaultAll( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearUserAssociations( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationAssociationRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationAssociationRegistration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationAssociationRegistration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationAssociationRegistration * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryCurrentDefault )( 
            __RPC__in IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAssociation);
        
        HRESULT ( STDMETHODCALLTYPE *QueryAppIsDefault )( 
            __RPC__in IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault);
        
        HRESULT ( STDMETHODCALLTYPE *QueryAppIsDefaultAll )( 
            __RPC__in IApplicationAssociationRegistration * This,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppAsDefault )( 
            __RPC__in IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName,
            /* [string][in] */ __RPC__in_string LPCWSTR pszSet,
            /* [in] */ ASSOCIATIONTYPE atSetType);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppAsDefaultAll )( 
            __RPC__in IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppRegistryName);
        
        HRESULT ( STDMETHODCALLTYPE *ClearUserAssociations )( 
            __RPC__in IApplicationAssociationRegistration * This);
        
        END_INTERFACE
    } IApplicationAssociationRegistrationVtbl;

    interface IApplicationAssociationRegistration
    {
        CONST_VTBL struct IApplicationAssociationRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationAssociationRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationAssociationRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationAssociationRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationAssociationRegistration_QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation)	\
    ( (This)->lpVtbl -> QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation) ) 

#define IApplicationAssociationRegistration_QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault)	\
    ( (This)->lpVtbl -> QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault) ) 

#define IApplicationAssociationRegistration_QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault)	\
    ( (This)->lpVtbl -> QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault) ) 

#define IApplicationAssociationRegistration_SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType)	\
    ( (This)->lpVtbl -> SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType) ) 

#define IApplicationAssociationRegistration_SetAppAsDefaultAll(This,pszAppRegistryName)	\
    ( (This)->lpVtbl -> SetAppAsDefaultAll(This,pszAppRegistryName) ) 

#define IApplicationAssociationRegistration_ClearUserAssociations(This)	\
    ( (This)->lpVtbl -> ClearUserAssociations(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationAssociationRegistration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0103 */
/* [local] */ 

SHSTDAPI SHCreateAssociationRegistration(_In_ REFIID riid, _Outptr_ void **ppv);
#endif  // NTDDI_VISTA
#include <pshpack1.h>
typedef struct DELEGATEITEMID
    {
    WORD cbSize;
    WORD wOuter;
    WORD cbInner;
    BYTE rgb[ 1 ];
    } 	DELEGATEITEMID;

#include <poppack.h>
typedef const UNALIGNED DELEGATEITEMID *PCDELEGATEITEMID;
typedef UNALIGNED DELEGATEITEMID *PDELEGATEITEMID;


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0103_v0_0_s_ifspec;

#ifndef __IDelegateFolder_INTERFACE_DEFINED__
#define __IDelegateFolder_INTERFACE_DEFINED__

/* interface IDelegateFolder */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IDelegateFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADD8BA80-002B-11D0-8F0F-00C04FD7D062")
    IDelegateFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetItemAlloc( 
            /* [annotation][in] */ 
            _In_  IMalloc *pmalloc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDelegateFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDelegateFolder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDelegateFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDelegateFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemAlloc )( 
            IDelegateFolder * This,
            /* [annotation][in] */ 
            _In_  IMalloc *pmalloc);
        
        END_INTERFACE
    } IDelegateFolderVtbl;

    interface IDelegateFolder
    {
        CONST_VTBL struct IDelegateFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDelegateFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDelegateFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDelegateFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDelegateFolder_SetItemAlloc(This,pmalloc)	\
    ( (This)->lpVtbl -> SetItemAlloc(This,pmalloc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDelegateFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0104 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE60)
// INTERFACE: IBrowserFrameOptions
//
// This interface was implemented so a browser or host can ask a ShellView/ShelNameSpace what
// kind of 'Behavior' is appropriate for that view.
//
//    IBrowserFrameOptions::GetBrowserOptions()
//       dwMask is the logical OR of bits to look for.  pdwOptions is not optional and
//       it's return value will always equal or will be a subset of dwMask.
//       If the function succeeds, the return value must be S_OK and pdwOptions needs to be filled in.
//       If the function fails, pdwOptions needs to be filled in with BFO_NONE.
//


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0104_v0_0_s_ifspec;

#ifndef __IBrowserFrameOptions_INTERFACE_DEFINED__
#define __IBrowserFrameOptions_INTERFACE_DEFINED__

/* interface IBrowserFrameOptions */
/* [local][object][uuid] */ 

typedef /* [unique] */ IBrowserFrameOptions *LPBROWSERFRAMEOPTIONS;

/* [v1_enum] */ 
enum _BROWSERFRAMEOPTIONS
    {
        BFO_NONE	= 0,
        BFO_BROWSER_PERSIST_SETTINGS	= 0x1,
        BFO_RENAME_FOLDER_OPTIONS_TOINTERNET	= 0x2,
        BFO_BOTH_OPTIONS	= 0x4,
        BIF_PREFER_INTERNET_SHORTCUT	= 0x8,
        BFO_BROWSE_NO_IN_NEW_PROCESS	= 0x10,
        BFO_ENABLE_HYPERLINK_TRACKING	= 0x20,
        BFO_USE_IE_OFFLINE_SUPPORT	= 0x40,
        BFO_SUBSTITUE_INTERNET_START_PAGE	= 0x80,
        BFO_USE_IE_LOGOBANDING	= 0x100,
        BFO_ADD_IE_TOCAPTIONBAR	= 0x200,
        BFO_USE_DIALUP_REF	= 0x400,
        BFO_USE_IE_TOOLBAR	= 0x800,
        BFO_NO_PARENT_FOLDER_SUPPORT	= 0x1000,
        BFO_NO_REOPEN_NEXT_RESTART	= 0x2000,
        BFO_GO_HOME_PAGE	= 0x4000,
        BFO_PREFER_IEPROCESS	= 0x8000,
        BFO_SHOW_NAVIGATION_CANCELLED	= 0x10000,
        BFO_USE_IE_STATUSBAR	= 0x20000,
        BFO_QUERY_ALL	= ( int  )0xffffffff
    } ;
typedef DWORD BROWSERFRAMEOPTIONS;


EXTERN_C const IID IID_IBrowserFrameOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10DF43C8-1DBE-11d3-8B34-006097DF5BD4")
    IBrowserFrameOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFrameOptions( 
            /* [annotation][in] */ 
            _In_  BROWSERFRAMEOPTIONS dwMask,
            /* [annotation][out] */ 
            _Out_  BROWSERFRAMEOPTIONS *pdwOptions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBrowserFrameOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBrowserFrameOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBrowserFrameOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBrowserFrameOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameOptions )( 
            IBrowserFrameOptions * This,
            /* [annotation][in] */ 
            _In_  BROWSERFRAMEOPTIONS dwMask,
            /* [annotation][out] */ 
            _Out_  BROWSERFRAMEOPTIONS *pdwOptions);
        
        END_INTERFACE
    } IBrowserFrameOptionsVtbl;

    interface IBrowserFrameOptions
    {
        CONST_VTBL struct IBrowserFrameOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBrowserFrameOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBrowserFrameOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBrowserFrameOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBrowserFrameOptions_GetFrameOptions(This,dwMask,pdwOptions)	\
    ( (This)->lpVtbl -> GetFrameOptions(This,dwMask,pdwOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBrowserFrameOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0105 */
/* [local] */ 

#endif  // _WIN32_IE_IE60
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
typedef /* [v1_enum] */ 
enum NWMF
    {
        NWMF_UNLOADING	= 0x1,
        NWMF_USERINITED	= 0x2,
        NWMF_FIRST	= 0x4,
        NWMF_OVERRIDEKEY	= 0x8,
        NWMF_SHOWHELP	= 0x10,
        NWMF_HTMLDIALOG	= 0x20,
        NWMF_FROMDIALOGCHILD	= 0x40,
        NWMF_USERREQUESTED	= 0x80,
        NWMF_USERALLOWED	= 0x100,
        NWMF_FORCEWINDOW	= 0x10000,
        NWMF_FORCETAB	= 0x20000,
        NWMF_SUGGESTWINDOW	= 0x40000,
        NWMF_SUGGESTTAB	= 0x80000,
        NWMF_INACTIVETAB	= 0x100000
    } 	NWMF;

DEFINE_ENUM_FLAG_OPERATORS(NWMF)
#define SID_SNewWindowManager IID_INewWindowManager


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0105_v0_0_s_ifspec;

#ifndef __INewWindowManager_INTERFACE_DEFINED__
#define __INewWindowManager_INTERFACE_DEFINED__

/* interface INewWindowManager */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_INewWindowManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2BC4C84-3F72-4a52-A604-7BCBF3982CBB")
    INewWindowManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EvaluateNewWindow( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszUrl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [string][in] */ __RPC__in_string LPCWSTR pszUrlContext,
            /* [string][in] */ __RPC__in_string LPCWSTR pszFeatures,
            /* [in] */ BOOL fReplace,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwUserActionTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INewWindowManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INewWindowManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INewWindowManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INewWindowManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *EvaluateNewWindow )( 
            __RPC__in INewWindowManager * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszUrl,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName,
            /* [string][in] */ __RPC__in_string LPCWSTR pszUrlContext,
            /* [string][in] */ __RPC__in_string LPCWSTR pszFeatures,
            /* [in] */ BOOL fReplace,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwUserActionTime);
        
        END_INTERFACE
    } INewWindowManagerVtbl;

    interface INewWindowManager
    {
        CONST_VTBL struct INewWindowManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INewWindowManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INewWindowManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INewWindowManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INewWindowManager_EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime)	\
    ( (This)->lpVtbl -> EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INewWindowManager_INTERFACE_DEFINED__ */


#ifndef __IAttachmentExecute_INTERFACE_DEFINED__
#define __IAttachmentExecute_INTERFACE_DEFINED__

/* interface IAttachmentExecute */
/* [unique][local][uuid][object] */ 

typedef /* [v1_enum] */ 
enum ATTACHMENT_PROMPT
    {
        ATTACHMENT_PROMPT_NONE	= 0,
        ATTACHMENT_PROMPT_SAVE	= 0x1,
        ATTACHMENT_PROMPT_EXEC	= 0x2,
        ATTACHMENT_PROMPT_EXEC_OR_SAVE	= 0x3
    } 	ATTACHMENT_PROMPT;

typedef /* [v1_enum] */ 
enum ATTACHMENT_ACTION
    {
        ATTACHMENT_ACTION_CANCEL	= 0,
        ATTACHMENT_ACTION_SAVE	= 0x1,
        ATTACHMENT_ACTION_EXEC	= 0x2
    } 	ATTACHMENT_ACTION;


EXTERN_C const IID IID_IAttachmentExecute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73db1241-1e85-4581-8e4f-a81e1d0f8c57")
    IAttachmentExecute : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetClientTitle( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClientGuid( 
            /* [annotation][in] */ 
            _In_  REFGUID guid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLocalPath( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszLocalPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReferrer( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszReferrer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckPolicy( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Prompt( 
            /* [annotation][in] */ 
            _In_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  ATTACHMENT_PROMPT prompt,
            /* [annotation][out] */ 
            _Out_  ATTACHMENT_ACTION *paction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [annotation][in] */ 
            _In_  HWND hwnd,
            /* [annotation][string][in] */ 
            _In_opt_  LPCWSTR pszVerb,
            /* [annotation][out] */ 
            _Out_opt_  HANDLE *phProcess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveWithUI( 
            /* [annotation][in] */ 
            _In_  HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearClientState( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAttachmentExecuteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAttachmentExecute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAttachmentExecute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAttachmentExecute * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientTitle )( 
            IAttachmentExecute * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            IAttachmentExecute * This,
            /* [annotation][in] */ 
            _In_  REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *SetLocalPath )( 
            IAttachmentExecute * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszLocalPath);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAttachmentExecute * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IAttachmentExecute * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszSource);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferrer )( 
            IAttachmentExecute * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszReferrer);
        
        HRESULT ( STDMETHODCALLTYPE *CheckPolicy )( 
            IAttachmentExecute * This);
        
        HRESULT ( STDMETHODCALLTYPE *Prompt )( 
            IAttachmentExecute * This,
            /* [annotation][in] */ 
            _In_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  ATTACHMENT_PROMPT prompt,
            /* [annotation][out] */ 
            _Out_  ATTACHMENT_ACTION *paction);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAttachmentExecute * This);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IAttachmentExecute * This,
            /* [annotation][in] */ 
            _In_  HWND hwnd,
            /* [annotation][string][in] */ 
            _In_opt_  LPCWSTR pszVerb,
            /* [annotation][out] */ 
            _Out_opt_  HANDLE *phProcess);
        
        HRESULT ( STDMETHODCALLTYPE *SaveWithUI )( 
            IAttachmentExecute * This,
            /* [annotation][in] */ 
            _In_  HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientState )( 
            IAttachmentExecute * This);
        
        END_INTERFACE
    } IAttachmentExecuteVtbl;

    interface IAttachmentExecute
    {
        CONST_VTBL struct IAttachmentExecuteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAttachmentExecute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAttachmentExecute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAttachmentExecute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAttachmentExecute_SetClientTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetClientTitle(This,pszTitle) ) 

#define IAttachmentExecute_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IAttachmentExecute_SetLocalPath(This,pszLocalPath)	\
    ( (This)->lpVtbl -> SetLocalPath(This,pszLocalPath) ) 

#define IAttachmentExecute_SetFileName(This,pszFileName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszFileName) ) 

#define IAttachmentExecute_SetSource(This,pszSource)	\
    ( (This)->lpVtbl -> SetSource(This,pszSource) ) 

#define IAttachmentExecute_SetReferrer(This,pszReferrer)	\
    ( (This)->lpVtbl -> SetReferrer(This,pszReferrer) ) 

#define IAttachmentExecute_CheckPolicy(This)	\
    ( (This)->lpVtbl -> CheckPolicy(This) ) 

#define IAttachmentExecute_Prompt(This,hwnd,prompt,paction)	\
    ( (This)->lpVtbl -> Prompt(This,hwnd,prompt,paction) ) 

#define IAttachmentExecute_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IAttachmentExecute_Execute(This,hwnd,pszVerb,phProcess)	\
    ( (This)->lpVtbl -> Execute(This,hwnd,pszVerb,phProcess) ) 

#define IAttachmentExecute_SaveWithUI(This,hwnd)	\
    ( (This)->lpVtbl -> SaveWithUI(This,hwnd) ) 

#define IAttachmentExecute_ClearClientState(This)	\
    ( (This)->lpVtbl -> ClearClientState(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAttachmentExecute_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0107 */
/* [local] */ 

#endif  // _WIN32_IE_IE60SP2
#if (_WIN32_IE >= _WIN32_IE_IE60)
#include <pshpack8.h>
typedef struct tagSMDATA
    {
    DWORD dwMask;
    DWORD dwFlags;
    HMENU hmenu;
    HWND hwnd;
    UINT uId;
    UINT uIdParent;
    UINT uIdAncestor;
    IUnknown *punk;
    PIDLIST_ABSOLUTE pidlFolder;
    PUITEMID_CHILD pidlItem;
    IShellFolder *psf;
    void *pvUserData;
    } 	SMDATA;

typedef struct tagSMDATA *LPSMDATA;

// Mask
#define SMDM_SHELLFOLDER               0x00000001  // This is for an item in the band
#define SMDM_HMENU                     0x00000002  // This is for the Band itself
#define SMDM_TOOLBAR                   0x00000004  // Plain toolbar, not associated with a shell folder or hmenu
// Flags (bitmask)
typedef struct tagSMINFO
    {
    DWORD dwMask;
    DWORD dwType;
    DWORD dwFlags;
    int iIcon;
    } 	SMINFO;

typedef struct tagSMINFO *PSMINFO;

typedef struct SHCSCHANGENOTIFYSTRUCT
    {
    long lEvent;
    PCIDLIST_ABSOLUTE pidl1;
    PCIDLIST_ABSOLUTE pidl2;
    } 	SMCSHCHANGENOTIFYSTRUCT;

typedef struct SHCSCHANGENOTIFYSTRUCT *PSMCSHCHANGENOTIFYSTRUCT;

#include <poppack.h>

enum tagSMINFOMASK
    {
        SMIM_TYPE	= 0x1,
        SMIM_FLAGS	= 0x2,
        SMIM_ICON	= 0x4
    } ;

enum tagSMINFOTYPE
    {
        SMIT_SEPARATOR	= 0x1,
        SMIT_STRING	= 0x2
    } ;

enum tagSMINFOFLAGS
    {
        SMIF_ICON	= 0x1,
        SMIF_ACCELERATOR	= 0x2,
        SMIF_DROPTARGET	= 0x4,
        SMIF_SUBMENU	= 0x8,
        SMIF_CHECKED	= 0x20,
        SMIF_DROPCASCADE	= 0x40,
        SMIF_HIDDEN	= 0x80,
        SMIF_DISABLED	= 0x100,
        SMIF_TRACKPOPUP	= 0x200,
        SMIF_DEMOTED	= 0x400,
        SMIF_ALTSTATE	= 0x800,
        SMIF_DRAGNDROP	= 0x1000,
        SMIF_NEW	= 0x2000
    } ;
#define SMC_INITMENU            0x00000001  // The callback is called to init a menuband
#define SMC_CREATE              0x00000002
#define SMC_EXITMENU            0x00000003  // The callback is called when menu is collapsing
#define SMC_GETINFO             0x00000005  // The callback is called to return DWORD values
#define SMC_GETSFINFO           0x00000006  // The callback is called to return DWORD values
#define SMC_GETOBJECT           0x00000007  // The callback is called to get some object
#define SMC_GETSFOBJECT         0x00000008  // The callback is called to get some object
#define SMC_SFEXEC              0x00000009  // The callback is called to execute an shell folder item
#define SMC_SFSELECTITEM        0x0000000A  // The callback is called when an item is selected
#define SMC_REFRESH             0x00000010  // Menus have completely refreshed. Reset your state.
#define SMC_DEMOTE              0x00000011  // Demote an item
#define SMC_PROMOTE             0x00000012  // Promote an item, wParam = SMINV_* flag
#define SMC_DEFAULTICON         0x00000016  // Returns Default icon location in wParam, index in lParam
#define SMC_NEWITEM             0x00000017  // Notifies item is not in the order stream.
#define SMC_CHEVRONEXPAND       0x00000019  // Notifies of a expansion via the chevron
#define SMC_DISPLAYCHEVRONTIP   0x0000002A  // S_OK display, S_FALSE not.
#define SMC_SETSFOBJECT         0x0000002D  // Called to save the passed object
#define SMC_SHCHANGENOTIFY      0x0000002E  // Called when a Change notify is received. lParam points to SMCSHCHANGENOTIFYSTRUCT
#define SMC_CHEVRONGETTIP       0x0000002F  // Called to get the chevron tip text. wParam = Tip title, Lparam = TipText Both MAX_PATH
#define SMC_SFDDRESTRICTED      0x00000030  // Called requesting if it's ok to drop. wParam = IDropTarget.
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMC_SFEXEC_MIDDLE       0x00000031  // Same as SFEXEC, but the middle mouse button caused the exec.
#define SMC_GETAUTOEXPANDSTATE  0x00000041  // callback returns the default autoexpand state lParam = LPDWORD to recieve flags
#define SMC_AUTOEXPANDCHANGE    0x00000042  // Notify that the menu is expanding/contracting
#define SMC_GETCONTEXTMENUMODIFIER 0x00000043  // Used to add items to a context menu
#define SMC_GETBKCONTEXTMENU    0x00000044  // used to get a context menu to display when user right clicks on the background
#define SMC_OPEN                0x00000045  // allows client to overwrite open/explore verb action on an item
// Flags for return value from SMC_GETAUTOEXPANDSTATE and SMC_AUTOEXPANDCHANGE:
#define SMAE_EXPANDED           0x00000001  // The menu is or should start expanded
#define SMAE_CONTRACTED         0x00000002  // The menu is or should start contracted
                                            // SMAE_EXPANDED and SMAE_CONTRACTED are mutually exclusive
#define SMAE_USER               0x00000004  // Indicates that the menu expansion/contraction is a reflection
                                            // of user choice
#define SMAE_VALID              0x00000007
#endif  // _WIN32_IE_IE70


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0107_v0_0_s_ifspec;

#ifndef __IShellMenuCallback_INTERFACE_DEFINED__
#define __IShellMenuCallback_INTERFACE_DEFINED__

/* interface IShellMenuCallback */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IShellMenuCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CA300A1-9B8D-11d1-8B22-00C04FD918D0")
    IShellMenuCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CallbackSM( 
            /* [annotation][out][in] */ 
            _Inout_  LPSMDATA psmd,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellMenuCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellMenuCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellMenuCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellMenuCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *CallbackSM )( 
            IShellMenuCallback * This,
            /* [annotation][out][in] */ 
            _Inout_  LPSMDATA psmd,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam);
        
        END_INTERFACE
    } IShellMenuCallbackVtbl;

    interface IShellMenuCallback
    {
        CONST_VTBL struct IShellMenuCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellMenuCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellMenuCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellMenuCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellMenuCallback_CallbackSM(This,psmd,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> CallbackSM(This,psmd,uMsg,wParam,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellMenuCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0108 */
/* [local] */ 

#define SMINIT_DEFAULT              0x00000000  // No Options
#define SMINIT_RESTRICT_DRAGDROP    0x00000002  // Don't allow Drag and Drop
#define SMINIT_TOPLEVEL             0x00000004  // This is the top band.
#define SMINIT_CACHED               0x00000010
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMINIT_AUTOEXPAND           0x00000100  // automatically expand/contract menu band
#define SMINIT_AUTOTOOLTIP          0x00000200  // regular tooltip support
#define SMINIT_DROPONCONTAINER      0x00000400  // allow drop on a container
#endif  // _WIN32_IE_IE70
#define SMINIT_VERTICAL             0x10000000  // This is a vertical menu
#define SMINIT_HORIZONTAL           0x20000000  // This is a horizontal menu    (does not inherit)
#define ANCESTORDEFAULT      (UINT)-1
#define SMSET_TOP                   0x10000000    // Bias this namespace to the top of the menu
#define SMSET_BOTTOM                0x20000000    // Bias this namespace to the bottom of the menu
#define SMSET_DONTOWN               0x00000001    // The Menuband doesn't own the non-ref counted object
#define SMINV_REFRESH        0x00000001
#define SMINV_ID             0x00000008


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0108_v0_0_s_ifspec;

#ifndef __IShellMenu_INTERFACE_DEFINED__
#define __IShellMenu_INTERFACE_DEFINED__

/* interface IShellMenu */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IShellMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE1F7637-E138-11d1-8379-00C04FD918D0")
    IShellMenu : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [annotation][unique][in] */ 
            _In_opt_  IShellMenuCallback *psmc,
            /* [annotation][in] */ 
            _In_  UINT uId,
            /* [annotation][in] */ 
            _In_  UINT uIdAncestor,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMenuInfo( 
            /* [annotation][out] */ 
            _Outptr_opt_  IShellMenuCallback **ppsmc,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puId,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puIdAncestor,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShellFolder( 
            /* [annotation][unique][in] */ 
            _In_opt_  IShellFolder *psf,
            /* [annotation][unique][in] */ 
            _In_opt_  PCIDLIST_ABSOLUTE pidlFolder,
            /* [annotation][unique][in] */ 
            _In_opt_  HKEY hKey,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShellFolder( 
            /* [annotation][out] */ 
            _Out_  DWORD *pdwFlags,
            /* [annotation][out] */ 
            _Outptr_  PIDLIST_ABSOLUTE *ppidl,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenu( 
            /* [annotation][unique][in] */ 
            _In_opt_  HMENU hmenu,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMenu( 
            /* [annotation][out] */ 
            _Out_opt_  HMENU *phmenu,
            /* [annotation][out] */ 
            _Out_opt_  HWND *phwnd,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvalidateItem( 
            /* [annotation][in] */ 
            _In_opt_  LPSMDATA psmd,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [annotation][out] */ 
            _Out_  LPSMDATA psmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenuToolbar( 
            /* [annotation][in] */ 
            _In_  IUnknown *punk,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellMenu * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IShellMenu * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IShellMenuCallback *psmc,
            /* [annotation][in] */ 
            _In_  UINT uId,
            /* [annotation][in] */ 
            _In_  UINT uIdAncestor,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetMenuInfo )( 
            IShellMenu * This,
            /* [annotation][out] */ 
            _Outptr_opt_  IShellMenuCallback **ppsmc,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puId,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puIdAncestor,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetShellFolder )( 
            IShellMenu * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IShellFolder *psf,
            /* [annotation][unique][in] */ 
            _In_opt_  PCIDLIST_ABSOLUTE pidlFolder,
            /* [annotation][unique][in] */ 
            _In_opt_  HKEY hKey,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetShellFolder )( 
            IShellMenu * This,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwFlags,
            /* [annotation][out] */ 
            _Outptr_  PIDLIST_ABSOLUTE *ppidl,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Outptr_  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenu )( 
            IShellMenu * This,
            /* [annotation][unique][in] */ 
            _In_opt_  HMENU hmenu,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetMenu )( 
            IShellMenu * This,
            /* [annotation][out] */ 
            _Out_opt_  HMENU *phmenu,
            /* [annotation][out] */ 
            _Out_opt_  HWND *phwnd,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvalidateItem )( 
            IShellMenu * This,
            /* [annotation][in] */ 
            _In_opt_  LPSMDATA psmd,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IShellMenu * This,
            /* [annotation][out] */ 
            _Out_  LPSMDATA psmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenuToolbar )( 
            IShellMenu * This,
            /* [annotation][in] */ 
            _In_  IUnknown *punk,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags);
        
        END_INTERFACE
    } IShellMenuVtbl;

    interface IShellMenu
    {
        CONST_VTBL struct IShellMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellMenu_Initialize(This,psmc,uId,uIdAncestor,dwFlags)	\
    ( (This)->lpVtbl -> Initialize(This,psmc,uId,uIdAncestor,dwFlags) ) 

#define IShellMenu_GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags)	\
    ( (This)->lpVtbl -> GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) ) 

#define IShellMenu_SetShellFolder(This,psf,pidlFolder,hKey,dwFlags)	\
    ( (This)->lpVtbl -> SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) ) 

#define IShellMenu_GetShellFolder(This,pdwFlags,ppidl,riid,ppv)	\
    ( (This)->lpVtbl -> GetShellFolder(This,pdwFlags,ppidl,riid,ppv) ) 

#define IShellMenu_SetMenu(This,hmenu,hwnd,dwFlags)	\
    ( (This)->lpVtbl -> SetMenu(This,hmenu,hwnd,dwFlags) ) 

#define IShellMenu_GetMenu(This,phmenu,phwnd,pdwFlags)	\
    ( (This)->lpVtbl -> GetMenu(This,phmenu,phwnd,pdwFlags) ) 

#define IShellMenu_InvalidateItem(This,psmd,dwFlags)	\
    ( (This)->lpVtbl -> InvalidateItem(This,psmd,dwFlags) ) 

#define IShellMenu_GetState(This,psmd)	\
    ( (This)->lpVtbl -> GetState(This,psmd) ) 

#define IShellMenu_SetMenuToolbar(This,punk,dwFlags)	\
    ( (This)->lpVtbl -> SetMenuToolbar(This,punk,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellMenu_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0109 */
/* [local] */ 

#endif  // _WIN32_IE_IE60
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef /* [v1_enum] */ 
enum KF_CATEGORY
    {
        KF_CATEGORY_VIRTUAL	= 1,
        KF_CATEGORY_FIXED	= 2,
        KF_CATEGORY_COMMON	= 3,
        KF_CATEGORY_PERUSER	= 4
    } 	KF_CATEGORY;

/* [v1_enum] */ 
enum _KF_DEFINITION_FLAGS
    {
        KFDF_LOCAL_REDIRECT_ONLY	= 0x2,
        KFDF_ROAMABLE	= 0x4,
        KFDF_PRECREATE	= 0x8,
        KFDF_STREAM	= 0x10,
        KFDF_PUBLISHEXPANDEDPATH	= 0x20,
        KFDF_NO_REDIRECT_UI	= 0x40
    } ;
typedef DWORD KF_DEFINITION_FLAGS;

/* [v1_enum] */ 
enum _KF_REDIRECT_FLAGS
    {
        KF_REDIRECT_USER_EXCLUSIVE	= 0x1,
        KF_REDIRECT_COPY_SOURCE_DACL	= 0x2,
        KF_REDIRECT_OWNER_USER	= 0x4,
        KF_REDIRECT_SET_OWNER_EXPLICIT	= 0x8,
        KF_REDIRECT_CHECK_ONLY	= 0x10,
        KF_REDIRECT_WITH_UI	= 0x20,
        KF_REDIRECT_UNPIN	= 0x40,
        KF_REDIRECT_PIN	= 0x80,
        KF_REDIRECT_COPY_CONTENTS	= 0x200,
        KF_REDIRECT_DEL_SOURCE_CONTENTS	= 0x400,
        KF_REDIRECT_EXCLUDE_ALL_KNOWN_SUBFOLDERS	= 0x800
    } ;
typedef DWORD KF_REDIRECT_FLAGS;

/* [v1_enum] */ 
enum _KF_REDIRECTION_CAPABILITIES
    {
        KF_REDIRECTION_CAPABILITIES_ALLOW_ALL	= 0xff,
        KF_REDIRECTION_CAPABILITIES_REDIRECTABLE	= 0x1,
        KF_REDIRECTION_CAPABILITIES_DENY_ALL	= 0xfff00,
        KF_REDIRECTION_CAPABILITIES_DENY_POLICY_REDIRECTED	= 0x100,
        KF_REDIRECTION_CAPABILITIES_DENY_POLICY	= 0x200,
        KF_REDIRECTION_CAPABILITIES_DENY_PERMISSIONS	= 0x400
    } ;
typedef DWORD KF_REDIRECTION_CAPABILITIES;

typedef struct KNOWNFOLDER_DEFINITION
    {
    KF_CATEGORY category;
    LPWSTR pszName;
    LPWSTR pszDescription;
    KNOWNFOLDERID fidParent;
    LPWSTR pszRelativePath;
    LPWSTR pszParsingName;
    LPWSTR pszTooltip;
    LPWSTR pszLocalizedName;
    LPWSTR pszIcon;
    LPWSTR pszSecurity;
    DWORD dwAttributes;
    KF_DEFINITION_FLAGS kfdFlags;
    FOLDERTYPEID ftidType;
    } 	KNOWNFOLDER_DEFINITION;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0109_v0_0_s_ifspec;

#ifndef __IKnownFolder_INTERFACE_DEFINED__
#define __IKnownFolder_INTERFACE_DEFINED__

/* interface IKnownFolder */
/* [ref][version][object][uuid] */ 


EXTERN_C const IID IID_IKnownFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3AA7AF7E-9B36-420c-A8E3-F77D4674A488")
    IKnownFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out] */ __RPC__out KNOWNFOLDERID *pkfid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [out] */ __RPC__out KF_CATEGORY *pCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShellItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [in] */ DWORD dwFlags,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderType( 
            /* [out] */ __RPC__out FOLDERTYPEID *pftid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRedirectionCapabilities( 
            /* [out] */ __RPC__out KF_REDIRECTION_CAPABILITIES *pCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderDefinition( 
            /* [out] */ __RPC__out KNOWNFOLDER_DEFINITION *pKFD) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKnownFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IKnownFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IKnownFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IKnownFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            __RPC__in IKnownFolder * This,
            /* [out] */ __RPC__out KNOWNFOLDERID *pkfid);
        
        HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            __RPC__in IKnownFolder * This,
            /* [out] */ __RPC__out KF_CATEGORY *pCategory);
        
        HRESULT ( STDMETHODCALLTYPE *GetShellItem )( 
            __RPC__in IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            __RPC__in IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            __RPC__in IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            __RPC__in IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderType )( 
            __RPC__in IKnownFolder * This,
            /* [out] */ __RPC__out FOLDERTYPEID *pftid);
        
        HRESULT ( STDMETHODCALLTYPE *GetRedirectionCapabilities )( 
            __RPC__in IKnownFolder * This,
            /* [out] */ __RPC__out KF_REDIRECTION_CAPABILITIES *pCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderDefinition )( 
            __RPC__in IKnownFolder * This,
            /* [out] */ __RPC__out KNOWNFOLDER_DEFINITION *pKFD);
        
        END_INTERFACE
    } IKnownFolderVtbl;

    interface IKnownFolder
    {
        CONST_VTBL struct IKnownFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKnownFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKnownFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKnownFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKnownFolder_GetId(This,pkfid)	\
    ( (This)->lpVtbl -> GetId(This,pkfid) ) 

#define IKnownFolder_GetCategory(This,pCategory)	\
    ( (This)->lpVtbl -> GetCategory(This,pCategory) ) 

#define IKnownFolder_GetShellItem(This,dwFlags,riid,ppv)	\
    ( (This)->lpVtbl -> GetShellItem(This,dwFlags,riid,ppv) ) 

#define IKnownFolder_GetPath(This,dwFlags,ppszPath)	\
    ( (This)->lpVtbl -> GetPath(This,dwFlags,ppszPath) ) 

#define IKnownFolder_SetPath(This,dwFlags,pszPath)	\
    ( (This)->lpVtbl -> SetPath(This,dwFlags,pszPath) ) 

#define IKnownFolder_GetIDList(This,dwFlags,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,dwFlags,ppidl) ) 

#define IKnownFolder_GetFolderType(This,pftid)	\
    ( (This)->lpVtbl -> GetFolderType(This,pftid) ) 

#define IKnownFolder_GetRedirectionCapabilities(This,pCapabilities)	\
    ( (This)->lpVtbl -> GetRedirectionCapabilities(This,pCapabilities) ) 

#define IKnownFolder_GetFolderDefinition(This,pKFD)	\
    ( (This)->lpVtbl -> GetFolderDefinition(This,pKFD) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKnownFolder_INTERFACE_DEFINED__ */


#ifndef __IKnownFolderManager_INTERFACE_DEFINED__
#define __IKnownFolderManager_INTERFACE_DEFINED__

/* interface IKnownFolderManager */
/* [ref][version][object][uuid] */ 

typedef /* [v1_enum] */ 
enum FFFP_MODE
    {
        FFFP_EXACTMATCH	= 0,
        FFFP_NEARESTPARENTMATCH	= ( FFFP_EXACTMATCH + 1 ) 
    } 	FFFP_MODE;


EXTERN_C const IID IID_IKnownFolderManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BE2D872-86AA-4d47-B776-32CCA40C7018")
    IKnownFolderManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FolderIdFromCsidl( 
            /* [in] */ int nCsidl,
            /* [out] */ __RPC__out KNOWNFOLDERID *pfid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderIdToCsidl( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__out int *pnCsidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderIds( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) KNOWNFOLDERID **ppKFId,
            /* [out][in] */ __RPC__inout UINT *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderByName( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszCanonicalName,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [in] */ __RPC__in const KNOWNFOLDER_DEFINITION *pKFD) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFolderFromPath( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszPath,
            /* [in] */ FFFP_MODE mode,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFolderFromIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Redirect( 
            /* [annotation][in] */ 
            _In_  REFKNOWNFOLDERID rfid,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  KF_REDIRECT_FLAGS flags,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszTargetPath,
            /* [annotation][in] */ 
            _In_  UINT cFolders,
            /* [annotation][unique][size_is][in] */ 
            _In_reads_opt_(cFolders)  const KNOWNFOLDERID *pExclusion,
            /* [annotation][string][out] */ 
            _Outptr_opt_result_maybenull_  LPWSTR *ppszError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKnownFolderManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IKnownFolderManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IKnownFolderManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *FolderIdFromCsidl )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ int nCsidl,
            /* [out] */ __RPC__out KNOWNFOLDERID *pfid);
        
        HRESULT ( STDMETHODCALLTYPE *FolderIdToCsidl )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__out int *pnCsidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderIds )( 
            __RPC__in IKnownFolderManager * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) KNOWNFOLDERID **ppKFId,
            /* [out][in] */ __RPC__inout UINT *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderByName )( 
            __RPC__in IKnownFolderManager * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCanonicalName,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterFolder )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [in] */ __RPC__in const KNOWNFOLDER_DEFINITION *pKFD);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterFolder )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid);
        
        HRESULT ( STDMETHODCALLTYPE *FindFolderFromPath )( 
            __RPC__in IKnownFolderManager * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPath,
            /* [in] */ FFFP_MODE mode,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *FindFolderFromIDList )( 
            __RPC__in IKnownFolderManager * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Redirect )( 
            IKnownFolderManager * This,
            /* [annotation][in] */ 
            _In_  REFKNOWNFOLDERID rfid,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwnd,
            /* [annotation][in] */ 
            _In_  KF_REDIRECT_FLAGS flags,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszTargetPath,
            /* [annotation][in] */ 
            _In_  UINT cFolders,
            /* [annotation][unique][size_is][in] */ 
            _In_reads_opt_(cFolders)  const KNOWNFOLDERID *pExclusion,
            /* [annotation][string][out] */ 
            _Outptr_opt_result_maybenull_  LPWSTR *ppszError);
        
        END_INTERFACE
    } IKnownFolderManagerVtbl;

    interface IKnownFolderManager
    {
        CONST_VTBL struct IKnownFolderManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKnownFolderManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKnownFolderManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKnownFolderManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKnownFolderManager_FolderIdFromCsidl(This,nCsidl,pfid)	\
    ( (This)->lpVtbl -> FolderIdFromCsidl(This,nCsidl,pfid) ) 

#define IKnownFolderManager_FolderIdToCsidl(This,rfid,pnCsidl)	\
    ( (This)->lpVtbl -> FolderIdToCsidl(This,rfid,pnCsidl) ) 

#define IKnownFolderManager_GetFolderIds(This,ppKFId,pCount)	\
    ( (This)->lpVtbl -> GetFolderIds(This,ppKFId,pCount) ) 

#define IKnownFolderManager_GetFolder(This,rfid,ppkf)	\
    ( (This)->lpVtbl -> GetFolder(This,rfid,ppkf) ) 

#define IKnownFolderManager_GetFolderByName(This,pszCanonicalName,ppkf)	\
    ( (This)->lpVtbl -> GetFolderByName(This,pszCanonicalName,ppkf) ) 

#define IKnownFolderManager_RegisterFolder(This,rfid,pKFD)	\
    ( (This)->lpVtbl -> RegisterFolder(This,rfid,pKFD) ) 

#define IKnownFolderManager_UnregisterFolder(This,rfid)	\
    ( (This)->lpVtbl -> UnregisterFolder(This,rfid) ) 

#define IKnownFolderManager_FindFolderFromPath(This,pszPath,mode,ppkf)	\
    ( (This)->lpVtbl -> FindFolderFromPath(This,pszPath,mode,ppkf) ) 

#define IKnownFolderManager_FindFolderFromIDList(This,pidl,ppkf)	\
    ( (This)->lpVtbl -> FindFolderFromIDList(This,pidl,ppkf) ) 

#define IKnownFolderManager_Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError)	\
    ( (This)->lpVtbl -> Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IKnownFolderManager_RemoteRedirect_Proxy( 
    __RPC__in IKnownFolderManager * This,
    /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
    /* [unique][in] */ __RPC__in_opt HWND hwnd,
    /* [in] */ KF_REDIRECT_FLAGS flags,
    /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTargetPath,
    /* [in] */ UINT cFolders,
    /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cFolders) const GUID *pExclusion,
    /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszError);


void __RPC_STUB IKnownFolderManager_RemoteRedirect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IKnownFolderManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0111 */
/* [local] */ 

__inline void FreeKnownFolderDefinitionFields(_In_ KNOWNFOLDER_DEFINITION *pKFD)
{
    CoTaskMemFree(pKFD->pszName);
    CoTaskMemFree(pKFD->pszDescription);
    CoTaskMemFree(pKFD->pszRelativePath);
    CoTaskMemFree(pKFD->pszParsingName);
    CoTaskMemFree(pKFD->pszTooltip);
    CoTaskMemFree(pKFD->pszLocalizedName);
    CoTaskMemFree(pKFD->pszIcon);
    CoTaskMemFree(pKFD->pszSecurity);
}
typedef /* [v1_enum] */ 
enum SHARE_ROLE
    {
        SHARE_ROLE_INVALID	= -1,
        SHARE_ROLE_READER	= 0,
        SHARE_ROLE_CONTRIBUTOR	= 1,
        SHARE_ROLE_CO_OWNER	= 2,
        SHARE_ROLE_OWNER	= 3,
        SHARE_ROLE_CUSTOM	= 4,
        SHARE_ROLE_MIXED	= 5
    } 	SHARE_ROLE;

typedef /* [v1_enum] */ 
enum DEF_SHARE_ID
    {
        DEFSHAREID_USERS	= 1,
        DEFSHAREID_PUBLIC	= 2
    } 	DEF_SHARE_ID;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0111_v0_0_s_ifspec;

#ifndef __ISharingConfigurationManager_INTERFACE_DEFINED__
#define __ISharingConfigurationManager_INTERFACE_DEFINED__

/* interface ISharingConfigurationManager */
/* [uuid][object] */ 


EXTERN_C const IID IID_ISharingConfigurationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4CD448A-9C86-4466-9201-2E62105B87AE")
    ISharingConfigurationManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateShare( 
            /* [in] */ DEF_SHARE_ID dsid,
            /* [in] */ SHARE_ROLE role) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteShare( 
            /* [in] */ DEF_SHARE_ID dsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShareExists( 
            /* [in] */ DEF_SHARE_ID dsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSharePermissions( 
            /* [in] */ DEF_SHARE_ID dsid,
            /* [out] */ __RPC__out SHARE_ROLE *pRole) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SharePrinters( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopSharingPrinters( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ArePrintersShared( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISharingConfigurationManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISharingConfigurationManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISharingConfigurationManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISharingConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateShare )( 
            __RPC__in ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid,
            /* [in] */ SHARE_ROLE role);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteShare )( 
            __RPC__in ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid);
        
        HRESULT ( STDMETHODCALLTYPE *ShareExists )( 
            __RPC__in ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSharePermissions )( 
            __RPC__in ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid,
            /* [out] */ __RPC__out SHARE_ROLE *pRole);
        
        HRESULT ( STDMETHODCALLTYPE *SharePrinters )( 
            __RPC__in ISharingConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *StopSharingPrinters )( 
            __RPC__in ISharingConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ArePrintersShared )( 
            __RPC__in ISharingConfigurationManager * This);
        
        END_INTERFACE
    } ISharingConfigurationManagerVtbl;

    interface ISharingConfigurationManager
    {
        CONST_VTBL struct ISharingConfigurationManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISharingConfigurationManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISharingConfigurationManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISharingConfigurationManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISharingConfigurationManager_CreateShare(This,dsid,role)	\
    ( (This)->lpVtbl -> CreateShare(This,dsid,role) ) 

#define ISharingConfigurationManager_DeleteShare(This,dsid)	\
    ( (This)->lpVtbl -> DeleteShare(This,dsid) ) 

#define ISharingConfigurationManager_ShareExists(This,dsid)	\
    ( (This)->lpVtbl -> ShareExists(This,dsid) ) 

#define ISharingConfigurationManager_GetSharePermissions(This,dsid,pRole)	\
    ( (This)->lpVtbl -> GetSharePermissions(This,dsid,pRole) ) 

#define ISharingConfigurationManager_SharePrinters(This)	\
    ( (This)->lpVtbl -> SharePrinters(This) ) 

#define ISharingConfigurationManager_StopSharingPrinters(This)	\
    ( (This)->lpVtbl -> StopSharingPrinters(This) ) 

#define ISharingConfigurationManager_ArePrintersShared(This)	\
    ( (This)->lpVtbl -> ArePrintersShared(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISharingConfigurationManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0112 */
/* [local] */ 

#endif  // NTDDI_VISTA
#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0112_v0_0_s_ifspec;

#ifndef __IRelatedItem_INTERFACE_DEFINED__
#define __IRelatedItem_INTERFACE_DEFINED__

/* interface IRelatedItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IRelatedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a73ce67a-8ab1-44f1-8d43-d2fcbf6b1cd0")
    IRelatedItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItemIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRelatedItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRelatedItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRelatedItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRelatedItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in IRelatedItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IRelatedItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IRelatedItemVtbl;

    interface IRelatedItem
    {
        CONST_VTBL struct IRelatedItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRelatedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRelatedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRelatedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRelatedItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IRelatedItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRelatedItem_INTERFACE_DEFINED__ */


#ifndef __IIdentityName_INTERFACE_DEFINED__
#define __IIdentityName_INTERFACE_DEFINED__

/* interface IIdentityName */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IIdentityName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7d903fca-d6f9-4810-8332-946c0177e247")
    IIdentityName : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIdentityNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IIdentityName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IIdentityName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IIdentityName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in IIdentityName * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IIdentityName * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IIdentityNameVtbl;

    interface IIdentityName
    {
        CONST_VTBL struct IIdentityNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIdentityName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIdentityName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIdentityName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIdentityName_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IIdentityName_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIdentityName_INTERFACE_DEFINED__ */


#ifndef __IDelegateItem_INTERFACE_DEFINED__
#define __IDelegateItem_INTERFACE_DEFINED__

/* interface IDelegateItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDelegateItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3c5a1c94-c951-4cb7-bb6d-3b93f30cce93")
    IDelegateItem : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDelegateItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDelegateItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDelegateItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDelegateItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in IDelegateItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IDelegateItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IDelegateItemVtbl;

    interface IDelegateItem
    {
        CONST_VTBL struct IDelegateItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDelegateItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDelegateItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDelegateItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDelegateItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IDelegateItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDelegateItem_INTERFACE_DEFINED__ */


#ifndef __ICurrentItem_INTERFACE_DEFINED__
#define __ICurrentItem_INTERFACE_DEFINED__

/* interface ICurrentItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ICurrentItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("240a7174-d653-4a1d-a6d3-d4943cfbfe3d")
    ICurrentItem : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ICurrentItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICurrentItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICurrentItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICurrentItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in ICurrentItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in ICurrentItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } ICurrentItemVtbl;

    interface ICurrentItem
    {
        CONST_VTBL struct ICurrentItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICurrentItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICurrentItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICurrentItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICurrentItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define ICurrentItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICurrentItem_INTERFACE_DEFINED__ */


#ifndef __ITransferMediumItem_INTERFACE_DEFINED__
#define __ITransferMediumItem_INTERFACE_DEFINED__

/* interface ITransferMediumItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITransferMediumItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77f295d5-2d6f-4e19-b8ae-322f3e721ab5")
    ITransferMediumItem : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ITransferMediumItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ITransferMediumItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ITransferMediumItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ITransferMediumItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in ITransferMediumItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in ITransferMediumItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } ITransferMediumItemVtbl;

    interface ITransferMediumItem
    {
        CONST_VTBL struct ITransferMediumItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferMediumItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferMediumItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferMediumItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferMediumItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define ITransferMediumItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferMediumItem_INTERFACE_DEFINED__ */


#ifndef __IDisplayItem_INTERFACE_DEFINED__
#define __IDisplayItem_INTERFACE_DEFINED__

/* interface IDisplayItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDisplayItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c6fd5997-9f6b-4888-8703-94e80e8cde3f")
    IDisplayItem : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDisplayItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDisplayItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDisplayItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDisplayItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in IDisplayItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IDisplayItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IDisplayItemVtbl;

    interface IDisplayItem
    {
        CONST_VTBL struct IDisplayItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDisplayItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDisplayItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDisplayItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDisplayItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IDisplayItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDisplayItem_INTERFACE_DEFINED__ */


#ifndef __IViewStateIdentityItem_INTERFACE_DEFINED__
#define __IViewStateIdentityItem_INTERFACE_DEFINED__

/* interface IViewStateIdentityItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IViewStateIdentityItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9D264146-A94F-4195-9F9F-3BB12CE0C955")
    IViewStateIdentityItem : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IViewStateIdentityItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IViewStateIdentityItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IViewStateIdentityItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IViewStateIdentityItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in IViewStateIdentityItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IViewStateIdentityItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IViewStateIdentityItemVtbl;

    interface IViewStateIdentityItem
    {
        CONST_VTBL struct IViewStateIdentityItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewStateIdentityItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewStateIdentityItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewStateIdentityItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewStateIdentityItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IViewStateIdentityItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewStateIdentityItem_INTERFACE_DEFINED__ */


#ifndef __IPreviewItem_INTERFACE_DEFINED__
#define __IPreviewItem_INTERFACE_DEFINED__

/* interface IPreviewItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPreviewItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36149969-0A8F-49c8-8B00-4AECB20222FB")
    IPreviewItem : public IRelatedItem
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IPreviewItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPreviewItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPreviewItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPreviewItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            __RPC__in IPreviewItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            __RPC__in IPreviewItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IPreviewItemVtbl;

    interface IPreviewItem
    {
        CONST_VTBL struct IPreviewItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IPreviewItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0120 */
/* [local] */ 

#endif  // NTDDI_VISTA


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0120_v0_0_s_ifspec;

#ifndef __IDestinationStreamFactory_INTERFACE_DEFINED__
#define __IDestinationStreamFactory_INTERFACE_DEFINED__

/* interface IDestinationStreamFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IDestinationStreamFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8a87781b-39a7-4a1f-aab3-a39b9c34a7d9")
    IDestinationStreamFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDestinationStream( 
            /* [out] */ __RPC__deref_out_opt IStream **ppstm) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDestinationStreamFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDestinationStreamFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDestinationStreamFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDestinationStreamFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDestinationStream )( 
            __RPC__in IDestinationStreamFactory * This,
            /* [out] */ __RPC__deref_out_opt IStream **ppstm);
        
        END_INTERFACE
    } IDestinationStreamFactoryVtbl;

    interface IDestinationStreamFactory
    {
        CONST_VTBL struct IDestinationStreamFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDestinationStreamFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDestinationStreamFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDestinationStreamFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDestinationStreamFactory_GetDestinationStream(This,ppstm)	\
    ( (This)->lpVtbl -> GetDestinationStream(This,ppstm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDestinationStreamFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0121 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0121_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0121_v0_0_s_ifspec;

#ifndef __ICreateProcessInputs_INTERFACE_DEFINED__
#define __ICreateProcessInputs_INTERFACE_DEFINED__

/* interface ICreateProcessInputs */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICreateProcessInputs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6EF6140-E26F-4D82-bAC4-E9BA5FD239A8")
    ICreateProcessInputs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCreateFlags( 
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCreationFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCreateFlags( 
            /* [annotation][in] */ 
            _In_  DWORD dwCreationFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCreateFlags( 
            /* [annotation][in] */ 
            _In_  DWORD dwCreationFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotKey( 
            /* [annotation][in] */ 
            _In_  WORD wHotKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddStartupFlags( 
            /* [annotation][in] */ 
            _In_  DWORD dwStartupInfoFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnvironmentVariable( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICreateProcessInputsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICreateProcessInputs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICreateProcessInputs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICreateProcessInputs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCreateFlags )( 
            ICreateProcessInputs * This,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCreationFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetCreateFlags )( 
            ICreateProcessInputs * This,
            /* [annotation][in] */ 
            _In_  DWORD dwCreationFlags);
        
        HRESULT ( STDMETHODCALLTYPE *AddCreateFlags )( 
            ICreateProcessInputs * This,
            /* [annotation][in] */ 
            _In_  DWORD dwCreationFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotKey )( 
            ICreateProcessInputs * This,
            /* [annotation][in] */ 
            _In_  WORD wHotKey);
        
        HRESULT ( STDMETHODCALLTYPE *AddStartupFlags )( 
            ICreateProcessInputs * This,
            /* [annotation][in] */ 
            _In_  DWORD dwStartupInfoFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            ICreateProcessInputs * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnvironmentVariable )( 
            ICreateProcessInputs * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszValue);
        
        END_INTERFACE
    } ICreateProcessInputsVtbl;

    interface ICreateProcessInputs
    {
        CONST_VTBL struct ICreateProcessInputsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreateProcessInputs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICreateProcessInputs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICreateProcessInputs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICreateProcessInputs_GetCreateFlags(This,pdwCreationFlags)	\
    ( (This)->lpVtbl -> GetCreateFlags(This,pdwCreationFlags) ) 

#define ICreateProcessInputs_SetCreateFlags(This,dwCreationFlags)	\
    ( (This)->lpVtbl -> SetCreateFlags(This,dwCreationFlags) ) 

#define ICreateProcessInputs_AddCreateFlags(This,dwCreationFlags)	\
    ( (This)->lpVtbl -> AddCreateFlags(This,dwCreationFlags) ) 

#define ICreateProcessInputs_SetHotKey(This,wHotKey)	\
    ( (This)->lpVtbl -> SetHotKey(This,wHotKey) ) 

#define ICreateProcessInputs_AddStartupFlags(This,dwStartupInfoFlags)	\
    ( (This)->lpVtbl -> AddStartupFlags(This,dwStartupInfoFlags) ) 

#define ICreateProcessInputs_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define ICreateProcessInputs_SetEnvironmentVariable(This,pszName,pszValue)	\
    ( (This)->lpVtbl -> SetEnvironmentVariable(This,pszName,pszValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICreateProcessInputs_INTERFACE_DEFINED__ */


#ifndef __ICreatingProcess_INTERFACE_DEFINED__
#define __ICreatingProcess_INTERFACE_DEFINED__

/* interface ICreatingProcess */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICreatingProcess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c2b937a9-3110-4398-8a56-f34c6342d244")
    ICreatingProcess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCreating( 
            /* [annotation][in] */ 
            _In_  ICreateProcessInputs *pcpi) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICreatingProcessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICreatingProcess * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICreatingProcess * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICreatingProcess * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCreating )( 
            ICreatingProcess * This,
            /* [annotation][in] */ 
            _In_  ICreateProcessInputs *pcpi);
        
        END_INTERFACE
    } ICreatingProcessVtbl;

    interface ICreatingProcess
    {
        CONST_VTBL struct ICreatingProcessVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreatingProcess_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICreatingProcess_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICreatingProcess_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICreatingProcess_OnCreating(This,pcpi)	\
    ( (This)->lpVtbl -> OnCreating(This,pcpi) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICreatingProcess_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0123 */
/* [local] */ 

#define SID_ExecuteCreatingProcess __uuidof(ICreatingProcess)
#endif  // NTDDI_VISTA
/* [v1_enum] */ 
enum _NMCII_FLAGS
    {
        NMCII_NONE	= 0,
        NMCII_ITEMS	= 0x1,
        NMCII_FOLDERS	= 0x2
    } ;
typedef int NMCII_FLAGS;

/* [v1_enum] */ 
enum _NMCSAEI_FLAGS
    {
        NMCSAEI_SELECT	= 0,
        NMCSAEI_EDIT	= 0x1
    } ;
typedef int NMCSAEI_FLAGS;


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0123_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0123_v0_0_s_ifspec;

#ifndef __INewMenuClient_INTERFACE_DEFINED__
#define __INewMenuClient_INTERFACE_DEFINED__

/* interface INewMenuClient */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_INewMenuClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dcb07fdc-3bb5-451c-90be-966644fed7b0")
    INewMenuClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IncludeItems( 
            /* [out] */ __RPC__out NMCII_FLAGS *pflags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectAndEditItem( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlItem,
            /* [in] */ NMCSAEI_FLAGS flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INewMenuClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INewMenuClient * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INewMenuClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INewMenuClient * This);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeItems )( 
            __RPC__in INewMenuClient * This,
            /* [out] */ __RPC__out NMCII_FLAGS *pflags);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndEditItem )( 
            __RPC__in INewMenuClient * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlItem,
            /* [in] */ NMCSAEI_FLAGS flags);
        
        END_INTERFACE
    } INewMenuClientVtbl;

    interface INewMenuClient
    {
        CONST_VTBL struct INewMenuClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INewMenuClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INewMenuClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INewMenuClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INewMenuClient_IncludeItems(This,pflags)	\
    ( (This)->lpVtbl -> IncludeItems(This,pflags) ) 

#define INewMenuClient_SelectAndEditItem(This,pidlItem,flags)	\
    ( (This)->lpVtbl -> SelectAndEditItem(This,pidlItem,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INewMenuClient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0124 */
/* [local] */ 

#define SID_SNewMenuClient   IID_INewMenuClient
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0124_v0_0_s_ifspec;

#ifndef __IInitializeWithBindCtx_INTERFACE_DEFINED__
#define __IInitializeWithBindCtx_INTERFACE_DEFINED__

/* interface IInitializeWithBindCtx */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInitializeWithBindCtx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71c0d2bc-726d-45cc-a6c0-2e31c1db2159")
    IInitializeWithBindCtx : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IBindCtx *pbc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializeWithBindCtxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInitializeWithBindCtx * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInitializeWithBindCtx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInitializeWithBindCtx * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IInitializeWithBindCtx * This,
            /* [in] */ __RPC__in_opt IBindCtx *pbc);
        
        END_INTERFACE
    } IInitializeWithBindCtxVtbl;

    interface IInitializeWithBindCtx
    {
        CONST_VTBL struct IInitializeWithBindCtxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithBindCtx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeWithBindCtx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeWithBindCtx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeWithBindCtx_Initialize(This,pbc)	\
    ( (This)->lpVtbl -> Initialize(This,pbc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeWithBindCtx_INTERFACE_DEFINED__ */


#ifndef __IShellItemFilter_INTERFACE_DEFINED__
#define __IShellItemFilter_INTERFACE_DEFINED__

/* interface IShellItemFilter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IShellItemFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2659B475-EEB8-48b7-8F07-B378810F48CF")
    IShellItemFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IncludeItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumFlagsForItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out SHCONTF *pgrfFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItemFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItemFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItemFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeItem )( 
            __RPC__in IShellItemFilter * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumFlagsForItem )( 
            __RPC__in IShellItemFilter * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out SHCONTF *pgrfFlags);
        
        END_INTERFACE
    } IShellItemFilterVtbl;

    interface IShellItemFilter
    {
        CONST_VTBL struct IShellItemFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemFilter_IncludeItem(This,psi)	\
    ( (This)->lpVtbl -> IncludeItem(This,psi) ) 

#define IShellItemFilter_GetEnumFlagsForItem(This,psi,pgrfFlags)	\
    ( (This)->lpVtbl -> GetEnumFlagsForItem(This,psi,pgrfFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0126 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0126_v0_0_s_ifspec;

#ifndef __INameSpaceTreeControl_INTERFACE_DEFINED__
#define __INameSpaceTreeControl_INTERFACE_DEFINED__

/* interface INameSpaceTreeControl */
/* [uuid][object] */ 

/* [v1_enum] */ 
enum _NSTCSTYLE
    {
        NSTCS_HASEXPANDOS	= 0x1,
        NSTCS_HASLINES	= 0x2,
        NSTCS_SINGLECLICKEXPAND	= 0x4,
        NSTCS_FULLROWSELECT	= 0x8,
        NSTCS_SPRINGEXPAND	= 0x10,
        NSTCS_HORIZONTALSCROLL	= 0x20,
        NSTCS_ROOTHASEXPANDO	= 0x40,
        NSTCS_SHOWSELECTIONALWAYS	= 0x80,
        NSTCS_NOINFOTIP	= 0x200,
        NSTCS_EVENHEIGHT	= 0x400,
        NSTCS_NOREPLACEOPEN	= 0x800,
        NSTCS_DISABLEDRAGDROP	= 0x1000,
        NSTCS_NOORDERSTREAM	= 0x2000,
        NSTCS_RICHTOOLTIP	= 0x4000,
        NSTCS_BORDER	= 0x8000,
        NSTCS_NOEDITLABELS	= 0x10000,
        NSTCS_TABSTOP	= 0x20000,
        NSTCS_FAVORITESMODE	= 0x80000,
        NSTCS_AUTOHSCROLL	= 0x100000,
        NSTCS_FADEINOUTEXPANDOS	= 0x200000,
        NSTCS_EMPTYTEXT	= 0x400000,
        NSTCS_CHECKBOXES	= 0x800000,
        NSTCS_PARTIALCHECKBOXES	= 0x1000000,
        NSTCS_EXCLUSIONCHECKBOXES	= 0x2000000,
        NSTCS_DIMMEDCHECKBOXES	= 0x4000000,
        NSTCS_NOINDENTCHECKS	= 0x8000000,
        NSTCS_ALLOWJUNCTIONS	= 0x10000000,
        NSTCS_SHOWTABSBUTTON	= 0x20000000,
        NSTCS_SHOWDELETEBUTTON	= 0x40000000,
        NSTCS_SHOWREFRESHBUTTON	= ( int  )0x80000000
    } ;
typedef DWORD NSTCSTYLE;

/* [v1_enum] */ 
enum _NSTCROOTSTYLE
    {
        NSTCRS_VISIBLE	= 0,
        NSTCRS_HIDDEN	= 0x1,
        NSTCRS_EXPANDED	= 0x2
    } ;
typedef DWORD NSTCROOTSTYLE;

/* [v1_enum] */ 
enum _NSTCITEMSTATE
    {
        NSTCIS_NONE	= 0,
        NSTCIS_SELECTED	= 0x1,
        NSTCIS_EXPANDED	= 0x2,
        NSTCIS_BOLD	= 0x4,
        NSTCIS_DISABLED	= 0x8,
        NSTCIS_SELECTEDNOEXPAND	= 0x10
    } ;
typedef DWORD NSTCITEMSTATE;

typedef /* [v1_enum] */ 
enum NSTCGNI
    {
        NSTCGNI_NEXT	= 0,
        NSTCGNI_NEXTVISIBLE	= 1,
        NSTCGNI_PREV	= 2,
        NSTCGNI_PREVVISIBLE	= 3,
        NSTCGNI_PARENT	= 4,
        NSTCGNI_CHILD	= 5,
        NSTCGNI_FIRSTVISIBLE	= 6,
        NSTCGNI_LASTVISIBLE	= 7
    } 	NSTCGNI;


EXTERN_C const IID IID_INameSpaceTreeControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("028212A3-B627-47e9-8856-C14265554E4F")
    INameSpaceTreeControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in HWND hwndParent,
            /* [unique][in] */ __RPC__in_opt RECT *prc,
            /* [in] */ NSTCSTYLE nsctsFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TreeAdvise( 
            /* [in] */ __RPC__in_opt IUnknown *punk,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TreeUnadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendRoot( 
            /* [in] */ __RPC__in_opt IShellItem *psiRoot,
            /* [in] */ SHCONTF grfEnumFlags,
            /* [in] */ NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ __RPC__in_opt IShellItemFilter *pif) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertRoot( 
            /* [in] */ int iIndex,
            /* [in] */ __RPC__in_opt IShellItem *psiRoot,
            /* [in] */ SHCONTF grfEnumFlags,
            /* [in] */ NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ __RPC__in_opt IShellItemFilter *pif) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveRoot( 
            /* [in] */ __RPC__in_opt IShellItem *psiRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllRoots( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootItems( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsiaRootItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetItemState( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ NSTCITEMSTATE nstcisMask,
            /* [in] */ NSTCITEMSTATE nstcisFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemState( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ NSTCITEMSTATE nstcisMask,
            /* [out] */ __RPC__out NSTCITEMSTATE *pnstcisFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItems( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **psiaItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemCustomState( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out int *piStateNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetItemCustomState( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ int iStateNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnsureItemVisible( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTheme( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszTheme) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextItem( 
            /* [unique][in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ NSTCGNI nstcgi,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiNext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ __RPC__in POINT *ppt,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemRect( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out RECT *prect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CollapseAll( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INameSpaceTreeControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INameSpaceTreeControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in HWND hwndParent,
            /* [unique][in] */ __RPC__in_opt RECT *prc,
            /* [in] */ NSTCSTYLE nsctsFlags);
        
        HRESULT ( STDMETHODCALLTYPE *TreeAdvise )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IUnknown *punk,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *TreeUnadvise )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRoot )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psiRoot,
            /* [in] */ SHCONTF grfEnumFlags,
            /* [in] */ NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ __RPC__in_opt IShellItemFilter *pif);
        
        HRESULT ( STDMETHODCALLTYPE *InsertRoot )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ int iIndex,
            /* [in] */ __RPC__in_opt IShellItem *psiRoot,
            /* [in] */ SHCONTF grfEnumFlags,
            /* [in] */ NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ __RPC__in_opt IShellItemFilter *pif);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveRoot )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psiRoot);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllRoots )( 
            __RPC__in INameSpaceTreeControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootItems )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsiaRootItems);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemState )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ NSTCITEMSTATE nstcisMask,
            /* [in] */ NSTCITEMSTATE nstcisFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemState )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ NSTCITEMSTATE nstcisMask,
            /* [out] */ __RPC__out NSTCITEMSTATE *pnstcisFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **psiaItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemCustomState )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out int *piStateNumber);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemCustomState )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ int iStateNumber);
        
        HRESULT ( STDMETHODCALLTYPE *EnsureItemVisible )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetTheme )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszTheme);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextItem )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [unique][in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ NSTCGNI nstcgi,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiNext);
        
        HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in POINT *ppt,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemRect )( 
            __RPC__in INameSpaceTreeControl * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out RECT *prect);
        
        HRESULT ( STDMETHODCALLTYPE *CollapseAll )( 
            __RPC__in INameSpaceTreeControl * This);
        
        END_INTERFACE
    } INameSpaceTreeControlVtbl;

    interface INameSpaceTreeControl
    {
        CONST_VTBL struct INameSpaceTreeControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeControl_Initialize(This,hwndParent,prc,nsctsFlags)	\
    ( (This)->lpVtbl -> Initialize(This,hwndParent,prc,nsctsFlags) ) 

#define INameSpaceTreeControl_TreeAdvise(This,punk,pdwCookie)	\
    ( (This)->lpVtbl -> TreeAdvise(This,punk,pdwCookie) ) 

#define INameSpaceTreeControl_TreeUnadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> TreeUnadvise(This,dwCookie) ) 

#define INameSpaceTreeControl_AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif)	\
    ( (This)->lpVtbl -> AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) ) 

#define INameSpaceTreeControl_InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif)	\
    ( (This)->lpVtbl -> InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) ) 

#define INameSpaceTreeControl_RemoveRoot(This,psiRoot)	\
    ( (This)->lpVtbl -> RemoveRoot(This,psiRoot) ) 

#define INameSpaceTreeControl_RemoveAllRoots(This)	\
    ( (This)->lpVtbl -> RemoveAllRoots(This) ) 

#define INameSpaceTreeControl_GetRootItems(This,ppsiaRootItems)	\
    ( (This)->lpVtbl -> GetRootItems(This,ppsiaRootItems) ) 

#define INameSpaceTreeControl_SetItemState(This,psi,nstcisMask,nstcisFlags)	\
    ( (This)->lpVtbl -> SetItemState(This,psi,nstcisMask,nstcisFlags) ) 

#define INameSpaceTreeControl_GetItemState(This,psi,nstcisMask,pnstcisFlags)	\
    ( (This)->lpVtbl -> GetItemState(This,psi,nstcisMask,pnstcisFlags) ) 

#define INameSpaceTreeControl_GetSelectedItems(This,psiaItems)	\
    ( (This)->lpVtbl -> GetSelectedItems(This,psiaItems) ) 

#define INameSpaceTreeControl_GetItemCustomState(This,psi,piStateNumber)	\
    ( (This)->lpVtbl -> GetItemCustomState(This,psi,piStateNumber) ) 

#define INameSpaceTreeControl_SetItemCustomState(This,psi,iStateNumber)	\
    ( (This)->lpVtbl -> SetItemCustomState(This,psi,iStateNumber) ) 

#define INameSpaceTreeControl_EnsureItemVisible(This,psi)	\
    ( (This)->lpVtbl -> EnsureItemVisible(This,psi) ) 

#define INameSpaceTreeControl_SetTheme(This,pszTheme)	\
    ( (This)->lpVtbl -> SetTheme(This,pszTheme) ) 

#define INameSpaceTreeControl_GetNextItem(This,psi,nstcgi,ppsiNext)	\
    ( (This)->lpVtbl -> GetNextItem(This,psi,nstcgi,ppsiNext) ) 

#define INameSpaceTreeControl_HitTest(This,ppt,ppsiOut)	\
    ( (This)->lpVtbl -> HitTest(This,ppt,ppsiOut) ) 

#define INameSpaceTreeControl_GetItemRect(This,psi,prect)	\
    ( (This)->lpVtbl -> GetItemRect(This,psi,prect) ) 

#define INameSpaceTreeControl_CollapseAll(This)	\
    ( (This)->lpVtbl -> CollapseAll(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeControl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0127 */
/* [local] */ 

#define SID_SNavigationPane IID_INameSpaceTreeControl   // nearest service that you can proffer to
#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0127_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0127_v0_0_s_ifspec;

#ifndef __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__
#define __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__

/* interface INameSpaceTreeControlFolderCapabilities */
/* [local][uuid][object] */ 

typedef /* [v1_enum] */ 
enum NSTCFOLDERCAPABILITIES
    {
        NSTCFC_NONE	= 0,
        NSTCFC_PINNEDITEMFILTERING	= 0x1,
        NSTCFC_DELAY_REGISTER_NOTIFY	= 0x2
    } 	NSTCFOLDERCAPABILITIES;

DEFINE_ENUM_FLAG_OPERATORS(NSTCFOLDERCAPABILITIES)

EXTERN_C const IID IID_INameSpaceTreeControlFolderCapabilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e9701183-e6b3-4ff2-8568-813615fec7be")
    INameSpaceTreeControlFolderCapabilities : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFolderCapabilities( 
            /* [annotation][in] */ 
            _In_  NSTCFOLDERCAPABILITIES nfcMask,
            /* [annotation][out] */ 
            _Out_  NSTCFOLDERCAPABILITIES *pnfcValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeControlFolderCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INameSpaceTreeControlFolderCapabilities * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INameSpaceTreeControlFolderCapabilities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INameSpaceTreeControlFolderCapabilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderCapabilities )( 
            INameSpaceTreeControlFolderCapabilities * This,
            /* [annotation][in] */ 
            _In_  NSTCFOLDERCAPABILITIES nfcMask,
            /* [annotation][out] */ 
            _Out_  NSTCFOLDERCAPABILITIES *pnfcValue);
        
        END_INTERFACE
    } INameSpaceTreeControlFolderCapabilitiesVtbl;

    interface INameSpaceTreeControlFolderCapabilities
    {
        CONST_VTBL struct INameSpaceTreeControlFolderCapabilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeControlFolderCapabilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeControlFolderCapabilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeControlFolderCapabilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeControlFolderCapabilities_GetFolderCapabilities(This,nfcMask,pnfcValue)	\
    ( (This)->lpVtbl -> GetFolderCapabilities(This,nfcMask,pnfcValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0128 */
/* [local] */ 

#endif  // NTDDI_VISTA
#define E_PREVIEWHANDLER_DRM_FAIL _HRESULT_TYPEDEF_(0x86420001L)
#define E_PREVIEWHANDLER_NOAUTH   _HRESULT_TYPEDEF_(0x86420002L)
#define E_PREVIEWHANDLER_NOTFOUND _HRESULT_TYPEDEF_(0x86420003L)
#define E_PREVIEWHANDLER_CORRUPT  _HRESULT_TYPEDEF_(0x86420004L)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0128_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0128_v0_0_s_ifspec;

#ifndef __IPreviewHandler_INTERFACE_DEFINED__
#define __IPreviewHandler_INTERFACE_DEFINED__

/* interface IPreviewHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPreviewHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8895b1c6-b41f-4c1c-a562-0d564250836f")
    IPreviewHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWindow( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in const RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRect( 
            /* [in] */ __RPC__in const RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoPreview( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryFocus( 
            /* [out] */ __RPC__deref_out_opt HWND *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ __RPC__in MSG *pmsg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPreviewHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPreviewHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPreviewHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindow )( 
            __RPC__in IPreviewHandler * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in const RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            __RPC__in IPreviewHandler * This,
            /* [in] */ __RPC__in const RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *DoPreview )( 
            __RPC__in IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Unload )( 
            __RPC__in IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            __RPC__in IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryFocus )( 
            __RPC__in IPreviewHandler * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            __RPC__in IPreviewHandler * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        END_INTERFACE
    } IPreviewHandlerVtbl;

    interface IPreviewHandler
    {
        CONST_VTBL struct IPreviewHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewHandler_SetWindow(This,hwnd,prc)	\
    ( (This)->lpVtbl -> SetWindow(This,hwnd,prc) ) 

#define IPreviewHandler_SetRect(This,prc)	\
    ( (This)->lpVtbl -> SetRect(This,prc) ) 

#define IPreviewHandler_DoPreview(This)	\
    ( (This)->lpVtbl -> DoPreview(This) ) 

#define IPreviewHandler_Unload(This)	\
    ( (This)->lpVtbl -> Unload(This) ) 

#define IPreviewHandler_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IPreviewHandler_QueryFocus(This,phwnd)	\
    ( (This)->lpVtbl -> QueryFocus(This,phwnd) ) 

#define IPreviewHandler_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewHandler_INTERFACE_DEFINED__ */


#ifndef __IPreviewHandlerFrame_INTERFACE_DEFINED__
#define __IPreviewHandlerFrame_INTERFACE_DEFINED__

/* interface IPreviewHandlerFrame */
/* [unique][uuid][object] */ 

typedef struct PREVIEWHANDLERFRAMEINFO
    {
    HACCEL haccel;
    UINT cAccelEntries;
    } 	PREVIEWHANDLERFRAMEINFO;


EXTERN_C const IID IID_IPreviewHandlerFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fec87aaf-35f9-447a-adb7-20234491401a")
    IPreviewHandlerFrame : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetWindowContext( 
            /* [out] */ __RPC__out PREVIEWHANDLERFRAMEINFO *pinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ __RPC__in MSG *pmsg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPreviewHandlerFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPreviewHandlerFrame * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPreviewHandlerFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPreviewHandlerFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowContext )( 
            __RPC__in IPreviewHandlerFrame * This,
            /* [out] */ __RPC__out PREVIEWHANDLERFRAMEINFO *pinfo);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            __RPC__in IPreviewHandlerFrame * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        END_INTERFACE
    } IPreviewHandlerFrameVtbl;

    interface IPreviewHandlerFrame
    {
        CONST_VTBL struct IPreviewHandlerFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewHandlerFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewHandlerFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewHandlerFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewHandlerFrame_GetWindowContext(This,pinfo)	\
    ( (This)->lpVtbl -> GetWindowContext(This,pinfo) ) 

#define IPreviewHandlerFrame_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewHandlerFrame_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0130 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef GUID EXPLORERPANE;

#if 0
typedef EXPLORERPANE *REFEXPLORERPANE;

#endif // 0
#ifdef __cplusplus
#define REFEXPLORERPANE const EXPLORERPANE &
#else // !__cplusplus
#define REFEXPLORERPANE const EXPLORERPANE * __MIDL_CONST
#endif // __cplusplus


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0130_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0130_v0_0_s_ifspec;

#ifndef __IExplorerPaneVisibility_INTERFACE_DEFINED__
#define __IExplorerPaneVisibility_INTERFACE_DEFINED__

/* interface IExplorerPaneVisibility */
/* [unique][local][uuid][object] */ 

/* [v1_enum] */ 
enum _EXPLORERPANESTATE
    {
        EPS_DONTCARE	= 0,
        EPS_DEFAULT_ON	= 0x1,
        EPS_DEFAULT_OFF	= 0x2,
        EPS_STATEMASK	= 0xffff,
        EPS_INITIALSTATE	= 0x10000,
        EPS_FORCE	= 0x20000
    } ;
typedef DWORD EXPLORERPANESTATE;


EXTERN_C const IID IID_IExplorerPaneVisibility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e07010ec-bc17-44c0-97b0-46c7c95b9edc")
    IExplorerPaneVisibility : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPaneState( 
            /* [annotation][in] */ 
            _In_  REFEXPLORERPANE ep,
            /* [annotation][out] */ 
            _Out_  EXPLORERPANESTATE *peps) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExplorerPaneVisibilityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplorerPaneVisibility * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplorerPaneVisibility * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplorerPaneVisibility * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPaneState )( 
            IExplorerPaneVisibility * This,
            /* [annotation][in] */ 
            _In_  REFEXPLORERPANE ep,
            /* [annotation][out] */ 
            _Out_  EXPLORERPANESTATE *peps);
        
        END_INTERFACE
    } IExplorerPaneVisibilityVtbl;

    interface IExplorerPaneVisibility
    {
        CONST_VTBL struct IExplorerPaneVisibilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerPaneVisibility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerPaneVisibility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerPaneVisibility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerPaneVisibility_GetPaneState(This,ep,peps)	\
    ( (This)->lpVtbl -> GetPaneState(This,ep,peps) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerPaneVisibility_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0131 */
/* [local] */ 

#define SID_ExplorerPaneVisibility IID_IExplorerPaneVisibility


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0131_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0131_v0_0_s_ifspec;

#ifndef __IContextMenuCB_INTERFACE_DEFINED__
#define __IContextMenuCB_INTERFACE_DEFINED__

/* interface IContextMenuCB */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IContextMenuCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3409E930-5A39-11d1-83FA-00A0C90DC849")
    IContextMenuCB : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CallBack( 
            /* [annotation][unique][in] */ 
            _In_opt_  IShellFolder *psf,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner,
            /* [annotation][unique][in] */ 
            _In_opt_  IDataObject *pdtobj,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IContextMenuCBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenuCB * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenuCB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenuCB * This);
        
        HRESULT ( STDMETHODCALLTYPE *CallBack )( 
            IContextMenuCB * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IShellFolder *psf,
            /* [annotation][unique][in] */ 
            _In_opt_  HWND hwndOwner,
            /* [annotation][unique][in] */ 
            _In_opt_  IDataObject *pdtobj,
            /* [annotation][in] */ 
            _In_  UINT uMsg,
            /* [annotation][in] */ 
            _In_  WPARAM wParam,
            /* [annotation][in] */ 
            _In_  LPARAM lParam);
        
        END_INTERFACE
    } IContextMenuCBVtbl;

    interface IContextMenuCB
    {
        CONST_VTBL struct IContextMenuCBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenuCB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenuCB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenuCB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenuCB_CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenuCB_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0132 */
/* [local] */ 

#endif  // NTDDI_VISTA


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0132_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0132_v0_0_s_ifspec;

#ifndef __IDefaultExtractIconInit_INTERFACE_DEFINED__
#define __IDefaultExtractIconInit_INTERFACE_DEFINED__

/* interface IDefaultExtractIconInit */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IDefaultExtractIconInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41ded17d-d6b3-4261-997d-88c60e4b1d58")
    IDefaultExtractIconInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [annotation][in] */ 
            _In_  UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetKey( 
            /* [annotation][in] */ 
            _In_  HKEY hkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNormalIcon( 
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOpenIcon( 
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShortcutIcon( 
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultIcon( 
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDefaultExtractIconInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDefaultExtractIconInit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDefaultExtractIconInit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDefaultExtractIconInit * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IDefaultExtractIconInit * This,
            /* [annotation][in] */ 
            _In_  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetKey )( 
            IDefaultExtractIconInit * This,
            /* [annotation][in] */ 
            _In_  HKEY hkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetNormalIcon )( 
            IDefaultExtractIconInit * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetOpenIcon )( 
            IDefaultExtractIconInit * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetShortcutIcon )( 
            IDefaultExtractIconInit * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultIcon )( 
            IDefaultExtractIconInit * This,
            /* [annotation][string][unique][in] */ 
            _In_opt_  LPCWSTR pszFile,
            /* [annotation][in] */ 
            _In_  int iIcon);
        
        END_INTERFACE
    } IDefaultExtractIconInitVtbl;

    interface IDefaultExtractIconInit
    {
        CONST_VTBL struct IDefaultExtractIconInitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDefaultExtractIconInit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDefaultExtractIconInit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDefaultExtractIconInit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDefaultExtractIconInit_SetFlags(This,uFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,uFlags) ) 

#define IDefaultExtractIconInit_SetKey(This,hkey)	\
    ( (This)->lpVtbl -> SetKey(This,hkey) ) 

#define IDefaultExtractIconInit_SetNormalIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetNormalIcon(This,pszFile,iIcon) ) 

#define IDefaultExtractIconInit_SetOpenIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetOpenIcon(This,pszFile,iIcon) ) 

#define IDefaultExtractIconInit_SetShortcutIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetShortcutIcon(This,pszFile,iIcon) ) 

#define IDefaultExtractIconInit_SetDefaultIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetDefaultIcon(This,pszFile,iIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDefaultExtractIconInit_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0133 */
/* [local] */ 

STDAPI SHCreateDefaultExtractIcon(_In_ REFIID riid, _Outptr_ void **ppv);



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0133_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0133_v0_0_s_ifspec;

#ifndef __IExplorerCommand_INTERFACE_DEFINED__
#define __IExplorerCommand_INTERFACE_DEFINED__

/* interface IExplorerCommand */
/* [object][unique][uuid] */ 

/* [v1_enum] */ 
enum _EXPCMDSTATE
    {
        ECS_ENABLED	= 0,
        ECS_DISABLED	= 0x1,
        ECS_HIDDEN	= 0x2,
        ECS_CHECKBOX	= 0x4,
        ECS_CHECKED	= 0x8,
        ECS_RADIOCHECK	= 0x10
    } ;
typedef DWORD EXPCMDSTATE;

/* [v1_enum] */ 
enum _EXPCMDFLAGS
    {
        ECF_DEFAULT	= 0,
        ECF_HASSUBCOMMANDS	= 0x1,
        ECF_HASSPLITBUTTON	= 0x2,
        ECF_HIDELABEL	= 0x4,
        ECF_ISSEPARATOR	= 0x8,
        ECF_HASLUASHIELD	= 0x10,
        ECF_SEPARATORBEFORE	= 0x20,
        ECF_SEPARATORAFTER	= 0x40,
        ECF_ISDROPDOWN	= 0x80,
        ECF_TOGGLEABLE	= 0x100,
        ECF_AUTOMENUICONS	= 0x200
    } ;
typedef DWORD EXPCMDFLAGS;


EXTERN_C const IID IID_IExplorerCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a08ce4d0-fa25-44ab-b57c-c7b1c323e0b9")
    IExplorerCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTitle( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIcon( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetToolTip( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszInfotip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalName( 
            /* [out] */ __RPC__out GUID *pguidCommandName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [in] */ BOOL fOkToBeSlow,
            /* [out] */ __RPC__out EXPCMDSTATE *pCmdState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ __RPC__out EXPCMDFLAGS *pFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSubCommands( 
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExplorerCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExplorerCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExplorerCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExplorerCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            __RPC__in IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetIcon )( 
            __RPC__in IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszIcon);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTip )( 
            __RPC__in IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszInfotip);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )( 
            __RPC__in IExplorerCommand * This,
            /* [out] */ __RPC__out GUID *pguidCommandName);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            __RPC__in IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [in] */ BOOL fOkToBeSlow,
            /* [out] */ __RPC__out EXPCMDSTATE *pCmdState);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            __RPC__in IExplorerCommand * This,
            /* [out] */ __RPC__out EXPCMDFLAGS *pFlags);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubCommands )( 
            __RPC__in IExplorerCommand * This,
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppEnum);
        
        END_INTERFACE
    } IExplorerCommandVtbl;

    interface IExplorerCommand
    {
        CONST_VTBL struct IExplorerCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerCommand_GetTitle(This,psiItemArray,ppszName)	\
    ( (This)->lpVtbl -> GetTitle(This,psiItemArray,ppszName) ) 

#define IExplorerCommand_GetIcon(This,psiItemArray,ppszIcon)	\
    ( (This)->lpVtbl -> GetIcon(This,psiItemArray,ppszIcon) ) 

#define IExplorerCommand_GetToolTip(This,psiItemArray,ppszInfotip)	\
    ( (This)->lpVtbl -> GetToolTip(This,psiItemArray,ppszInfotip) ) 

#define IExplorerCommand_GetCanonicalName(This,pguidCommandName)	\
    ( (This)->lpVtbl -> GetCanonicalName(This,pguidCommandName) ) 

#define IExplorerCommand_GetState(This,psiItemArray,fOkToBeSlow,pCmdState)	\
    ( (This)->lpVtbl -> GetState(This,psiItemArray,fOkToBeSlow,pCmdState) ) 

#define IExplorerCommand_Invoke(This,psiItemArray,pbc)	\
    ( (This)->lpVtbl -> Invoke(This,psiItemArray,pbc) ) 

#define IExplorerCommand_GetFlags(This,pFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pFlags) ) 

#define IExplorerCommand_EnumSubCommands(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumSubCommands(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerCommand_INTERFACE_DEFINED__ */


#ifndef __IExplorerCommandState_INTERFACE_DEFINED__
#define __IExplorerCommandState_INTERFACE_DEFINED__

/* interface IExplorerCommandState */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExplorerCommandState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bddacb60-7657-47ae-8445-d23e1acf82ae")
    IExplorerCommandState : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [in] */ BOOL fOkToBeSlow,
            /* [out] */ __RPC__out EXPCMDSTATE *pCmdState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExplorerCommandStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExplorerCommandState * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExplorerCommandState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExplorerCommandState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            __RPC__in IExplorerCommandState * This,
            /* [in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [in] */ BOOL fOkToBeSlow,
            /* [out] */ __RPC__out EXPCMDSTATE *pCmdState);
        
        END_INTERFACE
    } IExplorerCommandStateVtbl;

    interface IExplorerCommandState
    {
        CONST_VTBL struct IExplorerCommandStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerCommandState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerCommandState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerCommandState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerCommandState_GetState(This,psiItemArray,fOkToBeSlow,pCmdState)	\
    ( (This)->lpVtbl -> GetState(This,psiItemArray,fOkToBeSlow,pCmdState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerCommandState_INTERFACE_DEFINED__ */


#ifndef __IInitializeCommand_INTERFACE_DEFINED__
#define __IInitializeCommand_INTERFACE_DEFINED__

/* interface IInitializeCommand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInitializeCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85075acf-231f-40ea-9610-d26b7b58f638")
    IInitializeCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszCommandName,
            /* [in] */ __RPC__in_opt IPropertyBag *ppb) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializeCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInitializeCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInitializeCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInitializeCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IInitializeCommand * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCommandName,
            /* [in] */ __RPC__in_opt IPropertyBag *ppb);
        
        END_INTERFACE
    } IInitializeCommandVtbl;

    interface IInitializeCommand
    {
        CONST_VTBL struct IInitializeCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeCommand_Initialize(This,pszCommandName,ppb)	\
    ( (This)->lpVtbl -> Initialize(This,pszCommandName,ppb) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeCommand_INTERFACE_DEFINED__ */


#ifndef __IEnumExplorerCommand_INTERFACE_DEFINED__
#define __IEnumExplorerCommand_INTERFACE_DEFINED__

/* interface IEnumExplorerCommand */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumExplorerCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a88826f8-186f-4987-aade-ea0cef8fbfe8")
    IEnumExplorerCommand : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  IExplorerCommand **pUICommand,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumExplorerCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumExplorerCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumExplorerCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumExplorerCommand * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumExplorerCommand * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  IExplorerCommand **pUICommand,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumExplorerCommand * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumExplorerCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumExplorerCommand * This,
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppenum);
        
        END_INTERFACE
    } IEnumExplorerCommandVtbl;

    interface IEnumExplorerCommand
    {
        CONST_VTBL struct IEnumExplorerCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumExplorerCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumExplorerCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumExplorerCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumExplorerCommand_Next(This,celt,pUICommand,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,pUICommand,pceltFetched) ) 

#define IEnumExplorerCommand_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumExplorerCommand_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumExplorerCommand_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_RemoteNext_Proxy( 
    __RPC__in IEnumExplorerCommand * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IExplorerCommand **pUICommand,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumExplorerCommand_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumExplorerCommand_INTERFACE_DEFINED__ */


#ifndef __IExplorerCommandProvider_INTERFACE_DEFINED__
#define __IExplorerCommandProvider_INTERFACE_DEFINED__

/* interface IExplorerCommandProvider */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IExplorerCommandProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64961751-0835-43c0-8ffe-d57686530e64")
    IExplorerCommandProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCommands( 
            /* [in] */ __RPC__in_opt IUnknown *punkSite,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCommand( 
            /* [in] */ __RPC__in REFGUID rguidCommandId,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExplorerCommandProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExplorerCommandProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExplorerCommandProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExplorerCommandProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommands )( 
            __RPC__in IExplorerCommandProvider * This,
            /* [in] */ __RPC__in_opt IUnknown *punkSite,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommand )( 
            __RPC__in IExplorerCommandProvider * This,
            /* [in] */ __RPC__in REFGUID rguidCommandId,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IExplorerCommandProviderVtbl;

    interface IExplorerCommandProvider
    {
        CONST_VTBL struct IExplorerCommandProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerCommandProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerCommandProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerCommandProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerCommandProvider_GetCommands(This,punkSite,riid,ppv)	\
    ( (This)->lpVtbl -> GetCommands(This,punkSite,riid,ppv) ) 

#define IExplorerCommandProvider_GetCommand(This,rguidCommandId,riid,ppv)	\
    ( (This)->lpVtbl -> GetCommand(This,rguidCommandId,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerCommandProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0138 */
/* [local] */ 

typedef HANDLE HTHEME;

typedef /* [v1_enum] */ 
enum CPVIEW
    {
        CPVIEW_CLASSIC	= 0,
        CPVIEW_ALLITEMS	= CPVIEW_CLASSIC,
        CPVIEW_CATEGORY	= 1,
        CPVIEW_HOME	= CPVIEW_CATEGORY
    } 	CPVIEW;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0138_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0138_v0_0_s_ifspec;

#ifndef __IOpenControlPanel_INTERFACE_DEFINED__
#define __IOpenControlPanel_INTERFACE_DEFINED__

/* interface IOpenControlPanel */
/* [uuid][object] */ 


EXTERN_C const IID IID_IOpenControlPanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D11AD862-66DE-4DF4-BF6C-1F5621996AF1")
    IOpenControlPanel : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open( 
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszPage,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkSite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszName,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchPath) LPWSTR pszPath,
            /* [in] */ UINT cchPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentView( 
            /* [out] */ __RPC__out CPVIEW *pView) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOpenControlPanelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IOpenControlPanel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IOpenControlPanel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IOpenControlPanel * This);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            __RPC__in IOpenControlPanel * This,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszPage,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkSite);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            __RPC__in IOpenControlPanel * This,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszName,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchPath) LPWSTR pszPath,
            /* [in] */ UINT cchPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentView )( 
            __RPC__in IOpenControlPanel * This,
            /* [out] */ __RPC__out CPVIEW *pView);
        
        END_INTERFACE
    } IOpenControlPanelVtbl;

    interface IOpenControlPanel
    {
        CONST_VTBL struct IOpenControlPanelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenControlPanel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenControlPanel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenControlPanel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenControlPanel_Open(This,pszName,pszPage,punkSite)	\
    ( (This)->lpVtbl -> Open(This,pszName,pszPage,punkSite) ) 

#define IOpenControlPanel_GetPath(This,pszName,pszPath,cchPath)	\
    ( (This)->lpVtbl -> GetPath(This,pszName,pszPath,cchPath) ) 

#define IOpenControlPanel_GetCurrentView(This,pView)	\
    ( (This)->lpVtbl -> GetCurrentView(This,pView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenControlPanel_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0139 */
/* [local] */ 

#define STR_FILE_SYS_BIND_DATA      L"File System Bind Data"
#define STR_FILE_SYS_BIND_DATA_WIN7_FORMAT  L"Win7FileSystemIdList"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0139_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0139_v0_0_s_ifspec;

#ifndef __IFileSystemBindData_INTERFACE_DEFINED__
#define __IFileSystemBindData_INTERFACE_DEFINED__

/* interface IFileSystemBindData */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IFileSystemBindData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01E18D10-4D8B-11d2-855D-006008059367")
    IFileSystemBindData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFindData( 
            /* [in] */ const WIN32_FIND_DATAW *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFindData( 
            /* [out] */ WIN32_FIND_DATAW *pfd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileSystemBindDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileSystemBindData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileSystemBindData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileSystemBindData * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFindData )( 
            IFileSystemBindData * This,
            /* [in] */ const WIN32_FIND_DATAW *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *GetFindData )( 
            IFileSystemBindData * This,
            /* [out] */ WIN32_FIND_DATAW *pfd);
        
        END_INTERFACE
    } IFileSystemBindDataVtbl;

    interface IFileSystemBindData
    {
        CONST_VTBL struct IFileSystemBindDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSystemBindData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSystemBindData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSystemBindData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSystemBindData_SetFindData(This,pfd)	\
    ( (This)->lpVtbl -> SetFindData(This,pfd) ) 

#define IFileSystemBindData_GetFindData(This,pfd)	\
    ( (This)->lpVtbl -> GetFindData(This,pfd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSystemBindData_INTERFACE_DEFINED__ */


#ifndef __IFileSystemBindData2_INTERFACE_DEFINED__
#define __IFileSystemBindData2_INTERFACE_DEFINED__

/* interface IFileSystemBindData2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IFileSystemBindData2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3acf075f-71db-4afa-81f0-3fc4fdf2a5b8")
    IFileSystemBindData2 : public IFileSystemBindData
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFileID( 
            /* [in] */ LARGE_INTEGER liFileID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileID( 
            /* [out] */ LARGE_INTEGER *pliFileID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetJunctionCLSID( 
            /* [in] */ REFCLSID clsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetJunctionCLSID( 
            /* [out] */ CLSID *pclsid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFileSystemBindData2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileSystemBindData2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileSystemBindData2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileSystemBindData2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFindData )( 
            IFileSystemBindData2 * This,
            /* [in] */ const WIN32_FIND_DATAW *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *GetFindData )( 
            IFileSystemBindData2 * This,
            /* [out] */ WIN32_FIND_DATAW *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileID )( 
            IFileSystemBindData2 * This,
            /* [in] */ LARGE_INTEGER liFileID);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileID )( 
            IFileSystemBindData2 * This,
            /* [out] */ LARGE_INTEGER *pliFileID);
        
        HRESULT ( STDMETHODCALLTYPE *SetJunctionCLSID )( 
            IFileSystemBindData2 * This,
            /* [in] */ REFCLSID clsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetJunctionCLSID )( 
            IFileSystemBindData2 * This,
            /* [out] */ CLSID *pclsid);
        
        END_INTERFACE
    } IFileSystemBindData2Vtbl;

    interface IFileSystemBindData2
    {
        CONST_VTBL struct IFileSystemBindData2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSystemBindData2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSystemBindData2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSystemBindData2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSystemBindData2_SetFindData(This,pfd)	\
    ( (This)->lpVtbl -> SetFindData(This,pfd) ) 

#define IFileSystemBindData2_GetFindData(This,pfd)	\
    ( (This)->lpVtbl -> GetFindData(This,pfd) ) 


#define IFileSystemBindData2_SetFileID(This,liFileID)	\
    ( (This)->lpVtbl -> SetFileID(This,liFileID) ) 

#define IFileSystemBindData2_GetFileID(This,pliFileID)	\
    ( (This)->lpVtbl -> GetFileID(This,pliFileID) ) 

#define IFileSystemBindData2_SetJunctionCLSID(This,clsid)	\
    ( (This)->lpVtbl -> SetJunctionCLSID(This,clsid) ) 

#define IFileSystemBindData2_GetJunctionCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetJunctionCLSID(This,pclsid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSystemBindData2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0141 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN7)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0141_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0141_v0_0_s_ifspec;

#ifndef __ICustomDestinationList_INTERFACE_DEFINED__
#define __ICustomDestinationList_INTERFACE_DEFINED__

/* interface ICustomDestinationList */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum KNOWNDESTCATEGORY
    {
        KDC_FREQUENT	= 1,
        KDC_RECENT	= ( KDC_FREQUENT + 1 ) 
    } 	KNOWNDESTCATEGORY;


EXTERN_C const IID IID_ICustomDestinationList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6332debf-87b5-4670-90c0-5e57b408a49e")
    ICustomDestinationList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAppID( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginList( 
            /* [out] */ __RPC__out UINT *pcMinSlots,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendCategory( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszCategory,
            /* [in] */ __RPC__in_opt IObjectArray *poa) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendKnownCategory( 
            /* [in] */ KNOWNDESTCATEGORY category) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddUserTasks( 
            /* [in] */ __RPC__in_opt IObjectArray *poa) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommitList( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRemovedDestinations( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteList( 
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszAppID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortList( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICustomDestinationListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICustomDestinationList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICustomDestinationList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICustomDestinationList * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppID )( 
            __RPC__in ICustomDestinationList * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppID);
        
        HRESULT ( STDMETHODCALLTYPE *BeginList )( 
            __RPC__in ICustomDestinationList * This,
            /* [out] */ __RPC__out UINT *pcMinSlots,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AppendCategory )( 
            __RPC__in ICustomDestinationList * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCategory,
            /* [in] */ __RPC__in_opt IObjectArray *poa);
        
        HRESULT ( STDMETHODCALLTYPE *AppendKnownCategory )( 
            __RPC__in ICustomDestinationList * This,
            /* [in] */ KNOWNDESTCATEGORY category);
        
        HRESULT ( STDMETHODCALLTYPE *AddUserTasks )( 
            __RPC__in ICustomDestinationList * This,
            /* [in] */ __RPC__in_opt IObjectArray *poa);
        
        HRESULT ( STDMETHODCALLTYPE *CommitList )( 
            __RPC__in ICustomDestinationList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemovedDestinations )( 
            __RPC__in ICustomDestinationList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteList )( 
            __RPC__in ICustomDestinationList * This,
            /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszAppID);
        
        HRESULT ( STDMETHODCALLTYPE *AbortList )( 
            __RPC__in ICustomDestinationList * This);
        
        END_INTERFACE
    } ICustomDestinationListVtbl;

    interface ICustomDestinationList
    {
        CONST_VTBL struct ICustomDestinationListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICustomDestinationList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICustomDestinationList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICustomDestinationList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICustomDestinationList_SetAppID(This,pszAppID)	\
    ( (This)->lpVtbl -> SetAppID(This,pszAppID) ) 

#define ICustomDestinationList_BeginList(This,pcMinSlots,riid,ppv)	\
    ( (This)->lpVtbl -> BeginList(This,pcMinSlots,riid,ppv) ) 

#define ICustomDestinationList_AppendCategory(This,pszCategory,poa)	\
    ( (This)->lpVtbl -> AppendCategory(This,pszCategory,poa) ) 

#define ICustomDestinationList_AppendKnownCategory(This,category)	\
    ( (This)->lpVtbl -> AppendKnownCategory(This,category) ) 

#define ICustomDestinationList_AddUserTasks(This,poa)	\
    ( (This)->lpVtbl -> AddUserTasks(This,poa) ) 

#define ICustomDestinationList_CommitList(This)	\
    ( (This)->lpVtbl -> CommitList(This) ) 

#define ICustomDestinationList_GetRemovedDestinations(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetRemovedDestinations(This,riid,ppv) ) 

#define ICustomDestinationList_DeleteList(This,pszAppID)	\
    ( (This)->lpVtbl -> DeleteList(This,pszAppID) ) 

#define ICustomDestinationList_AbortList(This)	\
    ( (This)->lpVtbl -> AbortList(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICustomDestinationList_INTERFACE_DEFINED__ */


#ifndef __IApplicationDestinations_INTERFACE_DEFINED__
#define __IApplicationDestinations_INTERFACE_DEFINED__

/* interface IApplicationDestinations */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IApplicationDestinations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12337d35-94c6-48a0-bce7-6a9c69d4d600")
    IApplicationDestinations : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAppID( 
            /* [in] */ __RPC__in LPCWSTR pszAppID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveDestination( 
            /* [in] */ __RPC__in_opt IUnknown *punk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllDestinations( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationDestinationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationDestinations * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationDestinations * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationDestinations * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppID )( 
            __RPC__in IApplicationDestinations * This,
            /* [in] */ __RPC__in LPCWSTR pszAppID);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveDestination )( 
            __RPC__in IApplicationDestinations * This,
            /* [in] */ __RPC__in_opt IUnknown *punk);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllDestinations )( 
            __RPC__in IApplicationDestinations * This);
        
        END_INTERFACE
    } IApplicationDestinationsVtbl;

    interface IApplicationDestinations
    {
        CONST_VTBL struct IApplicationDestinationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationDestinations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationDestinations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationDestinations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationDestinations_SetAppID(This,pszAppID)	\
    ( (This)->lpVtbl -> SetAppID(This,pszAppID) ) 

#define IApplicationDestinations_RemoveDestination(This,punk)	\
    ( (This)->lpVtbl -> RemoveDestination(This,punk) ) 

#define IApplicationDestinations_RemoveAllDestinations(This)	\
    ( (This)->lpVtbl -> RemoveAllDestinations(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationDestinations_INTERFACE_DEFINED__ */


#ifndef __IApplicationDocumentLists_INTERFACE_DEFINED__
#define __IApplicationDocumentLists_INTERFACE_DEFINED__

/* interface IApplicationDocumentLists */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum APPDOCLISTTYPE
    {
        ADLT_RECENT	= 0,
        ADLT_FREQUENT	= ( ADLT_RECENT + 1 ) 
    } 	APPDOCLISTTYPE;


EXTERN_C const IID IID_IApplicationDocumentLists;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3c594f9f-9f30-47a1-979a-c9e83d3d0a06")
    IApplicationDocumentLists : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAppID( 
            /* [in] */ __RPC__in LPCWSTR pszAppID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetList( 
            /* [in] */ APPDOCLISTTYPE listtype,
            /* [in] */ UINT cItemsDesired,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationDocumentListsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationDocumentLists * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationDocumentLists * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationDocumentLists * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppID )( 
            __RPC__in IApplicationDocumentLists * This,
            /* [in] */ __RPC__in LPCWSTR pszAppID);
        
        HRESULT ( STDMETHODCALLTYPE *GetList )( 
            __RPC__in IApplicationDocumentLists * This,
            /* [in] */ APPDOCLISTTYPE listtype,
            /* [in] */ UINT cItemsDesired,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IApplicationDocumentListsVtbl;

    interface IApplicationDocumentLists
    {
        CONST_VTBL struct IApplicationDocumentListsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationDocumentLists_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationDocumentLists_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationDocumentLists_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationDocumentLists_SetAppID(This,pszAppID)	\
    ( (This)->lpVtbl -> SetAppID(This,pszAppID) ) 

#define IApplicationDocumentLists_GetList(This,listtype,cItemsDesired,riid,ppv)	\
    ( (This)->lpVtbl -> GetList(This,listtype,cItemsDesired,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationDocumentLists_INTERFACE_DEFINED__ */


#ifndef __IObjectWithAppUserModelID_INTERFACE_DEFINED__
#define __IObjectWithAppUserModelID_INTERFACE_DEFINED__

/* interface IObjectWithAppUserModelID */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IObjectWithAppUserModelID;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36db0196-9665-46d1-9ba7-d3709eecf9ed")
    IObjectWithAppUserModelID : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAppID( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppID( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAppID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectWithAppUserModelIDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectWithAppUserModelID * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectWithAppUserModelID * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectWithAppUserModelID * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppID )( 
            __RPC__in IObjectWithAppUserModelID * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszAppID);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppID )( 
            __RPC__in IObjectWithAppUserModelID * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAppID);
        
        END_INTERFACE
    } IObjectWithAppUserModelIDVtbl;

    interface IObjectWithAppUserModelID
    {
        CONST_VTBL struct IObjectWithAppUserModelIDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithAppUserModelID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectWithAppUserModelID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectWithAppUserModelID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectWithAppUserModelID_SetAppID(This,pszAppID)	\
    ( (This)->lpVtbl -> SetAppID(This,pszAppID) ) 

#define IObjectWithAppUserModelID_GetAppID(This,ppszAppID)	\
    ( (This)->lpVtbl -> GetAppID(This,ppszAppID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectWithAppUserModelID_INTERFACE_DEFINED__ */


#ifndef __IObjectWithProgID_INTERFACE_DEFINED__
#define __IObjectWithProgID_INTERFACE_DEFINED__

/* interface IObjectWithProgID */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IObjectWithProgID;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71e806fb-8dee-46fc-bf8c-7748a8a1ae13")
    IObjectWithProgID : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProgID( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszProgID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgID( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszProgID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectWithProgIDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IObjectWithProgID * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IObjectWithProgID * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IObjectWithProgID * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgID )( 
            __RPC__in IObjectWithProgID * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszProgID);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgID )( 
            __RPC__in IObjectWithProgID * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszProgID);
        
        END_INTERFACE
    } IObjectWithProgIDVtbl;

    interface IObjectWithProgID
    {
        CONST_VTBL struct IObjectWithProgIDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithProgID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectWithProgID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectWithProgID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectWithProgID_SetProgID(This,pszProgID)	\
    ( (This)->lpVtbl -> SetProgID(This,pszProgID) ) 

#define IObjectWithProgID_GetProgID(This,ppszProgID)	\
    ( (This)->lpVtbl -> GetProgID(This,ppszProgID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectWithProgID_INTERFACE_DEFINED__ */


#ifndef __IUpdateIDList_INTERFACE_DEFINED__
#define __IUpdateIDList_INTERFACE_DEFINED__

/* interface IUpdateIDList */
/* [object][unique][local][uuid] */ 


EXTERN_C const IID IID_IUpdateIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6589b6d2-5f8d-4b9e-b7e0-23cdd9717d8c")
    IUpdateIDList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Update( 
            /* [annotation][unique][in] */ 
            _In_opt_  IBindCtx *pbc,
            /* [annotation][in] */ 
            _In_  PCUITEMID_CHILD pidlIn,
            /* [annotation][out] */ 
            _Outptr_  PITEMID_CHILD *ppidlOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUpdateIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateIDList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            IUpdateIDList * This,
            /* [annotation][unique][in] */ 
            _In_opt_  IBindCtx *pbc,
            /* [annotation][in] */ 
            _In_  PCUITEMID_CHILD pidlIn,
            /* [annotation][out] */ 
            _Outptr_  PITEMID_CHILD *ppidlOut);
        
        END_INTERFACE
    } IUpdateIDListVtbl;

    interface IUpdateIDList
    {
        CONST_VTBL struct IUpdateIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateIDList_Update(This,pbc,pidlIn,ppidlOut)	\
    ( (This)->lpVtbl -> Update(This,pbc,pidlIn,ppidlOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0147 */
/* [local] */ 

SHSTDAPI SetCurrentProcessExplicitAppUserModelID(_In_ PCWSTR AppID);
SHSTDAPI GetCurrentProcessExplicitAppUserModelID(_Outptr_ PWSTR *AppID);
#endif // NTDDI_WIN7
#if (NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0147_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0147_v0_0_s_ifspec;

#ifndef __IDesktopWallpaper_INTERFACE_DEFINED__
#define __IDesktopWallpaper_INTERFACE_DEFINED__

/* interface IDesktopWallpaper */
/* [object][uuid] */ 

typedef /* [v1_enum] */ 
enum DESKTOP_SLIDESHOW_OPTIONS
    {
        DSO_SHUFFLEIMAGES	= 0x1
    } 	DESKTOP_SLIDESHOW_OPTIONS;

DEFINE_ENUM_FLAG_OPERATORS(DESKTOP_SLIDESHOW_OPTIONS)
typedef /* [v1_enum] */ 
enum DESKTOP_SLIDESHOW_STATE
    {
        DSS_ENABLED	= 0x1,
        DSS_SLIDESHOW	= 0x2,
        DSS_DISABLED_BY_REMOTE_SESSION	= 0x4
    } 	DESKTOP_SLIDESHOW_STATE;

DEFINE_ENUM_FLAG_OPERATORS(DESKTOP_SLIDESHOW_STATE)
typedef /* [v1_enum] */ 
enum DESKTOP_SLIDESHOW_DIRECTION
    {
        DSD_FORWARD	= 0,
        DSD_BACKWARD	= 1
    } 	DESKTOP_SLIDESHOW_DIRECTION;

typedef /* [v1_enum] */ 
enum DESKTOP_WALLPAPER_POSITION
    {
        DWPOS_CENTER	= 0,
        DWPOS_TILE	= 1,
        DWPOS_STRETCH	= 2,
        DWPOS_FIT	= 3,
        DWPOS_FILL	= 4,
        DWPOS_SPAN	= 5
    } 	DESKTOP_WALLPAPER_POSITION;


EXTERN_C const IID IID_IDesktopWallpaper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B92B56A9-8B55-4E14-9A89-0199BBB6F93B")
    IDesktopWallpaper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWallpaper( 
            /* [unique][in] */ __RPC__in_opt LPCWSTR monitorID,
            /* [in] */ __RPC__in LPCWSTR wallpaper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWallpaper( 
            /* [unique][in] */ __RPC__in_opt LPCWSTR monitorID,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *wallpaper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMonitorDevicePathAt( 
            /* [in] */ UINT monitorIndex,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *monitorID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMonitorDevicePathCount( 
            /* [out] */ __RPC__out UINT *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMonitorRECT( 
            /* [in] */ __RPC__in LPCWSTR monitorID,
            /* [out] */ __RPC__out RECT *displayRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ COLORREF color) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBackgroundColor( 
            /* [out] */ __RPC__out COLORREF *color) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ DESKTOP_WALLPAPER_POSITION position) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [out] */ __RPC__out DESKTOP_WALLPAPER_POSITION *position) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSlideshow( 
            /* [in] */ __RPC__in_opt IShellItemArray *items) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSlideshow( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **items) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSlideshowOptions( 
            /* [in] */ DESKTOP_SLIDESHOW_OPTIONS options,
            /* [in] */ UINT slideshowTick) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSlideshowOptions( 
            /* [out] */ __RPC__out DESKTOP_SLIDESHOW_OPTIONS *options,
            /* [out] */ __RPC__out UINT *slideshowTick) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdvanceSlideshow( 
            /* [unique][in] */ __RPC__in_opt LPCWSTR monitorID,
            /* [in] */ DESKTOP_SLIDESHOW_DIRECTION direction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ __RPC__out DESKTOP_SLIDESHOW_STATE *state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ BOOL enable) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDesktopWallpaperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDesktopWallpaper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDesktopWallpaper * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetWallpaper )( 
            __RPC__in IDesktopWallpaper * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR monitorID,
            /* [in] */ __RPC__in LPCWSTR wallpaper);
        
        HRESULT ( STDMETHODCALLTYPE *GetWallpaper )( 
            __RPC__in IDesktopWallpaper * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR monitorID,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *wallpaper);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitorDevicePathAt )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ UINT monitorIndex,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *monitorID);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitorDevicePathCount )( 
            __RPC__in IDesktopWallpaper * This,
            /* [out] */ __RPC__out UINT *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitorRECT )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ __RPC__in LPCWSTR monitorID,
            /* [out] */ __RPC__out RECT *displayRect);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ COLORREF color);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )( 
            __RPC__in IDesktopWallpaper * This,
            /* [out] */ __RPC__out COLORREF *color);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ DESKTOP_WALLPAPER_POSITION position);
        
        HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            __RPC__in IDesktopWallpaper * This,
            /* [out] */ __RPC__out DESKTOP_WALLPAPER_POSITION *position);
        
        HRESULT ( STDMETHODCALLTYPE *SetSlideshow )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ __RPC__in_opt IShellItemArray *items);
        
        HRESULT ( STDMETHODCALLTYPE *GetSlideshow )( 
            __RPC__in IDesktopWallpaper * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **items);
        
        HRESULT ( STDMETHODCALLTYPE *SetSlideshowOptions )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ DESKTOP_SLIDESHOW_OPTIONS options,
            /* [in] */ UINT slideshowTick);
        
        HRESULT ( STDMETHODCALLTYPE *GetSlideshowOptions )( 
            __RPC__in IDesktopWallpaper * This,
            /* [out] */ __RPC__out DESKTOP_SLIDESHOW_OPTIONS *options,
            /* [out] */ __RPC__out UINT *slideshowTick);
        
        HRESULT ( STDMETHODCALLTYPE *AdvanceSlideshow )( 
            __RPC__in IDesktopWallpaper * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR monitorID,
            /* [in] */ DESKTOP_SLIDESHOW_DIRECTION direction);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            __RPC__in IDesktopWallpaper * This,
            /* [out] */ __RPC__out DESKTOP_SLIDESHOW_STATE *state);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            __RPC__in IDesktopWallpaper * This,
            /* [in] */ BOOL enable);
        
        END_INTERFACE
    } IDesktopWallpaperVtbl;

    interface IDesktopWallpaper
    {
        CONST_VTBL struct IDesktopWallpaperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDesktopWallpaper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDesktopWallpaper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDesktopWallpaper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDesktopWallpaper_SetWallpaper(This,monitorID,wallpaper)	\
    ( (This)->lpVtbl -> SetWallpaper(This,monitorID,wallpaper) ) 

#define IDesktopWallpaper_GetWallpaper(This,monitorID,wallpaper)	\
    ( (This)->lpVtbl -> GetWallpaper(This,monitorID,wallpaper) ) 

#define IDesktopWallpaper_GetMonitorDevicePathAt(This,monitorIndex,monitorID)	\
    ( (This)->lpVtbl -> GetMonitorDevicePathAt(This,monitorIndex,monitorID) ) 

#define IDesktopWallpaper_GetMonitorDevicePathCount(This,count)	\
    ( (This)->lpVtbl -> GetMonitorDevicePathCount(This,count) ) 

#define IDesktopWallpaper_GetMonitorRECT(This,monitorID,displayRect)	\
    ( (This)->lpVtbl -> GetMonitorRECT(This,monitorID,displayRect) ) 

#define IDesktopWallpaper_SetBackgroundColor(This,color)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,color) ) 

#define IDesktopWallpaper_GetBackgroundColor(This,color)	\
    ( (This)->lpVtbl -> GetBackgroundColor(This,color) ) 

#define IDesktopWallpaper_SetPosition(This,position)	\
    ( (This)->lpVtbl -> SetPosition(This,position) ) 

#define IDesktopWallpaper_GetPosition(This,position)	\
    ( (This)->lpVtbl -> GetPosition(This,position) ) 

#define IDesktopWallpaper_SetSlideshow(This,items)	\
    ( (This)->lpVtbl -> SetSlideshow(This,items) ) 

#define IDesktopWallpaper_GetSlideshow(This,items)	\
    ( (This)->lpVtbl -> GetSlideshow(This,items) ) 

#define IDesktopWallpaper_SetSlideshowOptions(This,options,slideshowTick)	\
    ( (This)->lpVtbl -> SetSlideshowOptions(This,options,slideshowTick) ) 

#define IDesktopWallpaper_GetSlideshowOptions(This,options,slideshowTick)	\
    ( (This)->lpVtbl -> GetSlideshowOptions(This,options,slideshowTick) ) 

#define IDesktopWallpaper_AdvanceSlideshow(This,monitorID,direction)	\
    ( (This)->lpVtbl -> AdvanceSlideshow(This,monitorID,direction) ) 

#define IDesktopWallpaper_GetStatus(This,state)	\
    ( (This)->lpVtbl -> GetStatus(This,state) ) 

#define IDesktopWallpaper_Enable(This,enable)	\
    ( (This)->lpVtbl -> Enable(This,enable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDesktopWallpaper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0148 */
/* [local] */ 

#endif // NTDDI_WIN8
#define HOMEGROUP_SECURITY_GROUP_MULTI L"HUG"
#define HOMEGROUP_SECURITY_GROUP L"HomeUsers"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0148_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0148_v0_0_s_ifspec;

#ifndef __IHomeGroup_INTERFACE_DEFINED__
#define __IHomeGroup_INTERFACE_DEFINED__

/* interface IHomeGroup */
/* [local][object][uuid] */ 

typedef /* [v1_enum] */ 
enum HOMEGROUPSHARINGCHOICES
    {
        HGSC_NONE	= 0,
        HGSC_MUSICLIBRARY	= 0x1,
        HGSC_PICTURESLIBRARY	= 0x2,
        HGSC_VIDEOSLIBRARY	= 0x4,
        HGSC_DOCUMENTSLIBRARY	= 0x8,
        HGSC_PRINTERS	= 0x10
    } 	HOMEGROUPSHARINGCHOICES;

DEFINE_ENUM_FLAG_OPERATORS(HOMEGROUPSHARINGCHOICES)

EXTERN_C const IID IID_IHomeGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7a3bd1d9-35a9-4fb3-a467-f48cac35e2d0")
    IHomeGroup : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsMember( 
            /* [out] */ BOOL *member) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowSharingWizard( 
            /* [in] */ HWND owner,
            /* [out] */ HOMEGROUPSHARINGCHOICES *sharingchoices) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHomeGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHomeGroup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHomeGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHomeGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsMember )( 
            IHomeGroup * This,
            /* [out] */ BOOL *member);
        
        HRESULT ( STDMETHODCALLTYPE *ShowSharingWizard )( 
            IHomeGroup * This,
            /* [in] */ HWND owner,
            /* [out] */ HOMEGROUPSHARINGCHOICES *sharingchoices);
        
        END_INTERFACE
    } IHomeGroupVtbl;

    interface IHomeGroup
    {
        CONST_VTBL struct IHomeGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHomeGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHomeGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHomeGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHomeGroup_IsMember(This,member)	\
    ( (This)->lpVtbl -> IsMember(This,member) ) 

#define IHomeGroup_ShowSharingWizard(This,owner,sharingchoices)	\
    ( (This)->lpVtbl -> ShowSharingWizard(This,owner,sharingchoices) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHomeGroup_INTERFACE_DEFINED__ */


#ifndef __IInitializeWithPropertyStore_INTERFACE_DEFINED__
#define __IInitializeWithPropertyStore_INTERFACE_DEFINED__

/* interface IInitializeWithPropertyStore */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IInitializeWithPropertyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3E12EB5-7D8D-44f8-B6DD-0E77B34D6DE4")
    IInitializeWithPropertyStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IPropertyStore *pps) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializeWithPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInitializeWithPropertyStore * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInitializeWithPropertyStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInitializeWithPropertyStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IInitializeWithPropertyStore * This,
            /* [in] */ __RPC__in_opt IPropertyStore *pps);
        
        END_INTERFACE
    } IInitializeWithPropertyStoreVtbl;

    interface IInitializeWithPropertyStore
    {
        CONST_VTBL struct IInitializeWithPropertyStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithPropertyStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeWithPropertyStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeWithPropertyStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeWithPropertyStore_Initialize(This,pps)	\
    ( (This)->lpVtbl -> Initialize(This,pps) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeWithPropertyStore_INTERFACE_DEFINED__ */


#ifndef __IOpenSearchSource_INTERFACE_DEFINED__
#define __IOpenSearchSource_INTERFACE_DEFINED__

/* interface IOpenSearchSource */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IOpenSearchSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F0EE7333-E6FC-479b-9F25-A860C234A38E")
    IOpenSearchSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in LPCWSTR pszQuery,
            /* [in] */ DWORD dwStartIndex,
            /* [in] */ DWORD dwCount,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOpenSearchSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IOpenSearchSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IOpenSearchSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IOpenSearchSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in IOpenSearchSource * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in LPCWSTR pszQuery,
            /* [in] */ DWORD dwStartIndex,
            /* [in] */ DWORD dwCount,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IOpenSearchSourceVtbl;

    interface IOpenSearchSource
    {
        CONST_VTBL struct IOpenSearchSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenSearchSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenSearchSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenSearchSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenSearchSource_GetResults(This,hwnd,pszQuery,dwStartIndex,dwCount,riid,ppv)	\
    ( (This)->lpVtbl -> GetResults(This,hwnd,pszQuery,dwStartIndex,dwCount,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenSearchSource_INTERFACE_DEFINED__ */


#ifndef __IShellLibrary_INTERFACE_DEFINED__
#define __IShellLibrary_INTERFACE_DEFINED__

/* interface IShellLibrary */
/* [unique][object][uuid][helpstring] */ 

typedef /* [v1_enum] */ 
enum LIBRARYFOLDERFILTER
    {
        LFF_FORCEFILESYSTEM	= 1,
        LFF_STORAGEITEMS	= 2,
        LFF_ALLITEMS	= 3
    } 	LIBRARYFOLDERFILTER;

typedef /* [v1_enum] */ 
enum LIBRARYOPTIONFLAGS
    {
        LOF_DEFAULT	= 0,
        LOF_PINNEDTONAVPANE	= 0x1,
        LOF_MASK_ALL	= 0x1
    } 	LIBRARYOPTIONFLAGS;

DEFINE_ENUM_FLAG_OPERATORS(LIBRARYOPTIONFLAGS)
typedef /* [v1_enum] */ 
enum DEFAULTSAVEFOLDERTYPE
    {
        DSFT_DETECT	= 1,
        DSFT_PRIVATE	= ( DSFT_DETECT + 1 ) ,
        DSFT_PUBLIC	= ( DSFT_PRIVATE + 1 ) 
    } 	DEFAULTSAVEFOLDERTYPE;

typedef /* [v1_enum] */ 
enum LIBRARYSAVEFLAGS
    {
        LSF_FAILIFTHERE	= 0,
        LSF_OVERRIDEEXISTING	= 0x1,
        LSF_MAKEUNIQUENAME	= 0x2
    } 	LIBRARYSAVEFLAGS;

DEFINE_ENUM_FLAG_OPERATORS(LIBRARYSAVEFLAGS)

EXTERN_C const IID IID_IShellLibrary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11a66efa-382e-451a-9234-1e0e12ef3085")
    IShellLibrary : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadLibraryFromItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiLibrary,
            /* [in] */ DWORD grfMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadLibraryFromKnownFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID kfidLibrary,
            /* [in] */ DWORD grfMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psiLocation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psiLocation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolders( 
            /* [in] */ LIBRARYFOLDERFILTER lff,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResolveFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psiFolderToResolve,
            /* [in] */ DWORD dwTimeout,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSaveFolder( 
            /* [in] */ DEFAULTSAVEFOLDERTYPE dsft,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultSaveFolder( 
            /* [in] */ DEFAULTSAVEFOLDERTYPE dsft,
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [out] */ __RPC__out LIBRARYOPTIONFLAGS *plofOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptions( 
            /* [in] */ LIBRARYOPTIONFLAGS lofMask,
            /* [in] */ LIBRARYOPTIONFLAGS lofOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderType( 
            /* [out] */ __RPC__out FOLDERTYPEID *pftid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderType( 
            /* [in] */ __RPC__in REFFOLDERTYPEID ftid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIcon( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIcon( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ __RPC__in_opt IShellItem *psiFolderToSaveIn,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLibraryName,
            /* [in] */ LIBRARYSAVEFLAGS lsf,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiSavedTo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveInKnownFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID kfidToSaveIn,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLibraryName,
            /* [in] */ LIBRARYSAVEFLAGS lsf,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiSavedTo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellLibraryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellLibrary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellLibrary * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadLibraryFromItem )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in_opt IShellItem *psiLibrary,
            /* [in] */ DWORD grfMode);
        
        HRESULT ( STDMETHODCALLTYPE *LoadLibraryFromKnownFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID kfidLibrary,
            /* [in] */ DWORD grfMode);
        
        HRESULT ( STDMETHODCALLTYPE *AddFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in_opt IShellItem *psiLocation);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in_opt IShellItem *psiLocation);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolders )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ LIBRARYFOLDERFILTER lff,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *ResolveFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in_opt IShellItem *psiFolderToResolve,
            /* [in] */ DWORD dwTimeout,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSaveFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ DEFAULTSAVEFOLDERTYPE dsft,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSaveFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ DEFAULTSAVEFOLDERTYPE dsft,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            __RPC__in IShellLibrary * This,
            /* [out] */ __RPC__out LIBRARYOPTIONFLAGS *plofOptions);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ LIBRARYOPTIONFLAGS lofMask,
            /* [in] */ LIBRARYOPTIONFLAGS lofOptions);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderType )( 
            __RPC__in IShellLibrary * This,
            /* [out] */ __RPC__out FOLDERTYPEID *pftid);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderType )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in REFFOLDERTYPEID ftid);
        
        HRESULT ( STDMETHODCALLTYPE *GetIcon )( 
            __RPC__in IShellLibrary * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetIcon )( 
            __RPC__in IShellLibrary * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszIcon);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            __RPC__in IShellLibrary * This);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in_opt IShellItem *psiFolderToSaveIn,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLibraryName,
            /* [in] */ LIBRARYSAVEFLAGS lsf,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiSavedTo);
        
        HRESULT ( STDMETHODCALLTYPE *SaveInKnownFolder )( 
            __RPC__in IShellLibrary * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID kfidToSaveIn,
            /* [string][in] */ __RPC__in_string LPCWSTR pszLibraryName,
            /* [in] */ LIBRARYSAVEFLAGS lsf,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsiSavedTo);
        
        END_INTERFACE
    } IShellLibraryVtbl;

    interface IShellLibrary
    {
        CONST_VTBL struct IShellLibraryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLibrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLibrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLibrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLibrary_LoadLibraryFromItem(This,psiLibrary,grfMode)	\
    ( (This)->lpVtbl -> LoadLibraryFromItem(This,psiLibrary,grfMode) ) 

#define IShellLibrary_LoadLibraryFromKnownFolder(This,kfidLibrary,grfMode)	\
    ( (This)->lpVtbl -> LoadLibraryFromKnownFolder(This,kfidLibrary,grfMode) ) 

#define IShellLibrary_AddFolder(This,psiLocation)	\
    ( (This)->lpVtbl -> AddFolder(This,psiLocation) ) 

#define IShellLibrary_RemoveFolder(This,psiLocation)	\
    ( (This)->lpVtbl -> RemoveFolder(This,psiLocation) ) 

#define IShellLibrary_GetFolders(This,lff,riid,ppv)	\
    ( (This)->lpVtbl -> GetFolders(This,lff,riid,ppv) ) 

#define IShellLibrary_ResolveFolder(This,psiFolderToResolve,dwTimeout,riid,ppv)	\
    ( (This)->lpVtbl -> ResolveFolder(This,psiFolderToResolve,dwTimeout,riid,ppv) ) 

#define IShellLibrary_GetDefaultSaveFolder(This,dsft,riid,ppv)	\
    ( (This)->lpVtbl -> GetDefaultSaveFolder(This,dsft,riid,ppv) ) 

#define IShellLibrary_SetDefaultSaveFolder(This,dsft,psi)	\
    ( (This)->lpVtbl -> SetDefaultSaveFolder(This,dsft,psi) ) 

#define IShellLibrary_GetOptions(This,plofOptions)	\
    ( (This)->lpVtbl -> GetOptions(This,plofOptions) ) 

#define IShellLibrary_SetOptions(This,lofMask,lofOptions)	\
    ( (This)->lpVtbl -> SetOptions(This,lofMask,lofOptions) ) 

#define IShellLibrary_GetFolderType(This,pftid)	\
    ( (This)->lpVtbl -> GetFolderType(This,pftid) ) 

#define IShellLibrary_SetFolderType(This,ftid)	\
    ( (This)->lpVtbl -> SetFolderType(This,ftid) ) 

#define IShellLibrary_GetIcon(This,ppszIcon)	\
    ( (This)->lpVtbl -> GetIcon(This,ppszIcon) ) 

#define IShellLibrary_SetIcon(This,pszIcon)	\
    ( (This)->lpVtbl -> SetIcon(This,pszIcon) ) 

#define IShellLibrary_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IShellLibrary_Save(This,psiFolderToSaveIn,pszLibraryName,lsf,ppsiSavedTo)	\
    ( (This)->lpVtbl -> Save(This,psiFolderToSaveIn,pszLibraryName,lsf,ppsiSavedTo) ) 

#define IShellLibrary_SaveInKnownFolder(This,kfidToSaveIn,pszLibraryName,lsf,ppsiSavedTo)	\
    ( (This)->lpVtbl -> SaveInKnownFolder(This,kfidToSaveIn,pszLibraryName,lsf,ppsiSavedTo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLibrary_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0152 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum DEFAULT_FOLDER_MENU_RESTRICTIONS
    {
        DFMR_DEFAULT	= 0,
        DFMR_NO_STATIC_VERBS	= 0x8,
        DFMR_STATIC_VERBS_ONLY	= 0x10,
        DFMR_NO_RESOURCE_VERBS	= 0x20,
        DFMR_OPTIN_HANDLERS_ONLY	= 0x40,
        DFMR_RESOURCE_AND_FOLDER_VERBS_ONLY	= 0x80,
        DFMR_USE_SPECIFIED_HANDLERS	= 0x100,
        DFMR_USE_SPECIFIED_VERBS	= 0x200,
        DFMR_NO_ASYNC_VERBS	= 0x400
    } 	DEFAULT_FOLDER_MENU_RESTRICTIONS;

DEFINE_ENUM_FLAG_OPERATORS(DEFAULT_FOLDER_MENU_RESTRICTIONS)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0152_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0152_v0_0_s_ifspec;

#ifndef __IDefaultFolderMenuInitialize_INTERFACE_DEFINED__
#define __IDefaultFolderMenuInitialize_INTERFACE_DEFINED__

/* interface IDefaultFolderMenuInitialize */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDefaultFolderMenuInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7690aa79-f8fc-4615-a327-36f7d18f5d91")
    IDefaultFolderMenuInitialize : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ HWND hwnd,
            /* [annotation][unique][in] */ 
            _In_opt_  IContextMenuCB *pcmcb,
            /* [annotation][unique][in] */ 
            _In_opt_  PCIDLIST_ABSOLUTE pidlFolder,
            /* [annotation][unique][in] */ 
            _In_opt_  IShellFolder *psf,
            /* [in] */ UINT cidl,
            /* [size_is][unique][in] */ PCUITEMID_CHILD_ARRAY apidl,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punkAssociation,
            /* [in] */ UINT cKeys,
            /* [annotation][size_is][unique][in] */ 
            _In_opt_  const HKEY *aKeys) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenuRestrictions( 
            /* [in] */ DEFAULT_FOLDER_MENU_RESTRICTIONS dfmrValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMenuRestrictions( 
            /* [in] */ DEFAULT_FOLDER_MENU_RESTRICTIONS dfmrMask,
            /* [out] */ DEFAULT_FOLDER_MENU_RESTRICTIONS *pdfmrValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHandlerClsid( 
            /* [in] */ REFCLSID rclsid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDefaultFolderMenuInitializeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDefaultFolderMenuInitialize * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDefaultFolderMenuInitialize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDefaultFolderMenuInitialize * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IDefaultFolderMenuInitialize * This,
            /* [in] */ HWND hwnd,
            /* [annotation][unique][in] */ 
            _In_opt_  IContextMenuCB *pcmcb,
            /* [annotation][unique][in] */ 
            _In_opt_  PCIDLIST_ABSOLUTE pidlFolder,
            /* [annotation][unique][in] */ 
            _In_opt_  IShellFolder *psf,
            /* [in] */ UINT cidl,
            /* [size_is][unique][in] */ PCUITEMID_CHILD_ARRAY apidl,
            /* [annotation][unique][in] */ 
            _In_opt_  IUnknown *punkAssociation,
            /* [in] */ UINT cKeys,
            /* [annotation][size_is][unique][in] */ 
            _In_opt_  const HKEY *aKeys);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenuRestrictions )( 
            IDefaultFolderMenuInitialize * This,
            /* [in] */ DEFAULT_FOLDER_MENU_RESTRICTIONS dfmrValues);
        
        HRESULT ( STDMETHODCALLTYPE *GetMenuRestrictions )( 
            IDefaultFolderMenuInitialize * This,
            /* [in] */ DEFAULT_FOLDER_MENU_RESTRICTIONS dfmrMask,
            /* [out] */ DEFAULT_FOLDER_MENU_RESTRICTIONS *pdfmrValues);
        
        HRESULT ( STDMETHODCALLTYPE *SetHandlerClsid )( 
            IDefaultFolderMenuInitialize * This,
            /* [in] */ REFCLSID rclsid);
        
        END_INTERFACE
    } IDefaultFolderMenuInitializeVtbl;

    interface IDefaultFolderMenuInitialize
    {
        CONST_VTBL struct IDefaultFolderMenuInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDefaultFolderMenuInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDefaultFolderMenuInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDefaultFolderMenuInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDefaultFolderMenuInitialize_Initialize(This,hwnd,pcmcb,pidlFolder,psf,cidl,apidl,punkAssociation,cKeys,aKeys)	\
    ( (This)->lpVtbl -> Initialize(This,hwnd,pcmcb,pidlFolder,psf,cidl,apidl,punkAssociation,cKeys,aKeys) ) 

#define IDefaultFolderMenuInitialize_SetMenuRestrictions(This,dfmrValues)	\
    ( (This)->lpVtbl -> SetMenuRestrictions(This,dfmrValues) ) 

#define IDefaultFolderMenuInitialize_GetMenuRestrictions(This,dfmrMask,pdfmrValues)	\
    ( (This)->lpVtbl -> GetMenuRestrictions(This,dfmrMask,pdfmrValues) ) 

#define IDefaultFolderMenuInitialize_SetHandlerClsid(This,rclsid)	\
    ( (This)->lpVtbl -> SetHandlerClsid(This,rclsid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDefaultFolderMenuInitialize_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0153 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef /* [v1_enum] */ 
enum ACTIVATEOPTIONS
    {
        AO_NONE	= 0,
        AO_DESIGNMODE	= 0x1,
        AO_NOERRORUI	= 0x2,
        AO_NOSPLASHSCREEN	= 0x4,
        AO_PRELAUNCH	= 0x2000000
    } 	ACTIVATEOPTIONS;

DEFINE_ENUM_FLAG_OPERATORS(ACTIVATEOPTIONS)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0153_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0153_v0_0_s_ifspec;

#ifndef __IApplicationActivationManager_INTERFACE_DEFINED__
#define __IApplicationActivationManager_INTERFACE_DEFINED__

/* interface IApplicationActivationManager */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IApplicationActivationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2e941141-7f97-4756-ba1d-9decde894a3d")
    IApplicationActivationManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ActivateApplication( 
            /* [in] */ __RPC__in LPCWSTR appUserModelId,
            /* [unique][in] */ __RPC__in_opt LPCWSTR arguments,
            /* [in] */ ACTIVATEOPTIONS options,
            /* [out] */ __RPC__out DWORD *processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateForFile( 
            /* [in] */ __RPC__in LPCWSTR appUserModelId,
            /* [in] */ __RPC__in_opt IShellItemArray *itemArray,
            /* [unique][in] */ __RPC__in_opt LPCWSTR verb,
            /* [out] */ __RPC__out DWORD *processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateForProtocol( 
            /* [in] */ __RPC__in LPCWSTR appUserModelId,
            /* [in] */ __RPC__in_opt IShellItemArray *itemArray,
            /* [out] */ __RPC__out DWORD *processId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationActivationManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationActivationManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationActivationManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationActivationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateApplication )( 
            __RPC__in IApplicationActivationManager * This,
            /* [in] */ __RPC__in LPCWSTR appUserModelId,
            /* [unique][in] */ __RPC__in_opt LPCWSTR arguments,
            /* [in] */ ACTIVATEOPTIONS options,
            /* [out] */ __RPC__out DWORD *processId);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateForFile )( 
            __RPC__in IApplicationActivationManager * This,
            /* [in] */ __RPC__in LPCWSTR appUserModelId,
            /* [in] */ __RPC__in_opt IShellItemArray *itemArray,
            /* [unique][in] */ __RPC__in_opt LPCWSTR verb,
            /* [out] */ __RPC__out DWORD *processId);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateForProtocol )( 
            __RPC__in IApplicationActivationManager * This,
            /* [in] */ __RPC__in LPCWSTR appUserModelId,
            /* [in] */ __RPC__in_opt IShellItemArray *itemArray,
            /* [out] */ __RPC__out DWORD *processId);
        
        END_INTERFACE
    } IApplicationActivationManagerVtbl;

    interface IApplicationActivationManager
    {
        CONST_VTBL struct IApplicationActivationManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationActivationManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationActivationManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationActivationManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationActivationManager_ActivateApplication(This,appUserModelId,arguments,options,processId)	\
    ( (This)->lpVtbl -> ActivateApplication(This,appUserModelId,arguments,options,processId) ) 

#define IApplicationActivationManager_ActivateForFile(This,appUserModelId,itemArray,verb,processId)	\
    ( (This)->lpVtbl -> ActivateForFile(This,appUserModelId,itemArray,verb,processId) ) 

#define IApplicationActivationManager_ActivateForProtocol(This,appUserModelId,itemArray,processId)	\
    ( (This)->lpVtbl -> ActivateForProtocol(This,appUserModelId,itemArray,processId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationActivationManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0154 */
/* [local] */ 

#endif // NTDDI_WIN8


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0154_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0154_v0_0_s_ifspec;


#ifndef __ShellCoreObjects_LIBRARY_DEFINED__
#define __ShellCoreObjects_LIBRARY_DEFINED__

/* library ShellCoreObjects */
/* [version][lcid][uuid] */ 


EXTERN_C const IID LIBID_ShellCoreObjects;

EXTERN_C const CLSID CLSID_DesktopWallpaper;

#ifdef __cplusplus

class DECLSPEC_UUID("C2CF3110-460E-4fc1-B9D0-8A1C0C9CC4BD")
DesktopWallpaper;
#endif

EXTERN_C const CLSID CLSID_ShellDesktop;

#ifdef __cplusplus

class DECLSPEC_UUID("00021400-0000-0000-C000-000000000046")
ShellDesktop;
#endif

EXTERN_C const CLSID CLSID_ShellFSFolder;

#ifdef __cplusplus

class DECLSPEC_UUID("F3364BA0-65B9-11CE-A9BA-00AA004AE837")
ShellFSFolder;
#endif

EXTERN_C const CLSID CLSID_NetworkPlaces;

#ifdef __cplusplus

class DECLSPEC_UUID("208D2C60-3AEA-1069-A2D7-08002B30309D")
NetworkPlaces;
#endif

EXTERN_C const CLSID CLSID_ShellLink;

#ifdef __cplusplus

class DECLSPEC_UUID("00021401-0000-0000-C000-000000000046")
ShellLink;
#endif

EXTERN_C const CLSID CLSID_DriveSizeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("94357B53-CA29-4b78-83AE-E8FE7409134F")
DriveSizeCategorizer;
#endif

EXTERN_C const CLSID CLSID_DriveTypeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("B0A8F3CF-4333-4bab-8873-1CCB1CADA48B")
DriveTypeCategorizer;
#endif

EXTERN_C const CLSID CLSID_FreeSpaceCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("B5607793-24AC-44c7-82E2-831726AA6CB7")
FreeSpaceCategorizer;
#endif

EXTERN_C const CLSID CLSID_SizeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("55d7b852-f6d1-42f2-aa75-8728a1b2d264")
SizeCategorizer;
#endif

EXTERN_C const CLSID CLSID_PropertiesUI;

#ifdef __cplusplus

class DECLSPEC_UUID("d912f8cf-0396-4915-884e-fb425d32943b")
PropertiesUI;
#endif

EXTERN_C const CLSID CLSID_UserNotification;

#ifdef __cplusplus

class DECLSPEC_UUID("0010890e-8789-413c-adbc-48f5b511b3af")
UserNotification;
#endif

EXTERN_C const CLSID CLSID_TaskbarList;

#ifdef __cplusplus

class DECLSPEC_UUID("56FDF344-FD6D-11d0-958A-006097C9A090")
TaskbarList;
#endif

EXTERN_C const CLSID CLSID_ShellItem;

#ifdef __cplusplus

class DECLSPEC_UUID("9ac9fbe1-e0a2-4ad6-b4ee-e212013ea917")
ShellItem;
#endif

EXTERN_C const CLSID CLSID_NamespaceWalker;

#ifdef __cplusplus

class DECLSPEC_UUID("72eb61e0-8672-4303-9175-f2e4c68b2e7c")
NamespaceWalker;
#endif

EXTERN_C const CLSID CLSID_FileOperation;

#ifdef __cplusplus

class DECLSPEC_UUID("3ad05575-8857-4850-9277-11b85bdb8e09")
FileOperation;
#endif

EXTERN_C const CLSID CLSID_FileOpenDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("DC1C5A9C-E88A-4dde-A5A1-60F82A20AEF7")
FileOpenDialog;
#endif

EXTERN_C const CLSID CLSID_FileSaveDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("C0B4E2F3-BA21-4773-8DBA-335EC946EB8B")
FileSaveDialog;
#endif

EXTERN_C const CLSID CLSID_KnownFolderManager;

#ifdef __cplusplus

class DECLSPEC_UUID("4df0c730-df9d-4ae3-9153-aa6b82e9795a")
KnownFolderManager;
#endif

EXTERN_C const CLSID CLSID_SharingConfigurationManager;

#ifdef __cplusplus

class DECLSPEC_UUID("49F371E1-8C5C-4d9c-9A3B-54A6827F513C")
SharingConfigurationManager;
#endif

EXTERN_C const CLSID CLSID_NetworkConnections;

#ifdef __cplusplus

class DECLSPEC_UUID("7007ACC7-3202-11D1-AAD2-00805FC1270E")
NetworkConnections;
#endif

EXTERN_C const CLSID CLSID_ScheduledTasks;

#ifdef __cplusplus

class DECLSPEC_UUID("D6277990-4C6A-11CF-8D87-00AA0060F5BF")
ScheduledTasks;
#endif

EXTERN_C const CLSID CLSID_ApplicationAssociationRegistration;

#ifdef __cplusplus

class DECLSPEC_UUID("591209c7-767b-42b2-9fba-44ee4615f2c7")
ApplicationAssociationRegistration;
#endif

EXTERN_C const CLSID CLSID_SearchFolderItemFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("14010e02-bbbd-41f0-88e3-eda371216584")
SearchFolderItemFactory;
#endif

EXTERN_C const CLSID CLSID_OpenControlPanel;

#ifdef __cplusplus

class DECLSPEC_UUID("06622D85-6856-4460-8DE1-A81921B41C4B")
OpenControlPanel;
#endif

EXTERN_C const CLSID CLSID_MailRecipient;

#ifdef __cplusplus

class DECLSPEC_UUID("9E56BE60-C50F-11CF-9A2C-00A0C90A90CE")
MailRecipient;
#endif

EXTERN_C const CLSID CLSID_NetworkExplorerFolder;

#ifdef __cplusplus

class DECLSPEC_UUID("F02C1A0D-BE21-4350-88B0-7367FC96EF3C")
NetworkExplorerFolder;
#endif

EXTERN_C const CLSID CLSID_DestinationList;

#ifdef __cplusplus

class DECLSPEC_UUID("77f10cf0-3db5-4966-b520-b7c54fd35ed6")
DestinationList;
#endif

EXTERN_C const CLSID CLSID_ApplicationDestinations;

#ifdef __cplusplus

class DECLSPEC_UUID("86c14003-4d6b-4ef3-a7b4-0506663b2e68")
ApplicationDestinations;
#endif

EXTERN_C const CLSID CLSID_ApplicationDocumentLists;

#ifdef __cplusplus

class DECLSPEC_UUID("86bec222-30f2-47e0-9f25-60d11cd75c28")
ApplicationDocumentLists;
#endif

EXTERN_C const CLSID CLSID_HomeGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("DE77BA04-3C92-4d11-A1A5-42352A53E0E3")
HomeGroup;
#endif

EXTERN_C const CLSID CLSID_ShellLibrary;

#ifdef __cplusplus

class DECLSPEC_UUID("d9b3211d-e57f-4426-aaef-30a806add397")
ShellLibrary;
#endif

EXTERN_C const CLSID CLSID_AppStartupLink;

#ifdef __cplusplus

class DECLSPEC_UUID("273eb5e7-88b0-4843-bfef-e2c81d43aae5")
AppStartupLink;
#endif

EXTERN_C const CLSID CLSID_EnumerableObjectCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("2d3468c1-36a7-43b6-ac24-d3f02fd9607a")
EnumerableObjectCollection;
#endif

EXTERN_C const CLSID CLSID_FrameworkInputPane;

#ifdef __cplusplus

class DECLSPEC_UUID("D5120AA3-46BA-44C5-822D-CA8092C1FC72")
FrameworkInputPane;
#endif

EXTERN_C const CLSID CLSID_DefFolderMenu;

#ifdef __cplusplus

class DECLSPEC_UUID("c63382be-7933-48d0-9ac8-85fb46be2fdd")
DefFolderMenu;
#endif

EXTERN_C const CLSID CLSID_AppVisibility;

#ifdef __cplusplus

class DECLSPEC_UUID("7E5FE3D9-985F-4908-91F9-EE19F9FD1514")
AppVisibility;
#endif

EXTERN_C const CLSID CLSID_AppShellVerbHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("4ED3A719-CEA8-4BD9-910D-E252F997AFC2")
AppShellVerbHandler;
#endif

EXTERN_C const CLSID CLSID_ExecuteUnknown;

#ifdef __cplusplus

class DECLSPEC_UUID("e44e9428-bdbc-4987-a099-40dc8fd255e7")
ExecuteUnknown;
#endif

EXTERN_C const CLSID CLSID_PackageDebugSettings;

#ifdef __cplusplus

class DECLSPEC_UUID("B1AEC16F-2383-4852-B0E9-8F0B1DC66B4D")
PackageDebugSettings;
#endif

EXTERN_C const CLSID CLSID_SuspensionDependencyManager;

#ifdef __cplusplus

class DECLSPEC_UUID("6B273FC5-61FD-4918-95A2-C3B5E9D7F581")
SuspensionDependencyManager;
#endif

EXTERN_C const CLSID CLSID_ApplicationActivationManager;

#ifdef __cplusplus

class DECLSPEC_UUID("45BA127D-10A8-46EA-8AB7-56EA9078943C")
ApplicationActivationManager;
#endif

EXTERN_C const CLSID CLSID_ApplicationDesignModeSettings;

#ifdef __cplusplus

class DECLSPEC_UUID("958a6fb5-dcb2-4faf-aafd-7fb054ad1a3b")
ApplicationDesignModeSettings;
#endif
#endif /* __ShellCoreObjects_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_shobjidl_core_0000_0155 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHGetTemporaryPropertyForItem(_In_ IShellItem *psi, _In_ REFPROPERTYKEY propkey, _Out_ PROPVARIANT *ppropvar);
SHSTDAPI SHSetTemporaryPropertyForItem(_In_ IShellItem *psi, _In_ REFPROPERTYKEY propkey, _In_ REFPROPVARIANT propvar);
#endif  // NTDDI_VISTA
#if (NTDDI_VERSION >= NTDDI_WIN7)
#if (_WIN32_IE >= _WIN32_IE_IE70)
typedef /* [v1_enum] */ 
enum LIBRARYMANAGEDIALOGOPTIONS
    {
        LMD_DEFAULT	= 0,
        LMD_ALLOWUNINDEXABLENETWORKLOCATIONS	= 0x1
    } 	LIBRARYMANAGEDIALOGOPTIONS;

DEFINE_ENUM_FLAG_OPERATORS(LIBRARYMANAGEDIALOGOPTIONS)
STDAPI SHShowManageLibraryUI(_In_ IShellItem *psiLibrary, _In_ HWND hwndOwner, _In_opt_ LPCWSTR pszTitle, _In_opt_ LPCWSTR pszInstruction, _In_ LIBRARYMANAGEDIALOGOPTIONS lmdOptions);
STDAPI SHResolveLibrary(_In_ IShellItem *psiLibrary);
#if defined(__cplusplus) && !defined(CINTERFACE)

// These functions properly initialize their _Outptr_ parameters to NULL, and only return NULL
// on failure, but /analyze can't presently distinguish the failure case from the success case, and
// throws warning C6387 anyway.  Thus, the warning is disabled to avoid generating noise for code
// that includes shobjidl.h and compiles with /analyze.
#pragma warning(push)
#pragma warning(disable:6387)

__inline HRESULT SHCreateLibrary(_In_ REFIID riid, _Outptr_ void **ppv)
{
    return CoCreateInstance(CLSID_ShellLibrary, NULL, CLSCTX_INPROC_SERVER, riid, ppv);
}

__inline HRESULT SHLoadLibraryFromItem(_In_ IShellItem *psiLibrary, _In_ DWORD grfMode, _In_ REFIID riid, _Outptr_ void **ppv)
{
    *ppv = NULL;
    IShellLibrary *plib;
    HRESULT hr = CoCreateInstance(CLSID_ShellLibrary, NULL, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&plib));
    if (SUCCEEDED(hr))
    {
        hr = plib->LoadLibraryFromItem(psiLibrary, grfMode);
        if (SUCCEEDED(hr))
        {
            hr = plib->QueryInterface(riid, ppv);
        }
        plib->Release();
    }
    return hr;
}

__inline HRESULT SHLoadLibraryFromKnownFolder(_In_ REFKNOWNFOLDERID kfidLibrary, _In_ DWORD grfMode, _In_ REFIID riid, _Outptr_ void **ppv)
{
    *ppv = NULL;
    IShellLibrary *plib;
    HRESULT hr = CoCreateInstance(CLSID_ShellLibrary, NULL, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&plib));
    if (SUCCEEDED(hr))
    {
        hr = plib->LoadLibraryFromKnownFolder(kfidLibrary, grfMode);
        if (SUCCEEDED(hr))
        {
            hr = plib->QueryInterface(riid, ppv);
        }
        plib->Release();
    }
    return hr;
}

__inline HRESULT SHLoadLibraryFromParsingName(_In_ PCWSTR pszParsingName, _In_ DWORD grfMode, _In_ REFIID riid, _Outptr_ void **ppv)
{
    *ppv = NULL;
    IShellItem *psiLibrary;
    HRESULT hr = SHCreateItemFromParsingName(pszParsingName, NULL, IID_PPV_ARGS(&psiLibrary));
    if (SUCCEEDED(hr))
    {
        hr = SHLoadLibraryFromItem(psiLibrary, grfMode, riid, ppv);
        psiLibrary->Release();
    }
    return hr;
}

__inline HRESULT SHAddFolderPathToLibrary(_In_ IShellLibrary *plib, _In_ PCWSTR pszFolderPath)
{
    IShellItem *psiFolder;
    HRESULT hr = SHCreateItemFromParsingName(pszFolderPath, NULL, IID_PPV_ARGS(&psiFolder));
    if (SUCCEEDED(hr))
    {
        hr = plib->AddFolder(psiFolder);
        psiFolder->Release();
    }
    return hr;
}

__inline HRESULT SHRemoveFolderPathFromLibrary(_In_ IShellLibrary *plib, _In_ PCWSTR pszFolderPath)
{
    PIDLIST_ABSOLUTE pidlFolder = SHSimpleIDListFromPath(pszFolderPath);
    HRESULT hr = pidlFolder ? S_OK : E_INVALIDARG;
    if (SUCCEEDED(hr))
    {
        IShellItem *psiFolder;
        hr = SHCreateItemFromIDList(pidlFolder, IID_PPV_ARGS(&psiFolder));
        if (SUCCEEDED(hr))
        {
            hr = plib->RemoveFolder(psiFolder);
            psiFolder->Release();
        }
        CoTaskMemFree(pidlFolder);
    }
    return hr;
}

__inline HRESULT SHSaveLibraryInFolderPath(_In_ IShellLibrary *plib, _In_ PCWSTR pszFolderPath, _In_ PCWSTR pszLibraryName, _In_ LIBRARYSAVEFLAGS lsf, _Outptr_opt_ PWSTR *ppszSavedToPath)
{
    if (ppszSavedToPath)
    {
        *ppszSavedToPath = NULL;
    }

    IShellItem *psiFolder;
    HRESULT hr = SHCreateItemFromParsingName(pszFolderPath, NULL, IID_PPV_ARGS(&psiFolder));
    if (SUCCEEDED(hr))
    {
        IShellItem *psiSavedTo;
        hr = plib->Save(psiFolder, pszLibraryName, lsf, &psiSavedTo);
        if (SUCCEEDED(hr))
        {
            if (ppszSavedToPath)
            {
                hr = psiSavedTo->GetDisplayName(SIGDN_DESKTOPABSOLUTEPARSING, ppszSavedToPath);
            }
            psiSavedTo->Release();
        }
        psiFolder->Release();
    }
    return hr;
}

#pragma warning(pop)
#endif  // __cplusplus && !CINTERFACE
#endif  // _WIN32_IE >= _WIN32_IE_IE70
#endif  // NTDDI_WIN7
#if (NTDDI_VERSION >= NTDDI_VISTA)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0155_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0155_v0_0_s_ifspec;

#ifndef __IAssocHandlerInvoker_INTERFACE_DEFINED__
#define __IAssocHandlerInvoker_INTERFACE_DEFINED__

/* interface IAssocHandlerInvoker */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IAssocHandlerInvoker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92218CAB-ECAA-4335-8133-807FD234C2EE")
    IAssocHandlerInvoker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SupportsSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAssocHandlerInvokerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssocHandlerInvoker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssocHandlerInvoker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssocHandlerInvoker * This);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsSelection )( 
            IAssocHandlerInvoker * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssocHandlerInvoker * This);
        
        END_INTERFACE
    } IAssocHandlerInvokerVtbl;

    interface IAssocHandlerInvoker
    {
        CONST_VTBL struct IAssocHandlerInvokerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssocHandlerInvoker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssocHandlerInvoker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssocHandlerInvoker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssocHandlerInvoker_SupportsSelection(This)	\
    ( (This)->lpVtbl -> SupportsSelection(This) ) 

#define IAssocHandlerInvoker_Invoke(This)	\
    ( (This)->lpVtbl -> Invoke(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssocHandlerInvoker_INTERFACE_DEFINED__ */


#ifndef __IAssocHandler_INTERFACE_DEFINED__
#define __IAssocHandler_INTERFACE_DEFINED__

/* interface IAssocHandler */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IAssocHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F04061AC-1659-4a3f-A954-775AA57FC083")
    IAssocHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [annotation][out][string] */ 
            _Outptr_  LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIName( 
            /* [annotation][out][string] */ 
            _Outptr_  LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [annotation][out][string] */ 
            _Outptr_  LPWSTR *ppszPath,
            /* [annotation][out] */ 
            _Out_  int *pIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRecommended( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeDefault( 
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [annotation][in] */ 
            _In_  IDataObject *pdo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInvoker( 
            /* [annotation][in] */ 
            _In_  IDataObject *pdo,
            /* [annotation][out] */ 
            _Outptr_  IAssocHandlerInvoker **ppInvoker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAssocHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssocHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssocHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssocHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAssocHandler * This,
            /* [annotation][out][string] */ 
            _Outptr_  LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIName )( 
            IAssocHandler * This,
            /* [annotation][out][string] */ 
            _Outptr_  LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            IAssocHandler * This,
            /* [annotation][out][string] */ 
            _Outptr_  LPWSTR *ppszPath,
            /* [annotation][out] */ 
            _Out_  int *pIndex);
        
        HRESULT ( STDMETHODCALLTYPE *IsRecommended )( 
            IAssocHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *MakeDefault )( 
            IAssocHandler * This,
            /* [annotation][string][in] */ 
            _In_  LPCWSTR pszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssocHandler * This,
            /* [annotation][in] */ 
            _In_  IDataObject *pdo);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInvoker )( 
            IAssocHandler * This,
            /* [annotation][in] */ 
            _In_  IDataObject *pdo,
            /* [annotation][out] */ 
            _Outptr_  IAssocHandlerInvoker **ppInvoker);
        
        END_INTERFACE
    } IAssocHandlerVtbl;

    interface IAssocHandler
    {
        CONST_VTBL struct IAssocHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssocHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssocHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssocHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssocHandler_GetName(This,ppsz)	\
    ( (This)->lpVtbl -> GetName(This,ppsz) ) 

#define IAssocHandler_GetUIName(This,ppsz)	\
    ( (This)->lpVtbl -> GetUIName(This,ppsz) ) 

#define IAssocHandler_GetIconLocation(This,ppszPath,pIndex)	\
    ( (This)->lpVtbl -> GetIconLocation(This,ppszPath,pIndex) ) 

#define IAssocHandler_IsRecommended(This)	\
    ( (This)->lpVtbl -> IsRecommended(This) ) 

#define IAssocHandler_MakeDefault(This,pszDescription)	\
    ( (This)->lpVtbl -> MakeDefault(This,pszDescription) ) 

#define IAssocHandler_Invoke(This,pdo)	\
    ( (This)->lpVtbl -> Invoke(This,pdo) ) 

#define IAssocHandler_CreateInvoker(This,pdo,ppInvoker)	\
    ( (This)->lpVtbl -> CreateInvoker(This,pdo,ppInvoker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssocHandler_INTERFACE_DEFINED__ */


#ifndef __IEnumAssocHandlers_INTERFACE_DEFINED__
#define __IEnumAssocHandlers_INTERFACE_DEFINED__

/* interface IEnumAssocHandlers */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumAssocHandlers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("973810ae-9599-4b88-9e4d-6ee98c9552da")
    IEnumAssocHandlers : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  IAssocHandler **rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0,celt)  ULONG *pceltFetched) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumAssocHandlersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumAssocHandlers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumAssocHandlers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumAssocHandlers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumAssocHandlers * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  IAssocHandler **rgelt,
            /* [annotation][out] */ 
            _Out_opt_ _Deref_out_range_(0,celt)  ULONG *pceltFetched);
        
        END_INTERFACE
    } IEnumAssocHandlersVtbl;

    interface IEnumAssocHandlers
    {
        CONST_VTBL struct IEnumAssocHandlersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumAssocHandlers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumAssocHandlers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumAssocHandlers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumAssocHandlers_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumAssocHandlers_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0158 */
/* [local] */ 

typedef 
enum ASSOC_FILTER
    {
        ASSOC_FILTER_NONE	= 0,
        ASSOC_FILTER_RECOMMENDED	= 0x1
    } 	ASSOC_FILTER;

DEFINE_ENUM_FLAG_OPERATORS(ASSOC_FILTER)
SHSTDAPI SHAssocEnumHandlers(_In_ PCWSTR pszExtra, _In_ ASSOC_FILTER afFilter, _Outptr_ IEnumAssocHandlers **ppEnumHandler);
#endif  // NTDDI_VISTA
#if (NTDDI_VERSION >= NTDDI_WIN7)
SHSTDAPI SHAssocEnumHandlersForProtocolByApplication(_In_ PCWSTR protocol, _In_ REFIID riid, _Outptr_ void **enumHandlers);
#endif  // NTDDI_WIN7
#if (NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0158_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0158_v0_0_s_ifspec;

#ifndef __IDataObjectProvider_INTERFACE_DEFINED__
#define __IDataObjectProvider_INTERFACE_DEFINED__

/* interface IDataObjectProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDataObjectProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D25F6D6-4B2A-433c-9184-7C33AD35D001")
    IDataObjectProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDataObject( 
            /* [out] */ __RPC__deref_out_opt IDataObject **dataObject) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetDataObject( 
            /* [annotation][in] */ 
            _In_  IDataObject *dataObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataObjectProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDataObjectProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDataObjectProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDataObjectProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataObject )( 
            __RPC__in IDataObjectProvider * This,
            /* [out] */ __RPC__deref_out_opt IDataObject **dataObject);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetDataObject )( 
            IDataObjectProvider * This,
            /* [annotation][in] */ 
            _In_  IDataObject *dataObject);
        
        END_INTERFACE
    } IDataObjectProviderVtbl;

    interface IDataObjectProvider
    {
        CONST_VTBL struct IDataObjectProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataObjectProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataObjectProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataObjectProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataObjectProvider_GetDataObject(This,dataObject)	\
    ( (This)->lpVtbl -> GetDataObject(This,dataObject) ) 

#define IDataObjectProvider_SetDataObject(This,dataObject)	\
    ( (This)->lpVtbl -> SetDataObject(This,dataObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataObjectProvider_INTERFACE_DEFINED__ */


#ifndef __IDataTransferManagerInterop_INTERFACE_DEFINED__
#define __IDataTransferManagerInterop_INTERFACE_DEFINED__

/* interface IDataTransferManagerInterop */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDataTransferManagerInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A3DCD6C-3EAB-43DC-BCDE-45671CE800C8")
    IDataTransferManagerInterop : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetForWindow( 
            /* [in] */ __RPC__in HWND appWindow,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][retval][out] */ __RPC__deref_out_opt void **dataTransferManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowShareUIForWindow( 
            /* [in] */ __RPC__in HWND appWindow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataTransferManagerInteropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDataTransferManagerInterop * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDataTransferManagerInterop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDataTransferManagerInterop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )( 
            __RPC__in IDataTransferManagerInterop * This,
            /* [in] */ __RPC__in HWND appWindow,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][retval][out] */ __RPC__deref_out_opt void **dataTransferManager);
        
        HRESULT ( STDMETHODCALLTYPE *ShowShareUIForWindow )( 
            __RPC__in IDataTransferManagerInterop * This,
            /* [in] */ __RPC__in HWND appWindow);
        
        END_INTERFACE
    } IDataTransferManagerInteropVtbl;

    interface IDataTransferManagerInterop
    {
        CONST_VTBL struct IDataTransferManagerInteropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataTransferManagerInterop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataTransferManagerInterop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataTransferManagerInterop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataTransferManagerInterop_GetForWindow(This,appWindow,riid,dataTransferManager)	\
    ( (This)->lpVtbl -> GetForWindow(This,appWindow,riid,dataTransferManager) ) 

#define IDataTransferManagerInterop_ShowShareUIForWindow(This,appWindow)	\
    ( (This)->lpVtbl -> ShowShareUIForWindow(This,appWindow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataTransferManagerInterop_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0160 */
/* [local] */ 

#endif // NTDDI_WIN8
#if (NTDDI_VERSION >= NTDDI_WIN8)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0160_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0160_v0_0_s_ifspec;

#ifndef __IFrameworkInputPaneHandler_INTERFACE_DEFINED__
#define __IFrameworkInputPaneHandler_INTERFACE_DEFINED__

/* interface IFrameworkInputPaneHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID_IFrameworkInputPaneHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("226C537B-1E76-4D9E-A760-33DB29922F18")
    IFrameworkInputPaneHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Showing( 
            /* [in] */ __RPC__in RECT *prcInputPaneScreenLocation,
            /* [in] */ BOOL fEnsureFocusedElementInView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Hiding( 
            /* [in] */ BOOL fEnsureFocusedElementInView) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFrameworkInputPaneHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFrameworkInputPaneHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFrameworkInputPaneHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFrameworkInputPaneHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Showing )( 
            __RPC__in IFrameworkInputPaneHandler * This,
            /* [in] */ __RPC__in RECT *prcInputPaneScreenLocation,
            /* [in] */ BOOL fEnsureFocusedElementInView);
        
        HRESULT ( STDMETHODCALLTYPE *Hiding )( 
            __RPC__in IFrameworkInputPaneHandler * This,
            /* [in] */ BOOL fEnsureFocusedElementInView);
        
        END_INTERFACE
    } IFrameworkInputPaneHandlerVtbl;

    interface IFrameworkInputPaneHandler
    {
        CONST_VTBL struct IFrameworkInputPaneHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFrameworkInputPaneHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFrameworkInputPaneHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFrameworkInputPaneHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFrameworkInputPaneHandler_Showing(This,prcInputPaneScreenLocation,fEnsureFocusedElementInView)	\
    ( (This)->lpVtbl -> Showing(This,prcInputPaneScreenLocation,fEnsureFocusedElementInView) ) 

#define IFrameworkInputPaneHandler_Hiding(This,fEnsureFocusedElementInView)	\
    ( (This)->lpVtbl -> Hiding(This,fEnsureFocusedElementInView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFrameworkInputPaneHandler_INTERFACE_DEFINED__ */


#ifndef __IFrameworkInputPane_INTERFACE_DEFINED__
#define __IFrameworkInputPane_INTERFACE_DEFINED__

/* interface IFrameworkInputPane */
/* [uuid][object] */ 


EXTERN_C const IID IID_IFrameworkInputPane;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5752238B-24F0-495A-82F1-2FD593056796")
    IFrameworkInputPane : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IUnknown *pWindow,
            /* [in] */ __RPC__in_opt IFrameworkInputPaneHandler *pHandler,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseWithHWND( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in_opt IFrameworkInputPaneHandler *pHandler,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Location( 
            /* [out] */ __RPC__out RECT *prcInputPaneScreenLocation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFrameworkInputPaneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IFrameworkInputPane * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IFrameworkInputPane * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IFrameworkInputPane * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IFrameworkInputPane * This,
            /* [in] */ __RPC__in_opt IUnknown *pWindow,
            /* [in] */ __RPC__in_opt IFrameworkInputPaneHandler *pHandler,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseWithHWND )( 
            __RPC__in IFrameworkInputPane * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in_opt IFrameworkInputPaneHandler *pHandler,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IFrameworkInputPane * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Location )( 
            __RPC__in IFrameworkInputPane * This,
            /* [out] */ __RPC__out RECT *prcInputPaneScreenLocation);
        
        END_INTERFACE
    } IFrameworkInputPaneVtbl;

    interface IFrameworkInputPane
    {
        CONST_VTBL struct IFrameworkInputPaneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFrameworkInputPane_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFrameworkInputPane_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFrameworkInputPane_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFrameworkInputPane_Advise(This,pWindow,pHandler,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pWindow,pHandler,pdwCookie) ) 

#define IFrameworkInputPane_AdviseWithHWND(This,hwnd,pHandler,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseWithHWND(This,hwnd,pHandler,pdwCookie) ) 

#define IFrameworkInputPane_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFrameworkInputPane_Location(This,prcInputPaneScreenLocation)	\
    ( (This)->lpVtbl -> Location(This,prcInputPaneScreenLocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFrameworkInputPane_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0162 */
/* [local] */ 


#ifndef PROP_CONTRACT_DELEGATE
#define PROP_CONTRACT_DELEGATE     L"ContractDelegate"
#endif // PROP_CONTRACT_DELEGATE

// For applications that use modern APIs and use a child or owned window
// that run on different threads this API must be used to indicate which
// window is the current main window. Call this API when those windows change their state.

__inline void SetContractDelegateWindow(_In_ HWND hwndSource, _In_opt_ HWND hwndDelegate)
{
    if (hwndDelegate != NULL)
    {
        SetPropW(hwndSource, PROP_CONTRACT_DELEGATE, (HANDLE)hwndDelegate);
    }
    else
    {
        RemovePropW(hwndSource, PROP_CONTRACT_DELEGATE);
    }
}

#endif // NTDDI_WIN8
#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef /* [v1_enum] */ 
enum MONITOR_APP_VISIBILITY
    {
        MAV_UNKNOWN	= 0,
        MAV_NO_APP_VISIBLE	= 1,
        MAV_APP_VISIBLE	= 2
    } 	MONITOR_APP_VISIBILITY;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0162_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0162_v0_0_s_ifspec;

#ifndef __IAppVisibilityEvents_INTERFACE_DEFINED__
#define __IAppVisibilityEvents_INTERFACE_DEFINED__

/* interface IAppVisibilityEvents */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAppVisibilityEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6584CE6B-7D82-49C2-89C9-C6BC02BA8C38")
    IAppVisibilityEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AppVisibilityOnMonitorChanged( 
            /* [in] */ __RPC__in HMONITOR hMonitor,
            /* [in] */ MONITOR_APP_VISIBILITY previousMode,
            /* [in] */ MONITOR_APP_VISIBILITY currentMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LauncherVisibilityChange( 
            /* [in] */ BOOL currentVisibleState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVisibilityEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppVisibilityEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppVisibilityEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppVisibilityEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *AppVisibilityOnMonitorChanged )( 
            __RPC__in IAppVisibilityEvents * This,
            /* [in] */ __RPC__in HMONITOR hMonitor,
            /* [in] */ MONITOR_APP_VISIBILITY previousMode,
            /* [in] */ MONITOR_APP_VISIBILITY currentMode);
        
        HRESULT ( STDMETHODCALLTYPE *LauncherVisibilityChange )( 
            __RPC__in IAppVisibilityEvents * This,
            /* [in] */ BOOL currentVisibleState);
        
        END_INTERFACE
    } IAppVisibilityEventsVtbl;

    interface IAppVisibilityEvents
    {
        CONST_VTBL struct IAppVisibilityEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVisibilityEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVisibilityEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVisibilityEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVisibilityEvents_AppVisibilityOnMonitorChanged(This,hMonitor,previousMode,currentMode)	\
    ( (This)->lpVtbl -> AppVisibilityOnMonitorChanged(This,hMonitor,previousMode,currentMode) ) 

#define IAppVisibilityEvents_LauncherVisibilityChange(This,currentVisibleState)	\
    ( (This)->lpVtbl -> LauncherVisibilityChange(This,currentVisibleState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVisibilityEvents_INTERFACE_DEFINED__ */


#ifndef __IAppVisibility_INTERFACE_DEFINED__
#define __IAppVisibility_INTERFACE_DEFINED__

/* interface IAppVisibility */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAppVisibility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2246EA2D-CAEA-4444-A3C4-6DE827E44313")
    IAppVisibility : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAppVisibilityOnMonitor( 
            /* [in] */ __RPC__in HMONITOR hMonitor,
            /* [out] */ __RPC__out MONITOR_APP_VISIBILITY *pMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsLauncherVisible( 
            /* [out] */ __RPC__out BOOL *pfVisible) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IAppVisibilityEvents *pCallback,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppVisibilityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppVisibility * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppVisibility * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppVisibility * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppVisibilityOnMonitor )( 
            __RPC__in IAppVisibility * This,
            /* [in] */ __RPC__in HMONITOR hMonitor,
            /* [out] */ __RPC__out MONITOR_APP_VISIBILITY *pMode);
        
        HRESULT ( STDMETHODCALLTYPE *IsLauncherVisible )( 
            __RPC__in IAppVisibility * This,
            /* [out] */ __RPC__out BOOL *pfVisible);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            __RPC__in IAppVisibility * This,
            /* [in] */ __RPC__in_opt IAppVisibilityEvents *pCallback,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            __RPC__in IAppVisibility * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IAppVisibilityVtbl;

    interface IAppVisibility
    {
        CONST_VTBL struct IAppVisibilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVisibility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVisibility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVisibility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVisibility_GetAppVisibilityOnMonitor(This,hMonitor,pMode)	\
    ( (This)->lpVtbl -> GetAppVisibilityOnMonitor(This,hMonitor,pMode) ) 

#define IAppVisibility_IsLauncherVisible(This,pfVisible)	\
    ( (This)->lpVtbl -> IsLauncherVisible(This,pfVisible) ) 

#define IAppVisibility_Advise(This,pCallback,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pCallback,pdwCookie) ) 

#define IAppVisibility_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVisibility_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0164 */
/* [local] */ 

#ifdef MIDL_PASS
typedef WCHAR *PZZWSTR;

#endif
typedef /* [v1_enum] */ 
enum PACKAGE_EXECUTION_STATE
    {
        PES_UNKNOWN	= 0,
        PES_RUNNING	= 1,
        PES_SUSPENDING	= 2,
        PES_SUSPENDED	= 3,
        PES_TERMINATED	= 4
    } 	PACKAGE_EXECUTION_STATE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0164_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0164_v0_0_s_ifspec;

#ifndef __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__
#define __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__

/* interface IPackageExecutionStateChangeNotification */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPackageExecutionStateChangeNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BB12A62-2AD8-432B-8CCF-0C2C52AFCD5B")
    IPackageExecutionStateChangeNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnStateChanged( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszPackageFullName,
            /* [in] */ PACKAGE_EXECUTION_STATE pesNewState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPackageExecutionStateChangeNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPackageExecutionStateChangeNotification * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPackageExecutionStateChangeNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPackageExecutionStateChangeNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChanged )( 
            __RPC__in IPackageExecutionStateChangeNotification * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPackageFullName,
            /* [in] */ PACKAGE_EXECUTION_STATE pesNewState);
        
        END_INTERFACE
    } IPackageExecutionStateChangeNotificationVtbl;

    interface IPackageExecutionStateChangeNotification
    {
        CONST_VTBL struct IPackageExecutionStateChangeNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPackageExecutionStateChangeNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPackageExecutionStateChangeNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPackageExecutionStateChangeNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPackageExecutionStateChangeNotification_OnStateChanged(This,pszPackageFullName,pesNewState)	\
    ( (This)->lpVtbl -> OnStateChanged(This,pszPackageFullName,pesNewState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__ */


#ifndef __IPackageDebugSettings_INTERFACE_DEFINED__
#define __IPackageDebugSettings_INTERFACE_DEFINED__

/* interface IPackageDebugSettings */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IPackageDebugSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F27C3930-8029-4AD1-94E3-3DBA417810C1")
    IPackageDebugSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnableDebugging( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR debuggerCommandLine,
            /* [annotation][in] */ 
            _In_opt_  PZZWSTR environment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisableDebugging( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TerminateAllProcesses( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTargetSessionId( 
            /* [annotation][in] */ 
            _In_  ULONG sessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateBackgroundTasks( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  ULONG *taskCount,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*taskCount)  LPCGUID *taskIds,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*taskCount)  LPCWSTR **taskNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateBackgroundTask( 
            /* [annotation][in] */ 
            _In_  LPCGUID taskId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartServicing( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopServicing( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartSessionRedirection( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_  ULONG sessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopSessionRedirection( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageExecutionState( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  PACKAGE_EXECUTION_STATE *packageExecutionState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterForPackageStateChanges( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_  IPackageExecutionStateChangeNotification *pPackageExecutionStateChangeNotification,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterForPackageStateChanges( 
            /* [annotation][in] */ 
            _In_  DWORD dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPackageDebugSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPackageDebugSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPackageDebugSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPackageDebugSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnableDebugging )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR debuggerCommandLine,
            /* [annotation][in] */ 
            _In_opt_  PZZWSTR environment);
        
        HRESULT ( STDMETHODCALLTYPE *DisableDebugging )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *TerminateAllProcesses )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTargetSessionId )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  ULONG sessionId);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateBackgroundTasks )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  ULONG *taskCount,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*taskCount)  LPCGUID *taskIds,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*taskCount)  LPCWSTR **taskNames);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateBackgroundTask )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCGUID taskId);
        
        HRESULT ( STDMETHODCALLTYPE *StartServicing )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *StopServicing )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *StartSessionRedirection )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_  ULONG sessionId);
        
        HRESULT ( STDMETHODCALLTYPE *StopSessionRedirection )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageExecutionState )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  PACKAGE_EXECUTION_STATE *packageExecutionState);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterForPackageStateChanges )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_  IPackageExecutionStateChangeNotification *pPackageExecutionStateChangeNotification,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterForPackageStateChanges )( 
            IPackageDebugSettings * This,
            /* [annotation][in] */ 
            _In_  DWORD dwCookie);
        
        END_INTERFACE
    } IPackageDebugSettingsVtbl;

    interface IPackageDebugSettings
    {
        CONST_VTBL struct IPackageDebugSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPackageDebugSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPackageDebugSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPackageDebugSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPackageDebugSettings_EnableDebugging(This,packageFullName,debuggerCommandLine,environment)	\
    ( (This)->lpVtbl -> EnableDebugging(This,packageFullName,debuggerCommandLine,environment) ) 

#define IPackageDebugSettings_DisableDebugging(This,packageFullName)	\
    ( (This)->lpVtbl -> DisableDebugging(This,packageFullName) ) 

#define IPackageDebugSettings_Suspend(This,packageFullName)	\
    ( (This)->lpVtbl -> Suspend(This,packageFullName) ) 

#define IPackageDebugSettings_Resume(This,packageFullName)	\
    ( (This)->lpVtbl -> Resume(This,packageFullName) ) 

#define IPackageDebugSettings_TerminateAllProcesses(This,packageFullName)	\
    ( (This)->lpVtbl -> TerminateAllProcesses(This,packageFullName) ) 

#define IPackageDebugSettings_SetTargetSessionId(This,sessionId)	\
    ( (This)->lpVtbl -> SetTargetSessionId(This,sessionId) ) 

#define IPackageDebugSettings_EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames)	\
    ( (This)->lpVtbl -> EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames) ) 

#define IPackageDebugSettings_ActivateBackgroundTask(This,taskId)	\
    ( (This)->lpVtbl -> ActivateBackgroundTask(This,taskId) ) 

#define IPackageDebugSettings_StartServicing(This,packageFullName)	\
    ( (This)->lpVtbl -> StartServicing(This,packageFullName) ) 

#define IPackageDebugSettings_StopServicing(This,packageFullName)	\
    ( (This)->lpVtbl -> StopServicing(This,packageFullName) ) 

#define IPackageDebugSettings_StartSessionRedirection(This,packageFullName,sessionId)	\
    ( (This)->lpVtbl -> StartSessionRedirection(This,packageFullName,sessionId) ) 

#define IPackageDebugSettings_StopSessionRedirection(This,packageFullName)	\
    ( (This)->lpVtbl -> StopSessionRedirection(This,packageFullName) ) 

#define IPackageDebugSettings_GetPackageExecutionState(This,packageFullName,packageExecutionState)	\
    ( (This)->lpVtbl -> GetPackageExecutionState(This,packageFullName,packageExecutionState) ) 

#define IPackageDebugSettings_RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie)	\
    ( (This)->lpVtbl -> RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie) ) 

#define IPackageDebugSettings_UnregisterForPackageStateChanges(This,dwCookie)	\
    ( (This)->lpVtbl -> UnregisterForPackageStateChanges(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPackageDebugSettings_INTERFACE_DEFINED__ */


#ifndef __IPackageDebugSettings2_INTERFACE_DEFINED__
#define __IPackageDebugSettings2_INTERFACE_DEFINED__

/* interface IPackageDebugSettings2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IPackageDebugSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E3194BB-AB82-4D22-93F5-FABDA40E7B16")
    IPackageDebugSettings2 : public IPackageDebugSettings
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateApps( 
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  ULONG *appCount,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*appCount)  LPWSTR **appUserModelIds,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*appCount)  LPWSTR **appDisplayNames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPackageDebugSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPackageDebugSettings2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPackageDebugSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPackageDebugSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnableDebugging )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR debuggerCommandLine,
            /* [annotation][in] */ 
            _In_opt_  PZZWSTR environment);
        
        HRESULT ( STDMETHODCALLTYPE *DisableDebugging )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *TerminateAllProcesses )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTargetSessionId )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  ULONG sessionId);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateBackgroundTasks )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  ULONG *taskCount,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*taskCount)  LPCGUID *taskIds,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*taskCount)  LPCWSTR **taskNames);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateBackgroundTask )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCGUID taskId);
        
        HRESULT ( STDMETHODCALLTYPE *StartServicing )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *StopServicing )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *StartSessionRedirection )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_  ULONG sessionId);
        
        HRESULT ( STDMETHODCALLTYPE *StopSessionRedirection )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageExecutionState )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  PACKAGE_EXECUTION_STATE *packageExecutionState);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterForPackageStateChanges )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][in] */ 
            _In_  IPackageExecutionStateChangeNotification *pPackageExecutionStateChangeNotification,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterForPackageStateChanges )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateApps )( 
            IPackageDebugSettings2 * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR packageFullName,
            /* [annotation][out] */ 
            _Out_  ULONG *appCount,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*appCount)  LPWSTR **appUserModelIds,
            /* [annotation][size_is][size_is][out] */ 
            _Outptr_result_buffer_(*appCount)  LPWSTR **appDisplayNames);
        
        END_INTERFACE
    } IPackageDebugSettings2Vtbl;

    interface IPackageDebugSettings2
    {
        CONST_VTBL struct IPackageDebugSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPackageDebugSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPackageDebugSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPackageDebugSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPackageDebugSettings2_EnableDebugging(This,packageFullName,debuggerCommandLine,environment)	\
    ( (This)->lpVtbl -> EnableDebugging(This,packageFullName,debuggerCommandLine,environment) ) 

#define IPackageDebugSettings2_DisableDebugging(This,packageFullName)	\
    ( (This)->lpVtbl -> DisableDebugging(This,packageFullName) ) 

#define IPackageDebugSettings2_Suspend(This,packageFullName)	\
    ( (This)->lpVtbl -> Suspend(This,packageFullName) ) 

#define IPackageDebugSettings2_Resume(This,packageFullName)	\
    ( (This)->lpVtbl -> Resume(This,packageFullName) ) 

#define IPackageDebugSettings2_TerminateAllProcesses(This,packageFullName)	\
    ( (This)->lpVtbl -> TerminateAllProcesses(This,packageFullName) ) 

#define IPackageDebugSettings2_SetTargetSessionId(This,sessionId)	\
    ( (This)->lpVtbl -> SetTargetSessionId(This,sessionId) ) 

#define IPackageDebugSettings2_EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames)	\
    ( (This)->lpVtbl -> EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames) ) 

#define IPackageDebugSettings2_ActivateBackgroundTask(This,taskId)	\
    ( (This)->lpVtbl -> ActivateBackgroundTask(This,taskId) ) 

#define IPackageDebugSettings2_StartServicing(This,packageFullName)	\
    ( (This)->lpVtbl -> StartServicing(This,packageFullName) ) 

#define IPackageDebugSettings2_StopServicing(This,packageFullName)	\
    ( (This)->lpVtbl -> StopServicing(This,packageFullName) ) 

#define IPackageDebugSettings2_StartSessionRedirection(This,packageFullName,sessionId)	\
    ( (This)->lpVtbl -> StartSessionRedirection(This,packageFullName,sessionId) ) 

#define IPackageDebugSettings2_StopSessionRedirection(This,packageFullName)	\
    ( (This)->lpVtbl -> StopSessionRedirection(This,packageFullName) ) 

#define IPackageDebugSettings2_GetPackageExecutionState(This,packageFullName,packageExecutionState)	\
    ( (This)->lpVtbl -> GetPackageExecutionState(This,packageFullName,packageExecutionState) ) 

#define IPackageDebugSettings2_RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie)	\
    ( (This)->lpVtbl -> RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie) ) 

#define IPackageDebugSettings2_UnregisterForPackageStateChanges(This,dwCookie)	\
    ( (This)->lpVtbl -> UnregisterForPackageStateChanges(This,dwCookie) ) 


#define IPackageDebugSettings2_EnumerateApps(This,packageFullName,appCount,appUserModelIds,appDisplayNames)	\
    ( (This)->lpVtbl -> EnumerateApps(This,packageFullName,appCount,appUserModelIds,appDisplayNames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPackageDebugSettings2_INTERFACE_DEFINED__ */


#ifndef __ISuspensionDependencyManager_INTERFACE_DEFINED__
#define __ISuspensionDependencyManager_INTERFACE_DEFINED__

/* interface ISuspensionDependencyManager */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_ISuspensionDependencyManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52B83A42-2543-416A-81D9-C0DE7969C8B3")
    ISuspensionDependencyManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterAsChild( 
            /* [annotation][in] */ 
            _In_  HANDLE processHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GroupChildWithParent( 
            /* [annotation][in] */ 
            _In_  HANDLE childProcessHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UngroupChildFromParent( 
            /* [annotation][in] */ 
            _In_  HANDLE childProcessHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISuspensionDependencyManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISuspensionDependencyManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISuspensionDependencyManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISuspensionDependencyManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterAsChild )( 
            ISuspensionDependencyManager * This,
            /* [annotation][in] */ 
            _In_  HANDLE processHandle);
        
        HRESULT ( STDMETHODCALLTYPE *GroupChildWithParent )( 
            ISuspensionDependencyManager * This,
            /* [annotation][in] */ 
            _In_  HANDLE childProcessHandle);
        
        HRESULT ( STDMETHODCALLTYPE *UngroupChildFromParent )( 
            ISuspensionDependencyManager * This,
            /* [annotation][in] */ 
            _In_  HANDLE childProcessHandle);
        
        END_INTERFACE
    } ISuspensionDependencyManagerVtbl;

    interface ISuspensionDependencyManager
    {
        CONST_VTBL struct ISuspensionDependencyManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISuspensionDependencyManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISuspensionDependencyManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISuspensionDependencyManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISuspensionDependencyManager_RegisterAsChild(This,processHandle)	\
    ( (This)->lpVtbl -> RegisterAsChild(This,processHandle) ) 

#define ISuspensionDependencyManager_GroupChildWithParent(This,childProcessHandle)	\
    ( (This)->lpVtbl -> GroupChildWithParent(This,childProcessHandle) ) 

#define ISuspensionDependencyManager_UngroupChildFromParent(This,childProcessHandle)	\
    ( (This)->lpVtbl -> UngroupChildFromParent(This,childProcessHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISuspensionDependencyManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0168 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum AHE_TYPE
    {
        AHE_DESKTOP	= 0,
        AHE_IMMERSIVE	= 1
    } 	AHE_TYPE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0168_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0168_v0_0_s_ifspec;

#ifndef __IExecuteCommandApplicationHostEnvironment_INTERFACE_DEFINED__
#define __IExecuteCommandApplicationHostEnvironment_INTERFACE_DEFINED__

/* interface IExecuteCommandApplicationHostEnvironment */
/* [uuid][object] */ 


EXTERN_C const IID IID_IExecuteCommandApplicationHostEnvironment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18B21AA9-E184-4FF0-9F5E-F882D03771B3")
    IExecuteCommandApplicationHostEnvironment : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [out] */ __RPC__out AHE_TYPE *pahe) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExecuteCommandApplicationHostEnvironmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExecuteCommandApplicationHostEnvironment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExecuteCommandApplicationHostEnvironment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExecuteCommandApplicationHostEnvironment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in IExecuteCommandApplicationHostEnvironment * This,
            /* [out] */ __RPC__out AHE_TYPE *pahe);
        
        END_INTERFACE
    } IExecuteCommandApplicationHostEnvironmentVtbl;

    interface IExecuteCommandApplicationHostEnvironment
    {
        CONST_VTBL struct IExecuteCommandApplicationHostEnvironmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExecuteCommandApplicationHostEnvironment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExecuteCommandApplicationHostEnvironment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExecuteCommandApplicationHostEnvironment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExecuteCommandApplicationHostEnvironment_GetValue(This,pahe)	\
    ( (This)->lpVtbl -> GetValue(This,pahe) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExecuteCommandApplicationHostEnvironment_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0169 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum EC_HOST_UI_MODE
    {
        ECHUIM_DESKTOP	= 0,
        ECHUIM_IMMERSIVE	= ( ECHUIM_DESKTOP + 1 ) ,
        ECHUIM_SYSTEM_LAUNCHER	= ( ECHUIM_IMMERSIVE + 1 ) 
    } 	EC_HOST_UI_MODE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0169_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0169_v0_0_s_ifspec;

#ifndef __IExecuteCommandHost_INTERFACE_DEFINED__
#define __IExecuteCommandHost_INTERFACE_DEFINED__

/* interface IExecuteCommandHost */
/* [uuid][object] */ 


EXTERN_C const IID IID_IExecuteCommandHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4b6832a2-5f04-4c9d-b89d-727a15d103e7")
    IExecuteCommandHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetUIMode( 
            /* [out] */ __RPC__out EC_HOST_UI_MODE *pUIMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExecuteCommandHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExecuteCommandHost * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExecuteCommandHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExecuteCommandHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIMode )( 
            __RPC__in IExecuteCommandHost * This,
            /* [out] */ __RPC__out EC_HOST_UI_MODE *pUIMode);
        
        END_INTERFACE
    } IExecuteCommandHostVtbl;

    interface IExecuteCommandHost
    {
        CONST_VTBL struct IExecuteCommandHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExecuteCommandHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExecuteCommandHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExecuteCommandHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExecuteCommandHost_GetUIMode(This,pUIMode)	\
    ( (This)->lpVtbl -> GetUIMode(This,pUIMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExecuteCommandHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0170 */
/* [local] */ 

#define SID_ExecuteCommandHost IID_IExecuteCommandHost
typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_STATE
    {
        AVS_FULLSCREEN_LANDSCAPE	= 0,
        AVS_FILLED	= ( AVS_FULLSCREEN_LANDSCAPE + 1 ) ,
        AVS_SNAPPED	= ( AVS_FILLED + 1 ) ,
        AVS_FULLSCREEN_PORTRAIT	= ( AVS_SNAPPED + 1 ) 
    } 	APPLICATION_VIEW_STATE;

typedef /* [v1_enum] */ 
enum EDGE_GESTURE_KIND
    {
        EGK_TOUCH	= 0,
        EGK_KEYBOARD	= ( EGK_TOUCH + 1 ) ,
        EGK_MOUSE	= ( EGK_KEYBOARD + 1 ) 
    } 	EDGE_GESTURE_KIND;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0170_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0170_v0_0_s_ifspec;

#ifndef __IApplicationDesignModeSettings_INTERFACE_DEFINED__
#define __IApplicationDesignModeSettings_INTERFACE_DEFINED__

/* interface IApplicationDesignModeSettings */
/* [uuid][object] */ 


EXTERN_C const IID IID_IApplicationDesignModeSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A3DEE9A-E31D-46D6-8508-BCC597DB3557")
    IApplicationDesignModeSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNativeDisplaySize( 
            /* [in] */ SIZE nativeDisplaySizePixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScaleFactor( 
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationViewState( 
            /* [in] */ APPLICATION_VIEW_STATE viewState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComputeApplicationSize( 
            /* [out] */ __RPC__out SIZE *applicationSizePixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsApplicationViewStateSupported( 
            /* [in] */ APPLICATION_VIEW_STATE viewState,
            /* [in] */ SIZE nativeDisplaySizePixels,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor,
            /* [out] */ __RPC__out BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TriggerEdgeGesture( 
            /* [in] */ EDGE_GESTURE_KIND edgeGestureKind) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationDesignModeSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationDesignModeSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationDesignModeSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNativeDisplaySize )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ SIZE nativeDisplaySizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *SetScaleFactor )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewState )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeApplicationSize )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [out] */ __RPC__out SIZE *applicationSizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *IsApplicationViewStateSupported )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState,
            /* [in] */ SIZE nativeDisplaySizePixels,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor,
            /* [out] */ __RPC__out BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *TriggerEdgeGesture )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ EDGE_GESTURE_KIND edgeGestureKind);
        
        END_INTERFACE
    } IApplicationDesignModeSettingsVtbl;

    interface IApplicationDesignModeSettings
    {
        CONST_VTBL struct IApplicationDesignModeSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationDesignModeSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationDesignModeSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationDesignModeSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationDesignModeSettings_SetNativeDisplaySize(This,nativeDisplaySizePixels)	\
    ( (This)->lpVtbl -> SetNativeDisplaySize(This,nativeDisplaySizePixels) ) 

#define IApplicationDesignModeSettings_SetScaleFactor(This,scaleFactor)	\
    ( (This)->lpVtbl -> SetScaleFactor(This,scaleFactor) ) 

#define IApplicationDesignModeSettings_SetApplicationViewState(This,viewState)	\
    ( (This)->lpVtbl -> SetApplicationViewState(This,viewState) ) 

#define IApplicationDesignModeSettings_ComputeApplicationSize(This,applicationSizePixels)	\
    ( (This)->lpVtbl -> ComputeApplicationSize(This,applicationSizePixels) ) 

#define IApplicationDesignModeSettings_IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported)	\
    ( (This)->lpVtbl -> IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported) ) 

#define IApplicationDesignModeSettings_TriggerEdgeGesture(This,edgeGestureKind)	\
    ( (This)->lpVtbl -> TriggerEdgeGesture(This,edgeGestureKind) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationDesignModeSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0171 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum NATIVE_DISPLAY_ORIENTATION
    {
        NDO_LANDSCAPE	= 0,
        NDO_PORTRAIT	= ( NDO_LANDSCAPE + 1 ) 
    } 	NATIVE_DISPLAY_ORIENTATION;

typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_ORIENTATION
    {
        AVO_LANDSCAPE	= 0,
        AVO_PORTRAIT	= ( AVO_LANDSCAPE + 1 ) 
    } 	APPLICATION_VIEW_ORIENTATION;

typedef /* [v1_enum] */ 
enum ADJACENT_DISPLAY_EDGES
    {
        ADE_NONE	= 0,
        ADE_LEFT	= 0x1,
        ADE_RIGHT	= 0x2
    } 	ADJACENT_DISPLAY_EDGES;

DEFINE_ENUM_FLAG_OPERATORS(ADJACENT_DISPLAY_EDGES)
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_MIN_WIDTH
    {
        AVMW_DEFAULT	= 0,
        AVMW_320	= 1,
        AVMW_500	= 2
    } 	APPLICATION_VIEW_MIN_WIDTH;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0171_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0171_v0_0_s_ifspec;

#ifndef __IApplicationDesignModeSettings2_INTERFACE_DEFINED__
#define __IApplicationDesignModeSettings2_INTERFACE_DEFINED__

/* interface IApplicationDesignModeSettings2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IApplicationDesignModeSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("490514E1-675A-4D6E-A58D-E54901B4CA2F")
    IApplicationDesignModeSettings2 : public IApplicationDesignModeSettings
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNativeDisplayOrientation( 
            /* [in] */ NATIVE_DISPLAY_ORIENTATION nativeDisplayOrientation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationViewOrientation( 
            /* [in] */ APPLICATION_VIEW_ORIENTATION viewOrientation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAdjacentDisplayEdges( 
            /* [in] */ ADJACENT_DISPLAY_EDGES adjacentDisplayEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsOnLockScreen( 
            /* [in] */ BOOL isOnLockScreen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationViewMinWidth( 
            /* [in] */ APPLICATION_VIEW_MIN_WIDTH viewMinWidth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationSizeBounds( 
            /* [out] */ __RPC__out SIZE *minApplicationSizePixels,
            /* [out] */ __RPC__out SIZE *maxApplicationSizePixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationViewOrientation( 
            /* [in] */ SIZE applicationSizePixels,
            /* [out] */ __RPC__out APPLICATION_VIEW_ORIENTATION *viewOrientation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationDesignModeSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationDesignModeSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationDesignModeSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNativeDisplaySize )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ SIZE nativeDisplaySizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *SetScaleFactor )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewState )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeApplicationSize )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [out] */ __RPC__out SIZE *applicationSizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *IsApplicationViewStateSupported )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState,
            /* [in] */ SIZE nativeDisplaySizePixels,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor,
            /* [out] */ __RPC__out BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *TriggerEdgeGesture )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ EDGE_GESTURE_KIND edgeGestureKind);
        
        HRESULT ( STDMETHODCALLTYPE *SetNativeDisplayOrientation )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ NATIVE_DISPLAY_ORIENTATION nativeDisplayOrientation);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewOrientation )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_ORIENTATION viewOrientation);
        
        HRESULT ( STDMETHODCALLTYPE *SetAdjacentDisplayEdges )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ ADJACENT_DISPLAY_EDGES adjacentDisplayEdges);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsOnLockScreen )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ BOOL isOnLockScreen);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewMinWidth )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_MIN_WIDTH viewMinWidth);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationSizeBounds )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [out] */ __RPC__out SIZE *minApplicationSizePixels,
            /* [out] */ __RPC__out SIZE *maxApplicationSizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationViewOrientation )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ SIZE applicationSizePixels,
            /* [out] */ __RPC__out APPLICATION_VIEW_ORIENTATION *viewOrientation);
        
        END_INTERFACE
    } IApplicationDesignModeSettings2Vtbl;

    interface IApplicationDesignModeSettings2
    {
        CONST_VTBL struct IApplicationDesignModeSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationDesignModeSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationDesignModeSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationDesignModeSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationDesignModeSettings2_SetNativeDisplaySize(This,nativeDisplaySizePixels)	\
    ( (This)->lpVtbl -> SetNativeDisplaySize(This,nativeDisplaySizePixels) ) 

#define IApplicationDesignModeSettings2_SetScaleFactor(This,scaleFactor)	\
    ( (This)->lpVtbl -> SetScaleFactor(This,scaleFactor) ) 

#define IApplicationDesignModeSettings2_SetApplicationViewState(This,viewState)	\
    ( (This)->lpVtbl -> SetApplicationViewState(This,viewState) ) 

#define IApplicationDesignModeSettings2_ComputeApplicationSize(This,applicationSizePixels)	\
    ( (This)->lpVtbl -> ComputeApplicationSize(This,applicationSizePixels) ) 

#define IApplicationDesignModeSettings2_IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported)	\
    ( (This)->lpVtbl -> IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported) ) 

#define IApplicationDesignModeSettings2_TriggerEdgeGesture(This,edgeGestureKind)	\
    ( (This)->lpVtbl -> TriggerEdgeGesture(This,edgeGestureKind) ) 


#define IApplicationDesignModeSettings2_SetNativeDisplayOrientation(This,nativeDisplayOrientation)	\
    ( (This)->lpVtbl -> SetNativeDisplayOrientation(This,nativeDisplayOrientation) ) 

#define IApplicationDesignModeSettings2_SetApplicationViewOrientation(This,viewOrientation)	\
    ( (This)->lpVtbl -> SetApplicationViewOrientation(This,viewOrientation) ) 

#define IApplicationDesignModeSettings2_SetAdjacentDisplayEdges(This,adjacentDisplayEdges)	\
    ( (This)->lpVtbl -> SetAdjacentDisplayEdges(This,adjacentDisplayEdges) ) 

#define IApplicationDesignModeSettings2_SetIsOnLockScreen(This,isOnLockScreen)	\
    ( (This)->lpVtbl -> SetIsOnLockScreen(This,isOnLockScreen) ) 

#define IApplicationDesignModeSettings2_SetApplicationViewMinWidth(This,viewMinWidth)	\
    ( (This)->lpVtbl -> SetApplicationViewMinWidth(This,viewMinWidth) ) 

#define IApplicationDesignModeSettings2_GetApplicationSizeBounds(This,minApplicationSizePixels,maxApplicationSizePixels)	\
    ( (This)->lpVtbl -> GetApplicationSizeBounds(This,minApplicationSizePixels,maxApplicationSizePixels) ) 

#define IApplicationDesignModeSettings2_GetApplicationViewOrientation(This,applicationSizePixels,viewOrientation)	\
    ( (This)->lpVtbl -> GetApplicationViewOrientation(This,applicationSizePixels,viewOrientation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationDesignModeSettings2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0172 */
/* [local] */ 

DEFINE_GUID(SID_URLExecutionContext, 0xFB5F8EBC, 0xBBB6, 0x4D10, 0xA4, 0x61, 0x77, 0x72, 0x91, 0xA0, 0x90, 0x30);
#define STR_TAB_REUSE_IDENTIFIER   L"Tab Reuse Identifier"
#define STR_REFERRER_IDENTIFIER    L"Referrer Identifier"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0172_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0172_v0_0_s_ifspec;

#ifndef __ILaunchTargetMonitor_INTERFACE_DEFINED__
#define __ILaunchTargetMonitor_INTERFACE_DEFINED__

/* interface ILaunchTargetMonitor */
/* [uuid][object] */ 


EXTERN_C const IID IID_ILaunchTargetMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("266FBC7E-490D-46ED-A96B-2274DB252003")
    ILaunchTargetMonitor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMonitor( 
            /* [out] */ __RPC__deref_out_opt HMONITOR *monitor) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILaunchTargetMonitorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILaunchTargetMonitor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILaunchTargetMonitor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILaunchTargetMonitor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitor )( 
            __RPC__in ILaunchTargetMonitor * This,
            /* [out] */ __RPC__deref_out_opt HMONITOR *monitor);
        
        END_INTERFACE
    } ILaunchTargetMonitorVtbl;

    interface ILaunchTargetMonitor
    {
        CONST_VTBL struct ILaunchTargetMonitorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILaunchTargetMonitor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILaunchTargetMonitor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILaunchTargetMonitor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILaunchTargetMonitor_GetMonitor(This,monitor)	\
    ( (This)->lpVtbl -> GetMonitor(This,monitor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILaunchTargetMonitor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0173 */
/* [local] */ 

#define SID_LaunchTargetMonitor __uuidof((struct __declspec(uuid("8D547FA1-CC45-40C8-B7C1-D48C183F13F3")) LaunchTargetMonitor*)0)
typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_SIZE_PREFERENCE
    {
        AVSP_DEFAULT	= 0,
        AVSP_USE_LESS	= 1,
        AVSP_USE_HALF	= 2,
        AVSP_USE_MORE	= 3,
        AVSP_USE_MINIMUM	= 4,
        AVSP_USE_NONE	= 5,
        AVSP_CUSTOM	= 6
    } 	APPLICATION_VIEW_SIZE_PREFERENCE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0173_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0173_v0_0_s_ifspec;

#ifndef __ILaunchSourceViewSizePreference_INTERFACE_DEFINED__
#define __ILaunchSourceViewSizePreference_INTERFACE_DEFINED__

/* interface ILaunchSourceViewSizePreference */
/* [uuid][object] */ 


EXTERN_C const IID IID_ILaunchSourceViewSizePreference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E5AA01F7-1FB8-4830-8720-4E6734CBD5F3")
    ILaunchSourceViewSizePreference : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSourceViewToPosition( 
            /* [out] */ __RPC__deref_out_opt HWND *hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourceViewSizePreference( 
            /* [out] */ __RPC__out APPLICATION_VIEW_SIZE_PREFERENCE *sourceSizeAfterLaunch) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILaunchSourceViewSizePreferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILaunchSourceViewSizePreference * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILaunchSourceViewSizePreference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILaunchSourceViewSizePreference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceViewToPosition )( 
            __RPC__in ILaunchSourceViewSizePreference * This,
            /* [out] */ __RPC__deref_out_opt HWND *hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceViewSizePreference )( 
            __RPC__in ILaunchSourceViewSizePreference * This,
            /* [out] */ __RPC__out APPLICATION_VIEW_SIZE_PREFERENCE *sourceSizeAfterLaunch);
        
        END_INTERFACE
    } ILaunchSourceViewSizePreferenceVtbl;

    interface ILaunchSourceViewSizePreference
    {
        CONST_VTBL struct ILaunchSourceViewSizePreferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILaunchSourceViewSizePreference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILaunchSourceViewSizePreference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILaunchSourceViewSizePreference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILaunchSourceViewSizePreference_GetSourceViewToPosition(This,hwnd)	\
    ( (This)->lpVtbl -> GetSourceViewToPosition(This,hwnd) ) 

#define ILaunchSourceViewSizePreference_GetSourceViewSizePreference(This,sourceSizeAfterLaunch)	\
    ( (This)->lpVtbl -> GetSourceViewSizePreference(This,sourceSizeAfterLaunch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILaunchSourceViewSizePreference_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0174 */
/* [local] */ 

DEFINE_GUID(SID_LaunchSourceViewSizePreference, 0x80605492, 0x67d9, 0x414f, 0xaf, 0x89, 0xa1, 0xcd, 0xf1, 0x24, 0x2b, 0xc1);


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0174_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0174_v0_0_s_ifspec;

#ifndef __ILaunchTargetViewSizePreference_INTERFACE_DEFINED__
#define __ILaunchTargetViewSizePreference_INTERFACE_DEFINED__

/* interface ILaunchTargetViewSizePreference */
/* [uuid][object] */ 


EXTERN_C const IID IID_ILaunchTargetViewSizePreference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F0666C6-12F7-4360-B511-A394A0553725")
    ILaunchTargetViewSizePreference : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTargetViewSizePreference( 
            /* [out] */ __RPC__out APPLICATION_VIEW_SIZE_PREFERENCE *targetSizeOnLaunch) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILaunchTargetViewSizePreferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILaunchTargetViewSizePreference * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILaunchTargetViewSizePreference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILaunchTargetViewSizePreference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetViewSizePreference )( 
            __RPC__in ILaunchTargetViewSizePreference * This,
            /* [out] */ __RPC__out APPLICATION_VIEW_SIZE_PREFERENCE *targetSizeOnLaunch);
        
        END_INTERFACE
    } ILaunchTargetViewSizePreferenceVtbl;

    interface ILaunchTargetViewSizePreference
    {
        CONST_VTBL struct ILaunchTargetViewSizePreferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILaunchTargetViewSizePreference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILaunchTargetViewSizePreference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILaunchTargetViewSizePreference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILaunchTargetViewSizePreference_GetTargetViewSizePreference(This,targetSizeOnLaunch)	\
    ( (This)->lpVtbl -> GetTargetViewSizePreference(This,targetSizeOnLaunch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILaunchTargetViewSizePreference_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0175 */
/* [local] */ 

DEFINE_GUID(SID_LaunchTargetViewSizePreference, 0x26db2472, 0xb7b7, 0x406b, 0x97, 0x2, 0x73, 0xa, 0x4e, 0x20, 0xd3, 0xbf);


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0175_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0175_v0_0_s_ifspec;

#ifndef __ILaunchSourceAppUserModelId_INTERFACE_DEFINED__
#define __ILaunchSourceAppUserModelId_INTERFACE_DEFINED__

/* interface ILaunchSourceAppUserModelId */
/* [uuid][object] */ 


EXTERN_C const IID IID_ILaunchSourceAppUserModelId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("989191AC-28FF-4CF0-9584-E0D078BC2396")
    ILaunchSourceAppUserModelId : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAppUserModelId( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *launchingApp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILaunchSourceAppUserModelIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILaunchSourceAppUserModelId * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILaunchSourceAppUserModelId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILaunchSourceAppUserModelId * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppUserModelId )( 
            __RPC__in ILaunchSourceAppUserModelId * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *launchingApp);
        
        END_INTERFACE
    } ILaunchSourceAppUserModelIdVtbl;

    interface ILaunchSourceAppUserModelId
    {
        CONST_VTBL struct ILaunchSourceAppUserModelIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILaunchSourceAppUserModelId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILaunchSourceAppUserModelId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILaunchSourceAppUserModelId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILaunchSourceAppUserModelId_GetAppUserModelId(This,launchingApp)	\
    ( (This)->lpVtbl -> GetAppUserModelId(This,launchingApp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILaunchSourceAppUserModelId_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0176 */
/* [local] */ 

DEFINE_GUID(SID_LaunchSourceAppUserModelId, 0x2ce78010, 0x74db, 0x48bc, 0x9c, 0x6a, 0x10, 0xf3, 0x72, 0x49, 0x57, 0x23);
#endif // NTDDI_WINBLUE


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0176_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0176_v0_0_s_ifspec;

#ifndef __IInitializeWithWindow_INTERFACE_DEFINED__
#define __IInitializeWithWindow_INTERFACE_DEFINED__

/* interface IInitializeWithWindow */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IInitializeWithWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E68D4BD-7135-4D10-8018-9FB6D9F33FA1")
    IInitializeWithWindow : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializeWithWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInitializeWithWindow * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInitializeWithWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInitializeWithWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IInitializeWithWindow * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        END_INTERFACE
    } IInitializeWithWindowVtbl;

    interface IInitializeWithWindow
    {
        CONST_VTBL struct IInitializeWithWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeWithWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeWithWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeWithWindow_Initialize(This,hwnd)	\
    ( (This)->lpVtbl -> Initialize(This,hwnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeWithWindow_INTERFACE_DEFINED__ */


#ifndef __IHandlerInfo_INTERFACE_DEFINED__
#define __IHandlerInfo_INTERFACE_DEFINED__

/* interface IHandlerInfo */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IHandlerInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("997706ef-f880-453b-8118-39e1a2d2655a")
    IHandlerInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetApplicationDisplayName( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationPublisher( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationIconReference( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHandlerInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IHandlerInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IHandlerInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IHandlerInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationDisplayName )( 
            __RPC__in IHandlerInfo * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationPublisher )( 
            __RPC__in IHandlerInfo * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationIconReference )( 
            __RPC__in IHandlerInfo * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *value);
        
        END_INTERFACE
    } IHandlerInfoVtbl;

    interface IHandlerInfo
    {
        CONST_VTBL struct IHandlerInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHandlerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHandlerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHandlerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHandlerInfo_GetApplicationDisplayName(This,value)	\
    ( (This)->lpVtbl -> GetApplicationDisplayName(This,value) ) 

#define IHandlerInfo_GetApplicationPublisher(This,value)	\
    ( (This)->lpVtbl -> GetApplicationPublisher(This,value) ) 

#define IHandlerInfo_GetApplicationIconReference(This,value)	\
    ( (This)->lpVtbl -> GetApplicationIconReference(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHandlerInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0178 */
/* [local] */ 

#define SID_HandlerInfo IID_IHandlerInfo


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0178_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0178_v0_0_s_ifspec;

#ifndef __IHandlerActivationHost_INTERFACE_DEFINED__
#define __IHandlerActivationHost_INTERFACE_DEFINED__

/* interface IHandlerActivationHost */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IHandlerActivationHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35094a87-8bb1-4237-96c6-c417eebdb078")
    IHandlerActivationHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeforeCoCreateInstance( 
            /* [in] */ __RPC__in REFCLSID clsidHandler,
            /* [in] */ __RPC__in_opt IShellItemArray *itemsBeingActivated,
            /* [in] */ __RPC__in_opt IHandlerInfo *handlerInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeforeCreateProcess( 
            /* [in] */ __RPC__in LPCWSTR applicationPath,
            /* [in] */ __RPC__in LPCWSTR commandLine,
            /* [in] */ __RPC__in_opt IHandlerInfo *handlerInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHandlerActivationHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IHandlerActivationHost * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IHandlerActivationHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IHandlerActivationHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeforeCoCreateInstance )( 
            __RPC__in IHandlerActivationHost * This,
            /* [in] */ __RPC__in REFCLSID clsidHandler,
            /* [in] */ __RPC__in_opt IShellItemArray *itemsBeingActivated,
            /* [in] */ __RPC__in_opt IHandlerInfo *handlerInfo);
        
        HRESULT ( STDMETHODCALLTYPE *BeforeCreateProcess )( 
            __RPC__in IHandlerActivationHost * This,
            /* [in] */ __RPC__in LPCWSTR applicationPath,
            /* [in] */ __RPC__in LPCWSTR commandLine,
            /* [in] */ __RPC__in_opt IHandlerInfo *handlerInfo);
        
        END_INTERFACE
    } IHandlerActivationHostVtbl;

    interface IHandlerActivationHost
    {
        CONST_VTBL struct IHandlerActivationHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHandlerActivationHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHandlerActivationHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHandlerActivationHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHandlerActivationHost_BeforeCoCreateInstance(This,clsidHandler,itemsBeingActivated,handlerInfo)	\
    ( (This)->lpVtbl -> BeforeCoCreateInstance(This,clsidHandler,itemsBeingActivated,handlerInfo) ) 

#define IHandlerActivationHost_BeforeCreateProcess(This,applicationPath,commandLine,handlerInfo)	\
    ( (This)->lpVtbl -> BeforeCreateProcess(This,applicationPath,commandLine,handlerInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHandlerActivationHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0179 */
/* [local] */ 

#define SID_SHandlerActivationHost IID_IHandlerActivationHost
#if (NTDDI_VERSION >= NTDDI_WIN10)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0179_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0179_v0_0_s_ifspec;

#ifndef __IAppActivationUIInfo_INTERFACE_DEFINED__
#define __IAppActivationUIInfo_INTERFACE_DEFINED__

/* interface IAppActivationUIInfo */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IAppActivationUIInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("abad189d-9fa3-4278-b3ca-8ca448a88dcb")
    IAppActivationUIInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMonitor( 
            /* [out] */ __RPC__deref_out_opt HMONITOR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInvokePoint( 
            /* [out] */ __RPC__out POINT *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowCommand( 
            /* [out] */ __RPC__out int *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowUI( 
            /* [out] */ __RPC__out BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyState( 
            /* [out] */ __RPC__out DWORD *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppActivationUIInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppActivationUIInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppActivationUIInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppActivationUIInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitor )( 
            __RPC__in IAppActivationUIInfo * This,
            /* [out] */ __RPC__deref_out_opt HMONITOR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInvokePoint )( 
            __RPC__in IAppActivationUIInfo * This,
            /* [out] */ __RPC__out POINT *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowCommand )( 
            __RPC__in IAppActivationUIInfo * This,
            /* [out] */ __RPC__out int *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowUI )( 
            __RPC__in IAppActivationUIInfo * This,
            /* [out] */ __RPC__out BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyState )( 
            __RPC__in IAppActivationUIInfo * This,
            /* [out] */ __RPC__out DWORD *value);
        
        END_INTERFACE
    } IAppActivationUIInfoVtbl;

    interface IAppActivationUIInfo
    {
        CONST_VTBL struct IAppActivationUIInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppActivationUIInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppActivationUIInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppActivationUIInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppActivationUIInfo_GetMonitor(This,value)	\
    ( (This)->lpVtbl -> GetMonitor(This,value) ) 

#define IAppActivationUIInfo_GetInvokePoint(This,value)	\
    ( (This)->lpVtbl -> GetInvokePoint(This,value) ) 

#define IAppActivationUIInfo_GetShowCommand(This,value)	\
    ( (This)->lpVtbl -> GetShowCommand(This,value) ) 

#define IAppActivationUIInfo_GetShowUI(This,value)	\
    ( (This)->lpVtbl -> GetShowUI(This,value) ) 

#define IAppActivationUIInfo_GetKeyState(This,value)	\
    ( (This)->lpVtbl -> GetKeyState(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppActivationUIInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0180 */
/* [local] */ 

#define SID_AppActivationUIInfo IID_IAppActivationUIInfo
#endif // NTDDI_WIN10
DEFINE_GUID(SID_ShellExecuteNamedPropertyStore, 0xeb84ada2, 0x00ff, 0x4992, 0x83, 0x24, 0xed, 0x5c, 0xe0, 0x61, 0xcb, 0x29);
#endif // NTDDI_WIN8
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
typedef /* [v1_enum] */ 
enum FLYOUT_PLACEMENT
    {
        FP_DEFAULT	= 0,
        FP_ABOVE	= ( FP_DEFAULT + 1 ) ,
        FP_BELOW	= ( FP_ABOVE + 1 ) ,
        FP_LEFT	= ( FP_BELOW + 1 ) ,
        FP_RIGHT	= ( FP_LEFT + 1 ) 
    } 	FLYOUT_PLACEMENT;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0180_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0180_v0_0_s_ifspec;

#ifndef __IContactManagerInterop_INTERFACE_DEFINED__
#define __IContactManagerInterop_INTERFACE_DEFINED__

/* interface IContactManagerInterop */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IContactManagerInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99eacba7-e073-43b6-a896-55afe48a0833")
    IContactManagerInterop : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowContactCardForWindow( 
            /* [in] */ __RPC__in HWND appWindow,
            /* [in] */ __RPC__in_opt IUnknown *contact,
            /* [in] */ __RPC__in const RECT *selection,
            /* [in] */ FLYOUT_PLACEMENT preferredPlacement) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IContactManagerInteropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IContactManagerInterop * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IContactManagerInterop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IContactManagerInterop * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContactCardForWindow )( 
            __RPC__in IContactManagerInterop * This,
            /* [in] */ __RPC__in HWND appWindow,
            /* [in] */ __RPC__in_opt IUnknown *contact,
            /* [in] */ __RPC__in const RECT *selection,
            /* [in] */ FLYOUT_PLACEMENT preferredPlacement);
        
        END_INTERFACE
    } IContactManagerInteropVtbl;

    interface IContactManagerInterop
    {
        CONST_VTBL struct IContactManagerInteropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContactManagerInterop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContactManagerInterop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContactManagerInterop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContactManagerInterop_ShowContactCardForWindow(This,appWindow,contact,selection,preferredPlacement)	\
    ( (This)->lpVtbl -> ShowContactCardForWindow(This,appWindow,contact,selection,preferredPlacement) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContactManagerInterop_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0181 */
/* [local] */ 

#endif // NTDDI_WINBLUE
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0181_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0181_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  HACCEL_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HACCEL * ); 
void                      __RPC_USER  HACCEL_UserFree(     __RPC__in unsigned long *, __RPC__in HACCEL * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     __RPC__in unsigned long *, __RPC__in HBITMAP * ); 

unsigned long             __RPC_USER  HGLOBAL_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HGLOBAL * ); 
void                      __RPC_USER  HGLOBAL_UserFree(     __RPC__in unsigned long *, __RPC__in HGLOBAL * ); 

unsigned long             __RPC_USER  HICON_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HICON * ); 
unsigned char * __RPC_USER  HICON_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * ); 
unsigned char * __RPC_USER  HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * ); 
void                      __RPC_USER  HICON_UserFree(     __RPC__in unsigned long *, __RPC__in HICON * ); 

unsigned long             __RPC_USER  HMENU_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * ); 
void                      __RPC_USER  HMENU_UserFree(     __RPC__in unsigned long *, __RPC__in HMENU * ); 

unsigned long             __RPC_USER  HMONITOR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HMONITOR * ); 
unsigned char * __RPC_USER  HMONITOR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMONITOR * ); 
unsigned char * __RPC_USER  HMONITOR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMONITOR * ); 
void                      __RPC_USER  HMONITOR_UserFree(     __RPC__in unsigned long *, __RPC__in HMONITOR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  PCIDLIST_ABSOLUTE_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PCIDLIST_ABSOLUTE_UserFree(     __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PCUIDLIST_RELATIVE_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCUIDLIST_RELATIVE * ); 
void                      __RPC_USER  PCUIDLIST_RELATIVE_UserFree(     __RPC__in unsigned long *, __RPC__in PCUIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PCUITEMID_CHILD_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCUITEMID_CHILD * ); 
void                      __RPC_USER  PCUITEMID_CHILD_UserFree(     __RPC__in unsigned long *, __RPC__in PCUITEMID_CHILD * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree(     __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PIDLIST_RELATIVE_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_RELATIVE * ); 
void                      __RPC_USER  PIDLIST_RELATIVE_UserFree(     __RPC__in unsigned long *, __RPC__in PIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PITEMID_CHILD_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PITEMID_CHILD * ); 
void                      __RPC_USER  PITEMID_CHILD_UserFree(     __RPC__in unsigned long *, __RPC__in PITEMID_CHILD * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  HACCEL_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HACCEL * ); 
void                      __RPC_USER  HACCEL_UserFree64(     __RPC__in unsigned long *, __RPC__in HACCEL * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree64(     __RPC__in unsigned long *, __RPC__in HBITMAP * ); 

unsigned long             __RPC_USER  HGLOBAL_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HGLOBAL * ); 
void                      __RPC_USER  HGLOBAL_UserFree64(     __RPC__in unsigned long *, __RPC__in HGLOBAL * ); 

unsigned long             __RPC_USER  HICON_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HICON * ); 
unsigned char * __RPC_USER  HICON_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * ); 
unsigned char * __RPC_USER  HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * ); 
void                      __RPC_USER  HICON_UserFree64(     __RPC__in unsigned long *, __RPC__in HICON * ); 

unsigned long             __RPC_USER  HMENU_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * ); 
void                      __RPC_USER  HMENU_UserFree64(     __RPC__in unsigned long *, __RPC__in HMENU * ); 

unsigned long             __RPC_USER  HMONITOR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HMONITOR * ); 
unsigned char * __RPC_USER  HMONITOR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMONITOR * ); 
unsigned char * __RPC_USER  HMONITOR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMONITOR * ); 
void                      __RPC_USER  HMONITOR_UserFree64(     __RPC__in unsigned long *, __RPC__in HMONITOR * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  PCIDLIST_ABSOLUTE_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PCIDLIST_ABSOLUTE_UserFree64(     __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PCUIDLIST_RELATIVE_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCUIDLIST_RELATIVE * ); 
void                      __RPC_USER  PCUIDLIST_RELATIVE_UserFree64(     __RPC__in unsigned long *, __RPC__in PCUIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PCUITEMID_CHILD_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCUITEMID_CHILD * ); 
void                      __RPC_USER  PCUITEMID_CHILD_UserFree64(     __RPC__in unsigned long *, __RPC__in PCUITEMID_CHILD * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree64(     __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PIDLIST_RELATIVE_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_RELATIVE * ); 
void                      __RPC_USER  PIDLIST_RELATIVE_UserFree64(     __RPC__in unsigned long *, __RPC__in PIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PITEMID_CHILD_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PITEMID_CHILD * ); 
void                      __RPC_USER  PITEMID_CHILD_UserFree64(     __RPC__in unsigned long *, __RPC__in PITEMID_CHILD * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumIDList_Next_Proxy( 
    IEnumIDList * This,
    /* [annotation][in] */ 
    _In_  ULONG celt,
    /* [annotation][length_is][size_is][out] */ 
    _Out_writes_to_(celt, *pceltFetched)  PITEMID_CHILD *rgelt,
    /* [annotation][out] */ 
    _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumIDList_Next_Stub( 
    __RPC__in IEnumIDList * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PITEMID_CHILD *rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumFullIDList_Next_Proxy( 
    IEnumFullIDList * This,
    /* [annotation][in] */ 
    _In_  ULONG celt,
    /* [annotation][length_is][size_is][out] */ 
    _Out_writes_to_(celt, *pceltFetched)  PIDLIST_ABSOLUTE *rgelt,
    /* [annotation][out] */ 
    _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumFullIDList_Next_Stub( 
    __RPC__in IEnumFullIDList * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PIDLIST_ABSOLUTE *rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IShellFolder_SetNameOf_Proxy( 
    IShellFolder * This,
    /* [annotation][unique][in] */ 
    _In_opt_  HWND hwnd,
    /* [annotation][in] */ 
    _In_  PCUITEMID_CHILD pidl,
    /* [annotation][string][in] */ 
    _In_  LPCWSTR pszName,
    /* [annotation][in] */ 
    _In_  SHGDNF uFlags,
    /* [annotation][out] */ 
    _Outptr_opt_  PITEMID_CHILD *ppidlOut);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IShellFolder_SetNameOf_Stub( 
    __RPC__in IShellFolder * This,
    /* [unique][in] */ __RPC__in_opt HWND hwnd,
    /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
    /* [string][in] */ __RPC__in_string LPCWSTR pszName,
    /* [in] */ SHGDNF uFlags,
    /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlOut);

/* [local] */ HRESULT STDMETHODCALLTYPE IFolderView2_GetGroupBy_Proxy( 
    IFolderView2 * This,
    /* [annotation][out] */ 
    _Out_  PROPERTYKEY *pkey,
    /* [annotation][out] */ 
    _Out_opt_  BOOL *pfAscending);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IFolderView2_GetGroupBy_Stub( 
    __RPC__in IFolderView2 * This,
    /* [out] */ __RPC__out PROPERTYKEY *pkey,
    /* [out] */ __RPC__out BOOL *pfAscending);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumShellItems_Next_Proxy( 
    IEnumShellItems * This,
    /* [annotation][in] */ 
    _In_  ULONG celt,
    /* [annotation][length_is][size_is][out] */ 
    _Out_writes_to_(celt, *pceltFetched)  IShellItem **rgelt,
    /* [annotation][out] */ 
    _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumShellItems_Next_Stub( 
    __RPC__in IEnumShellItems * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IShellItem **rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IParentAndItem_GetParentAndItem_Proxy( 
    IParentAndItem * This,
    /* [annotation][out] */ 
    _Outptr_opt_  PIDLIST_ABSOLUTE *ppidlParent,
    /* [annotation][out] */ 
    _Outptr_opt_  IShellFolder **ppsf,
    /* [annotation][out] */ 
    _Outptr_opt_  PITEMID_CHILD *ppidlChild);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IParentAndItem_GetParentAndItem_Stub( 
    __RPC__in IParentAndItem * This,
    /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidlParent,
    /* [out] */ __RPC__deref_out_opt IShellFolder **ppsf,
    /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlChild);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumObjects_Next_Proxy( 
    IEnumObjects * This,
    /* [annotation][in] */ 
    _In_  ULONG celt,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][length_is][size_is][out] */ 
    _Out_writes_to_(celt, *pceltFetched)  void **rgelt,
    /* [annotation][out] */ 
    _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumObjects_Next_Stub( 
    __RPC__in IEnumObjects * This,
    /* [in] */ ULONG celt,
    /* [in] */ __RPC__in REFIID riid,
    /* [iid_is][length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) void **rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IBandSite_QueryBand_Proxy( 
    IBandSite * This,
    /* [annotation][in] */ 
    _In_  DWORD dwBandID,
    /* [annotation][out] */ 
    _Outptr_opt_  IDeskBand **ppstb,
    /* [annotation][out] */ 
    _Out_opt_  DWORD *pdwState,
    /* [annotation][size_is][string][out] */ 
    _Out_writes_opt_(cchName)  LPWSTR pszName,
    /* [annotation][in] */ 
    _In_  int cchName);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IBandSite_QueryBand_Stub( 
    __RPC__in IBandSite * This,
    /* [in] */ DWORD dwBandID,
    /* [out] */ __RPC__deref_out_opt IDeskBand **ppstb,
    /* [out] */ __RPC__out DWORD *pdwState,
    /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchName) LPWSTR pszName,
    /* [in] */ int cchName);

/* [local] */ HRESULT STDMETHODCALLTYPE IModalWindow_Show_Proxy( 
    IModalWindow * This,
    /* [annotation][unique][in] */ 
    _In_opt_  HWND hwndOwner);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IModalWindow_Show_Stub( 
    __RPC__in IModalWindow * This,
    /* [unique][in] */ __RPC__in_opt HWND hwndOwner);

/* [local] */ HRESULT STDMETHODCALLTYPE IKnownFolderManager_Redirect_Proxy( 
    IKnownFolderManager * This,
    /* [annotation][in] */ 
    _In_  REFKNOWNFOLDERID rfid,
    /* [annotation][unique][in] */ 
    _In_opt_  HWND hwnd,
    /* [annotation][in] */ 
    _In_  KF_REDIRECT_FLAGS flags,
    /* [annotation][string][unique][in] */ 
    _In_opt_  LPCWSTR pszTargetPath,
    /* [annotation][in] */ 
    _In_  UINT cFolders,
    /* [annotation][unique][size_is][in] */ 
    _In_reads_opt_(cFolders)  const KNOWNFOLDERID *pExclusion,
    /* [annotation][string][out] */ 
    _Outptr_opt_result_maybenull_  LPWSTR *ppszError);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IKnownFolderManager_Redirect_Stub( 
    __RPC__in IKnownFolderManager * This,
    /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
    /* [unique][in] */ __RPC__in_opt HWND hwnd,
    /* [in] */ KF_REDIRECT_FLAGS flags,
    /* [string][unique][in] */ __RPC__in_opt_string LPCWSTR pszTargetPath,
    /* [in] */ UINT cFolders,
    /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cFolders) const GUID *pExclusion,
    /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszError);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_Next_Proxy( 
    IEnumExplorerCommand * This,
    /* [annotation][in] */ 
    _In_  ULONG celt,
    /* [annotation][length_is][size_is][out] */ 
    _Out_writes_to_(celt, *pceltFetched)  IExplorerCommand **pUICommand,
    /* [annotation][out] */ 
    _Out_opt_ _Deref_out_range_(0, celt)  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_Next_Stub( 
    __RPC__in IEnumExplorerCommand * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IExplorerCommand **pUICommand,
    /* [out] */ __RPC__out ULONG *pceltFetched);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



