//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol NSItemProviderReading <NSObject>
+ (NSArray *)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id *)arg3;
@end

