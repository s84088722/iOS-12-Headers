//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSDate, TSKAnnotationAuthor;

@interface TSWPChangeSession : TSPObject
{
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}

- (_Bool)isEqualToSession:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(nonatomic) unsigned int sessionUID;

@end

