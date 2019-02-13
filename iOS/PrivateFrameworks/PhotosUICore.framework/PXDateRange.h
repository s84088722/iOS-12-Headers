//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXDateRange : NSObject <NSCopying>
{
    double _startDate;
    double _endDate;
}

@property(readonly) double endDate; // @synthesize endDate=_endDate;
@property(readonly) double startDate; // @synthesize startDate=_startDate;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isStrictlyBeforeRange:(id)arg1;
- (_Bool)intersectsRange:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;

@end

