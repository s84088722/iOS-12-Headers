//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSNumber, NSString, QLListCellDataGenerationOperation, UIImage;

@protocol QLListCellDataGenerationOperationDelegate <NSObject>
- (void)operation:(QLListCellDataGenerationOperation *)arg1 didGenerateThumbnail:(UIImage *)arg2;
- (void)operation:(QLListCellDataGenerationOperation *)arg1 didDetermineFileSize:(NSNumber *)arg2 fileTypeString:(NSString *)arg3;
@end

