//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEUtilitiesMenuDelegate : NSObject
{
}

+ (void)updateUtilitiesMenu:(id)arg1 withMenuItemsForInspectorArea:(id)arg2 andLibraryArea:(id)arg3;
+ (void)_addMenuItemsForUtilityArea:(id)arg1 toUtilityMenu:(id)arg2 withKeyBindingSet:(id)arg3;
+ (id)defaultMenuKeyBindingsForGroup:(id)arg1;
+ (id)_libraryCategoryExtensions;
+ (id)_inspectorCategoryExtensions;

@end