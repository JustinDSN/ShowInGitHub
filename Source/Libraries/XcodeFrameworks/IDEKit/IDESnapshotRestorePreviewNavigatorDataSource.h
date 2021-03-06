/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESnapshotPreviewComparisonEditorDataSource.h>

#import "IDEReviewFilesDataSource-Protocol.h"

@class DVTFilePath, IDENavigatorDataCell, NSArray;

@interface IDESnapshotRestorePreviewNavigatorDataSource : IDESnapshotPreviewComparisonEditorDataSource <IDEReviewFilesDataSource>
{
    IDENavigatorDataCell *_cachedFileReferenceCell;
    NSArray *_navigableItems;
    DVTFilePath *_restoreRootPath;
    DVTFilePath *_extractedSnapshotPath;
}

- (id)contentStringForPrimaryEmptyEditorWithDocumentLocation:(id)arg1;
- (id)contentStringForSecondaryEmptyEditorWithDocumentLocation:(id)arg1;
@property DVTFilePath *extractedSnapshotPath; // @synthesize extractedSnapshotPath=_extractedSnapshotPath;
- (id)fileSystemNavigableItems;
- (id)flatNavigableItems;
- (id)issueNavigableItems;
@property NSArray *navigableItems; // @synthesize navigableItems=_navigableItems;
@property DVTFilePath *restoreRootPath; // @synthesize restoreRootPath=_restoreRootPath;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (BOOL)shouldShowEmptyEditorForPrimaryDocumentLocation:(id)arg1 submodeType:(int)arg2;
- (BOOL)shouldShowEmptyEditorForSecondaryDocumentLocation:(id)arg1 submodeType:(int)arg2;
- (id)workspaceNavigableItems;

@end

