//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNActionCustom : SCNAction
{
    struct SCNCActionCustom *_mycaction;
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCustom;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end