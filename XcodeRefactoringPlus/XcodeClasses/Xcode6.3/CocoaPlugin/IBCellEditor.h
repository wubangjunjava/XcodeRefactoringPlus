//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCellEditor : IBEditor
{
}

+ (id)controlForCell:(id)arg1 inDocument:(id)arg2;
- (void)stringDidEndEditing:(id)arg1 withTextMovement:(long long)arg2 userInfo:(id)arg3 andContext:(void *)arg4;
- (void)growToFitAfterStringEditing:(void *)arg1 userInfo:(id)arg2;
- (void)configureFieldEditor:(id)arg1 context:(void *)arg2 userInfo:(id)arg3;
- (struct CGRect)titleRectForEditingContext:(void *)arg1 userInfo:(id)arg2;
- (BOOL)stringEditingContextForEvent:(id)arg1 context:(void **)arg2 userInfo:(id *)arg3;
- (id)editedTitleKeyPath;
- (id)titleCell;
- (BOOL)isTitleEditable;
- (struct CGRect)rectForTitleEditing;
- (struct CGRect)frame;
- (id)control;
- (id)cell;

@end