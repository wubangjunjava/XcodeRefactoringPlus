//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SCNIKConstraintJSExport <JSExport>
+ (id)inverseKinematicsConstraintWithChainRootNode:(SCNNode *)arg1;
@property(nonatomic) struct SCNVector3 targetPosition;
@property(readonly, nonatomic) SCNNode *chainRootNode;
- (double)maxAllowedRotationAngleForJoint:(SCNNode *)arg1;
- (void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(SCNNode *)arg2;
@end