//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXProjectGroupInspectorPane : PBXProjectInspectorPaneModule
{
    NSTextField *_nameTextField;
    NSTextField *_absolutePathTextField;
    NSTextField *_projectRootDirectoryTextField;
    NSButton *_projectRootDirectoryChooseButton;
    NSPopUpButton *_projectFormatPopUpButton;
    NSTextField *_projectFormatWarningTextField;
    NSImageView *_projectFormatWarningImageView;
    NSButton *_projectFormatShowConflictsButton;
    NSMatrix *_productDirectoryMatrix;
    NSTextField *_productDirectoryTextField;
    NSButton *_chooseProductDirectoryButton;
    NSMatrix *_intermediatesDirectoryMatrix;
    NSTextField *_intermediatesDirectoryTextField;
    NSButton *_chooseIntermediatesDirectoryButton;
    NSButton *_buildIndependentTargetsInParallelButton;
    NSTextField *_platformDescriptionString;
    NSPopUpButton *_sdkRootDirectoryPopUpButton;
    NSPopUpButton *_scmSystemPopUpButton;
    NSButton *_rebuildIndexButton;
    NSTextField *_organizationNameTextField;
    struct {
        unsigned int beganEditingProductDirectory:1;
        unsigned int beganEditingIntermediatesDirectory:1;
        unsigned int beganEditingSDKRootDirectory:1;
        unsigned int showingSheetOnFloatingInspector:1;
        unsigned int RESERVED:29;
    } _pgipFlags;
    BOOL _showingSheetOnFloatingInspector;
}

+ (id)projectFileDirectoryString;
- (void)configureSCMRoots:(id)arg1;
- (void)_rootEditorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)editRootsInSheet;
- (BOOL)isSCMEnabled;
- (void)_projectRootChanged:(id)arg1;
- (void)_updateProjectRootsTextFieldForProject:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)_scmWasEnabledOrDisabled:(id)arg1;
- (void)indexingChanged:(id)arg1;
- (id)allowedProjectFormatsSortDescriptors;
- (id)allowedProjectFormats;
- (void)rebuildIndex:(id)arg1;
- (void)_rebuildIndexSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)chooseSDKRootDirectory:(id)arg1;
- (void)buildIndependentTargetsInParallelClicked:(id)arg1;
- (void)chooseIntermediatesDirectoryPath:(id)arg1;
- (void)_setIntermediatesDirSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)chooseIntermediatesDirectoryType:(id)arg1;
- (void)showProjectFormatConflicts:(id)arg1;
- (void)chooseProductDirectoryPath:(id)arg1;
- (void)_setProductDirSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)chooseProductDirectoryType:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)_updateOrganizationNameTextField;
- (void)_reloadCustomTemplateMacroDefinitions;
- (void)_populateSDKPopupWithProject:(id)arg1;
- (void)viewDidLoad;
- (void)_configurationNamesChangedInProject:(id)arg1;
- (void)_updateConfigurationObservers;
- (void)buildSettingsChanged:(id)arg1;
- (BOOL)hasIndex;
- (void)_enableBuildDirectoryUI;
- (void)_setIntermediatesDirectory;
- (void)_setProductDirectory;
- (void)dealloc;

@end