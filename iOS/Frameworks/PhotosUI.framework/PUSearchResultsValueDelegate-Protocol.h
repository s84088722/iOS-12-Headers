//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, PLSearchIndexDateFormatter, PSIDate, PUSearchResultsValue;

@protocol PUSearchResultsValueDelegate <NSObject>
- (NSString *)stringWithStartDate:(PSIDate *)arg1 endDate:(PSIDate *)arg2;
- (PLSearchIndexDateFormatter *)dateFormatter;
- (_Bool)searchIsFinished:(PUSearchResultsValue *)arg1;
@end

