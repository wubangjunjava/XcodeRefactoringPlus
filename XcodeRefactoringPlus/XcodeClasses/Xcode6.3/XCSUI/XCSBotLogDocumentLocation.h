//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSBotLogDocumentLocation : DVTDocumentLocation
{
    id _activityLog;
}

@property(readonly) id activityLog; // @synthesize activityLog=_activityLog;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedActivityLog:(id)arg3;

@end