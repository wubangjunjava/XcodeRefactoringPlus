//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNLookAtConstraint : SCNConstraint
{
    id _reserved;
    SCNNode *_target;
    BOOL _gimbalLockEnabled;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)lookAtConstraintWithTarget:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) SCNNode *target;
@property(nonatomic) BOOL gimbalLockEnabled;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end