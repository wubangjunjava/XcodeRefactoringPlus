//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXHeadersBuildPhase : PBXBuildPhase
{
}

+ (id)allowedFileTypes;
+ (id)defaultName;
+ (id)identifier;
- (void)buildFileDidReorder:(id)arg1 oldIndex:(long long)arg2 newIndex:(long long)arg3;
- (void)buildFileWillBeRemoved:(id)arg1;
- (void)buildFileWasAdded:(id)arg1;
- (Class)dependencyGraphSnapshotClass;
- (id)primaryAttributeForBuildFile:(id)arg1;

@end