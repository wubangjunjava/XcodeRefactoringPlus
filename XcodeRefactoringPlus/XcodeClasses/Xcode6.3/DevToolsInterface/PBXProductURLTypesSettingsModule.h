//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXProductURLTypesSettingsModule : PBXAbstractProductSettingsModule <NSTextViewDelegate, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    PBXExtendedTableView *_urlTypesTable;
    NSTextField *_urlNameField;
    NSTextField *_urlSchemesField;
    NSTextField *_urlIconFileField;
    NSImageView *_urlIconImageView;
    NSButton *_addButton;
    NSButton *_removeButton;
    NSMutableArray *_urlTypes;
    NSArray *_rowsBeingDragged;
    double _viewHeightSansTable;
    long long _numRowsTableSizedTo;
    BOOL _justMadeChange;
}

- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (void)_resizeViewIfNeeded;
- (void)_setIconImage;
- (void)_removeURLTypesForIndices:(id)arg1;
- (void)_insertURLTypes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_insertNewURLType;
- (void)_setValue:(id)arg1 forKey:(id)arg2 inURLType:(id)arg3;
- (id)_urlTypeForIndex:(long long)arg1;
- (void)_saveURLTypesToTarget;
- (void)_getURLTypesFromTarget;
- (void)_productSettingsDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 createRowsFromPasteboard:(id)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (void)tableView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)addNewURLType:(id)arg1;
- (void)takeIconFileFrom:(id)arg1;
- (void)takeSchemesFrom:(id)arg1;
- (void)takeNameFrom:(id)arg1;
- (void)update;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end