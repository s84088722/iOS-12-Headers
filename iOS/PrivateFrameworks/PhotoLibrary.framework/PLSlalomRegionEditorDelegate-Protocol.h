//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLSlalomRegionEditor;

@protocol PLSlalomRegionEditorDelegate <NSObject>
- (void)slalomRegionEditorRequestForceUnzoom:(PLSlalomRegionEditor *)arg1;
- (_Bool)slalomRegionEditorRequestForceZoom:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorEndValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorStartValueChanged:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorDidEndEditing:(PLSlalomRegionEditor *)arg1;
- (void)slalomRegionEditorDidBeginEditing:(PLSlalomRegionEditor *)arg1 withStartHandle:(_Bool)arg2;
@end

