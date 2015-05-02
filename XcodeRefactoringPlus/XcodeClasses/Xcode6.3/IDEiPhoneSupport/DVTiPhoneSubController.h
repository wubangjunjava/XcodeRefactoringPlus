//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTiPhoneSubController : NSObject <DVTInvalidation>
{
    DVTAbstractiOSDevice *_device;
}

+ (id)keyPathsForValuesAffectingDeviceIdentifier;
+ (void)initialize;
@property(retain) DVTAbstractiOSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(readonly) NSString *deviceIdentifier;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end