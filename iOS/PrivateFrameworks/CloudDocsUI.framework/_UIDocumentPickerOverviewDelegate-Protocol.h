//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>

@class NSString, _UIDocumentPickerOverviewViewController;

@protocol _UIDocumentPickerOverviewDelegate <NSObject>
- (void)overviewController:(_UIDocumentPickerOverviewViewController *)arg1 selectedAuxiliaryOptionWithIdentifier:(NSString *)arg2;
- (void)overviewController:(_UIDocumentPickerOverviewViewController *)arg1 selectedDocumentPickerWithIdentifier:(NSString *)arg2;
@end

