//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSDictionary (XCSUtilities)
- (id)pavePath:(id)arg1 components:(id)arg2 object:(id)arg3;
- (void)setDictionary:(id)arg1 forKeyPath:(id)arg2 createIntermediateDictionaries:(BOOL)arg3 replaceIntermediateObjects:(BOOL)arg4;
- (void)processObject:(id)arg1 key:(id)arg2 path:(id *)arg3;
- (id)keyPaths;
- (id)toJSONDataWithError:(id *)arg1;
- (id)toJSONWithError:(id *)arg1;
- (id)toJSON;
@end