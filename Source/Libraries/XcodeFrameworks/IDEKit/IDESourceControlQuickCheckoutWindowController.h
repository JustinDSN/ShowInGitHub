/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTReplacementViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class DVTBorderedView, DVTReplacementView, IDESourceControlRepositoryCreationContext, IDESourceControlRepositoryCreationStep, IDESourceControlRequest, IDESourceControlWorkingTree, NSMutableArray, NSString, NSView;

@interface IDESourceControlQuickCheckoutWindowController : NSWindowController <DVTReplacementViewDelegate, NSWindowDelegate>
{
    DVTBorderedView *_borderedView;
    DVTReplacementView *_replacementView;
    IDESourceControlRepositoryCreationContext *_context;
    IDESourceControlRepositoryCreationStep *_currentStep;
    NSMutableArray *_stepHistory;
    NSView *_nextKeyView;
    IDESourceControlWorkingTree *_addedWorkingTree;
    IDESourceControlRequest *_checkoutRequest;
    NSString *_startingLocation;
    BOOL _successfullyCheckedOut;
}

+ (BOOL)handleURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanGoBack;
+ (id)keyPathsForValuesAffectingCanGoForwardOrFinish;
+ (id)keyPathsForValuesAffectingCancelOrShowButtonTitle;
+ (id)keyPathsForValuesAffectingForwardOrFinishButtonTitle;
+ (id)keyPathsForValuesAffectingGlobalDescriptionHidden;
+ (id)keyPathsForValuesAffectingHidePreviousButton;
+ (id)keyPathsForValuesAffectingPreviousOrDontOpenButtonTitle;
+ (id)keyPathsForValuesAffectingTitleString;
+ (id)sharedQuickCheckoutWindowController;
+ (BOOL)shouldRegisterURLHandlerForScheme:(id)arg1;
- (id)_openWindowTerminationDisablingReason;
- (id)_popStepHistoryStack;
- (void)_pushStepOntoHistoryStack:(id)arg1;
- (void)awakeFromNib;
- (BOOL)canGoBack;
- (BOOL)canGoForwardOrFinish;
- (void)cancel;
- (id)cancelOrShowButtonTitle;
- (void)cancelSession:(id)arg1;
- (void)checkoutWithCurrentSourceTree;
@property IDESourceControlRepositoryCreationContext *context; // @synthesize context=_context;
@property IDESourceControlRepositoryCreationStep *currentStep; // @synthesize currentStep=_currentStep;
- (id)forwardOrFinishButtonTitle;
- (BOOL)globalDescriptionHidden;
- (void)goBack:(id)arg1;
- (void)goNextOrFinish:(id)arg1;
- (BOOL)hidePreviousButton;
- (id)previousOrDontOpenButtonTitle;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)showWithStartingLocation:(id)arg1;
- (id)titleString;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;

@end
