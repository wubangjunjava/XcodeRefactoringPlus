//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSServiceHealth : XCSWorkerServiceHealth
{
    NSDictionary *_workers;
}

@property(retain, nonatomic) NSDictionary *workers; // @synthesize workers=_workers;
- (void).cxx_destruct;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end