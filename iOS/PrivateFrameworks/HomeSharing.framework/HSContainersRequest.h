//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest
{
    _Bool _shouldParseResponse;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1;
@property(nonatomic) _Bool shouldParseResponse; // @synthesize shouldParseResponse=_shouldParseResponse;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithAction:(id)arg1;

@end

