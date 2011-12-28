/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDECommandHandler-Protocol.h"
#import "IDECommandHandlerVendor-Protocol.h"

@class NSAlert;

@interface IDESourceControlCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
    NSAlert *_waitingOnInitialScanAlert;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void)_commitSelectedFilePaths:(id)arg1;
- (id)_initWithSelectionSource:(id)arg1;
- (void)addCommand:(id)arg1;
- (void)askToUpdateBeforeCommittingSelectedFilePaths:(id)arg1;
- (void)commitCommand:(id)arg1;
- (void)commitSelectedFilesCommand:(id)arg1;
- (void)configureForBranchingAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)continuationBlock;
- (void)displayError:(id)arg1;
- (id)filePathsOfSelectedItems;
- (void)goOnlineOfflineCommand:(id)arg1;
- (BOOL)hasBranchesConfigured;
- (BOOL)hasReachableRepository;
- (BOOL)hasReachableWorkingCopy;
- (BOOL)hasSelection;
- (BOOL)hasValidWorkingCopy;
- (BOOL)hasValidWorkspace;
- (void)ignoreCommand:(id)arg1;
- (BOOL)initialWorkspaceScanIsComplete;
- (void)mergeBranchesCommand:(id)arg1;
- (void)performSourceControlUpdateForFiles:(id)arg1;
- (void)presentBranchesNotConfiguredError;
- (void)presentInvalidSelectionError;
- (void)presentNoSelectionError;
- (void)presentNoWorkingCopiesError;
- (void)presentRepositoryUnreachableError;
- (void)presentWaitingForInitialScanToCompleteWithContinuationBlock:(id)arg1;
- (void)presentWorkingCopyUnreachableError;
- (void)pushCommand:(id)arg1;
- (void)quickCheckoutCommand:(id)arg1;
- (void)refreshFileStatusCommand:(id)arg1;
- (void)repositoriesCommand:(id)arg1;
- (void)resolvedCommand:(id)arg1;
- (void)revertCommand:(id)arg1;
- (void)revertCommandAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)selectedNavigableItemArchivableRepresentations;
@property(readonly) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void)updateAllCommand:(id)arg1;
- (void)updateBeforeCommitAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)updateCommand:(id)arg1;
- (void)updateFiles:(id)arg1;
- (void)updateFilesNoUI:(id)arg1;
- (void)updateSelectedFilesCommand:(id)arg1;
- (void)updateSelectedFilesNoUICommand:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly) NSAlert *waitingOnInitialScanAlert; // @synthesize waitingOnInitialScanAlert=_waitingOnInitialScanAlert;
- (id)workspace;
- (id)workspaceDocument;

@end
