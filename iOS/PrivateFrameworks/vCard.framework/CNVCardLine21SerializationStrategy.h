//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/CNVCardLineSerializationStrategyImpl.h>

@class NSArray;

@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl
{
    NSArray *_encodings;
}

+ (id)serializerWithStorage:(id)arg1 encodings:(id)arg2;
- (void).cxx_destruct;
- (void)serializeVersionPlaceholder;
- (id)necessaryEncodingForValue:(id)arg1;
- (id)detectedTypeOfData:(id)arg1;
- (void)_addAutomagicParametersForData:(id)arg1;
- (void)serializeData:(id)arg1;
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
- (void)serializeString:(id)arg1;
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;
- (void)serializeParameters:(id)arg1;
- (id)initWithStorage:(id)arg1 encodings:(id)arg2;
- (id)initWithStorage:(id)arg1;

@end

