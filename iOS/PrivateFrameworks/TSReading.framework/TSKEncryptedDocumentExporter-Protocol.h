//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKExporter-Protocol.h>

@class NSString;

@protocol TSKEncryptedDocumentExporter <TSKExporter>
- (void)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@optional
- (void)setCopyPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
- (void)setPrintPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
@end

