//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/CNVCardLine.h>

@class NSData;

@interface CNVCardLiteralLine : CNVCardLine
{
    NSData *_literalValue;
}

+ (id)lineWithLiteralValue:(id)arg1;
- (void).cxx_destruct;
- (void)serializeWithStrategy:(id)arg1;
- (id)initWithLiteralValue:(id)arg1;

@end

