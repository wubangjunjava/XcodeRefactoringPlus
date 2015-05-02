//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEEditorIssueMenuController : NSObject <IDEEditorMenuStepperViewDelegate, NSMenuDelegate, DVTInvalidation>
{
    IDEIssueManager *_issueManager;
    IDEEditorContext *_editorContext;
    IDEEditorMenuStepperView *_issueMenuView;
    DVTObservingToken *_issueManagerObservingToken;
    id <DVTCancellable> _issueObservingToken;
    DVTObservingToken *_editorDocumentObservingToken;
    unsigned long long _maxSeverity;
    NSMenu *_menu;
    unsigned long long _numberOfIssuesInSelectedDocument;
    unsigned long long _totalNumberOfIssues;
    NSURL *_selectedDocumentURL;
    NSArray *_selectedDocumentIssues;
    IDEIssue *_selectedIssue;
    BOOL _issuesNeedUpdate;
    BOOL _canMove;
    BOOL _canMoveToFixIt;
    BOOL _showIssueMenuController;
    BOOL _canJump;
}

+ (void)initialize;
@property(readonly) BOOL canJump; // @synthesize canJump=_canJump;
@property BOOL showIssueMenuController; // @synthesize showIssueMenuController=_showIssueMenuController;
- (void).cxx_destruct;
- (void)selectPreviousFixIt;
- (void)selectNextFixIt;
- (void)selectPrevious;
- (void)selectNext;
- (void)_navigateToIssueForward:(BOOL)arg1 byFile:(BOOL)arg2 byFixIt:(BOOL)arg3 fix:(BOOL)arg4;
- (BOOL)canMoveToFixIt;
- (BOOL)canMove;
- (id)menuForStepperView;
- (void)editorNavigatedToAnnotationRepresentedObject:(id)arg1;
- (void)_issueMenuAction:(id)arg1;
- (void)_navigateToIssue:(id)arg1 fixIt:(BOOL)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_updateIssueMenuViewVisibility;
- (id)issueMenuView;
- (void)_updateIssues;
- (void)_issuesNeedUpdate;
- (id)initWithEditorContext:(id)arg1;
- (void)_setIssueManager:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end