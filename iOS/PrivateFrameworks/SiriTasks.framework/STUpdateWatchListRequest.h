//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest
{
    NSArray *_contentIdentifiersToAdd;
    NSArray *_contentIdentifiersToRemove;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, setter=_setContentIdentifiersToRemove:) NSArray *contentIdentifiersToRemove; // @synthesize contentIdentifiersToRemove=_contentIdentifiersToRemove;
@property(copy, nonatomic, setter=_setContentIdentifiersToAdd:) NSArray *contentIdentifiersToAdd; // @synthesize contentIdentifiersToAdd=_contentIdentifiersToAdd;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

