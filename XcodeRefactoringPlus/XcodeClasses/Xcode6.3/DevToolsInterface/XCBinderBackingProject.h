//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBinderBackingProject : PBXProject
{
}

- (id)productDirectoryForConfigurationNamed:(id)arg1;
- (id)intermediatesDirectoryForConfigurationNamed:(id)arg1;
- (id)intermediatesLocationForConfigurationNamed:(id)arg1;
- (BOOL)wantsIndex;
- (BOOL)isBinderBackingProject;
- (BOOL)_writeToFileSystemProjectFile:(BOOL)arg1 userFile:(BOOL)arg2 checkNeedsRevert:(BOOL)arg3;

@end