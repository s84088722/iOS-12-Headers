//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDTextEditingService, MRTextEditingAttributes, NSString, RTIDataPayload;

@protocol MRDTextEditingServiceDelegate <NSObject>

@optional
- (void)textEditingService:(MRDTextEditingService *)arg1 echoWithText:(NSString *)arg2;
- (void)textEditingServiceTextEditingDidEnd:(MRDTextEditingService *)arg1;
- (void)textEditingService:(MRDTextEditingService *)arg1 attributesDidChange:(MRTextEditingAttributes *)arg2 payload:(RTIDataPayload *)arg3;
- (void)textEditingService:(MRDTextEditingService *)arg1 textDidChange:(NSString *)arg2 payload:(RTIDataPayload *)arg3;
- (void)textEditingService:(MRDTextEditingService *)arg1 textEditingDidBegin:(NSString *)arg2 withAttributes:(MRTextEditingAttributes *)arg3 payload:(RTIDataPayload *)arg4;
@end

