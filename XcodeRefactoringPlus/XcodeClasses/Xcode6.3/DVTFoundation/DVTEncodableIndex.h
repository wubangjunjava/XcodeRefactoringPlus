//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTEncodableIndex : NSObject
{
    NSMutableDictionary *_identifiersToEntries;
    NSLock *_indexLock;
    id <DVTEncodableIndexDelegate> _delegate;
}

@property(nonatomic) __weak id <DVTEncodableIndexDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_primitiveRemoveItemForIdentifier:(id)arg1;
- (void)_lockIndexDuringBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)allIdentifiers;
- (void)removeItemsForIdentifiers:(id)arg1;
- (void)setItem:(id)arg1 forIdentifier:(id)arg2 withTimestamp:(double)arg3;
- (id)itemForIdentifier:(id)arg1;
- (id)plistRepresentation;
- (void)loadIndexFromFile:(id)arg1 validationBlock:(CDUnknownBlockType)arg2;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (id)init;

@end