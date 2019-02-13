//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCommand.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface FRReportConcernCommand : FCCommand <NSSecureCoding>
{
    NSDictionary *_reportConcernData;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(copy, nonatomic) NSDictionary *reportConcernData; // @synthesize reportConcernData=_reportConcernData;
- (void).cxx_destruct;
- (id)_reportProtobufForReportDataDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithReportConcernDict:(id)arg1;

@end

