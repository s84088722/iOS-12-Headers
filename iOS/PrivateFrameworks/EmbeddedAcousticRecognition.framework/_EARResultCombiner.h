//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARResultCombiner : NSObject
{
    struct unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner>> _combiner;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)combinedResultWithSystemResults:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

