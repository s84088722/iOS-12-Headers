//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentModel (PreviewGeneration)
- (void)didCancelPreviewGeneratorOperation;
@property(readonly, nonatomic) _Bool requiresNetworkToGeneratePreview;
@property(readonly, nonatomic) _Bool generatePreviewsDuringCloudActivity;
@property(readonly, nonatomic) _Bool generateAsynchronousPreviews;
@property(readonly, nonatomic) _Bool needToGeneratePreviews;
- (void)generatePreviewsInOperation:(id)arg1;
@end

