//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFReformattedAddress : NSObject
{
    NSString *_address;
    struct _NSRange _middleTruncationRange;
}

@property(nonatomic) struct _NSRange middleTruncationRange; // @synthesize middleTruncationRange=_middleTruncationRange;
- (id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3;
- (double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic) NSString *domainPart;
@property(readonly, nonatomic) NSString *localPart;
- (id)description;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end

