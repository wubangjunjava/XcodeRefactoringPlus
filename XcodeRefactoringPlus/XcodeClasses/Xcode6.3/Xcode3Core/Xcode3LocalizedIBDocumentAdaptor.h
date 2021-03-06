//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3LocalizedIBDocumentAdaptor : IDELocalizedResourceAdaptor
{
    NSMutableDictionary *_stringsCache;
    NSDictionary *_baseStrings;
    NSDictionary *_commentsByKey;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
+ (id)adaptedResourcesForPopulationContext:(id)arg1;
@property(retain) NSDictionary *commentsByKey; // @synthesize commentsByKey=_commentsByKey;
@property(retain) NSDictionary *baseStrings; // @synthesize baseStrings=_baseStrings;
- (void).cxx_destruct;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2;

@end