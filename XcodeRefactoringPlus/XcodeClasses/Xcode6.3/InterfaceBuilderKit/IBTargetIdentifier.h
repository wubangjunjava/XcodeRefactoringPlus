//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBTargetIdentifier : NSObject
{
    NSWindow *frame;
    NSTimer *timer;
    NSString *groupName;
    BOOL releasesOnOrderOut;
    long long cancelationToken;
}

+ (long long)displayTarget:(struct CGRect)arg1 withCaption:(id)arg2 inWindow:(id)arg3 untilDate:(id)arg4 forIdentificationGroup:(id)arg5;
+ (long long)displayTargets:(id)arg1 withCaptions:(id)arg2 inWindows:(id)arg3 untilDate:(id)arg4 forIdentificationGroup:(id)arg5;
+ (void)orderOutIdentifersWithGroupName:(id)arg1;
+ (void)orderOutIdentifersWithCancelationToken:(long long)arg1;
+ (id)windowForTarget:(struct CGRect)arg1 withCaption:(id)arg2;
+ (id)windowForTargetFraming;
+ (long long)nextCancelationToken;
- (long long)displayTarget:(struct CGRect)arg1 withCaption:(id)arg2 inWindow:(id)arg3;
- (long long)displayTarget:(struct CGRect)arg1 withCaption:(id)arg2 inWindow:(id)arg3 untilDate:(id)arg4;
- (void)setReleasesOnOrderOut:(BOOL)arg1;
- (void)setCancelationToken:(long long)arg1;
- (long long)cancelationToken;
- (void)setGroupName:(id)arg1;
- (id)groupName;
- (void)cancelIdentifier:(id)arg1;
- (void)orderInFrontOf:(id)arg1;
- (void)orderOut;
- (void)setColor:(id)arg1;
- (id)color;
- (void)dealloc;
- (id)init;

@end