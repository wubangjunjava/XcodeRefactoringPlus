//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _Xcode3ProjectInfoTreeNode : NSObject
{
    NSArray *_children;
    PBXFileReference *_configBasedOnFile;
    int _type;
    BOOL _expanded;
    BOOL _fileExists;
}

@property(readonly) BOOL fileExists; // @synthesize fileExists=_fileExists;
@property BOOL expanded; // @synthesize expanded=_expanded;
@property(readonly) int type; // @synthesize type=_type;
@property(retain, nonatomic) PBXFileReference *configBasedOnFile; // @synthesize configBasedOnFile=_configBasedOnFile;
@property(retain) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (long long)compareByName:(id)arg1;
- (id)basedOnFileColumnIcon;
- (id)configurationColumnIcon;
- (void)setBasedOnFile:(id)arg1;
- (id)basedOnFile;
@property(readonly, copy) NSString *displayName;

@end