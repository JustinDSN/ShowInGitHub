/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImageRep.h"

@class NSImage;

@interface IDEIconCreatorImageRep : NSImageRep
{
    NSImage *_baseImage;
    NSImage *_badgeImage;
    BOOL _isDirty;
}

@property NSImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property NSImage *baseImage; // @synthesize baseImage=_baseImage;
- (BOOL)draw;
@property BOOL isDirty; // @synthesize isDirty=_isDirty;

@end
