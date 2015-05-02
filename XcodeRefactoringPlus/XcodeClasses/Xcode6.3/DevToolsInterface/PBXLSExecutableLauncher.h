//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXLSExecutableLauncher : NSObject <XCUnretainedReferent>
{
    PBXLSLaunchSession *_launchSession;
    NSMutableArray *_adaptors;
    XCUnretainedReference *_myUnretainedReference;
}

- (id)unretainedReference;
- (BOOL)supportsCrashCatching;
- (id)byteStreamConsumerToExecutable;
- (id)byteStreamFromExecutable;
- (int)executableProcessID;
- (void)userInterfaceWillBeRemoved;
- (int)executablePlatformExitInformation;
- (int)executableTerminationStatus;
- (void)stopImmediately;
- (void)stop;
- (BOOL)launch;
- (void)adaptorsExecutableDidFinish;
- (void)adaptorsExecutableDidStart;
- (void)adaptorsUnconfigureUserInterface;
- (void)adaptorsConfigureUserInterface;
- (void)adaptorsConfigure;
- (void)adaptorsInstanciate;
- (void)setupLauncher;
- (id)executablePath;
- (id)executableDirectory;
- (id)executableEnvironment;
- (id)executableArguments;
- (void)cleanup;
- (void)_updateAdaptorEnvironmentsToDictionary:(id)arg1;
- (id)_argumentsFromAdaptors;
- (id)adaptors;
- (id)launchConfig;
- (id)executable;
- (id)launchSession;
- (void)setLaunchSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end