//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUCaptureButtonDebugBarContentProvider : GPUDebugBarContentProvider
{
    DVTGradientImageButton *_captureFrameButton;
    NSMenuItem *_captureFrameMenuItem;
    DVTObservingToken *_originalAppDiedObservation;
    DVTObservingToken *_debuggingAdditionObservation;
    DVTObservingToken *_debuggingControllerStateObserver;
    DVTObservingToken *_gpuCaptureUnavailReasonObservation;
    id _windowDidBecomeMainObserver;
    id _activeTabControllerChangedObserver;
    id _debugMenuChangedObserver;
}

+ (BOOL)_getRightClickableButton;
+ (id)iconImage_stopInferior;
+ (id)iconImage_resumeInferior;
+ (id)iconImage_captureFrame;
+ (id)assetBundle;
- (void).cxx_destruct;
- (void)stopDebugSession:(id)arg1;
- (void)_startHiggins:(id)arg1;
- (void)_displayHigginsReportInMainEditor:(id)arg1;
- (void)captureOpenGLFrame:(id)arg1;
- (void)_debugMenuChanged:(id)arg1;
- (void)_activeTabControllerChanged:(id)arg1;
- (void)_rebindMenuItems;
- (void)_windowDidBecomeMain:(id)arg1;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (id)_findMenuItemWithRepresentedObject:(id)arg1 inMenu:(id)arg2;
- (void)_setUpCaptureOpenGLESFrameMenuItem:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateMenus;
- (void)updateCaptureButtonState;
- (void)setCaptureButtonToCapture;
- (void)setCaptureButtonToStop;
- (void)setCaptureButtonToResume;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (void)workspaceDidFinishLoading;
- (id)init;

@end