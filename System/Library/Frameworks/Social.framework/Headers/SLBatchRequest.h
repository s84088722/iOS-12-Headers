/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@class NSMutableArray;

@interface SLBatchRequest : SLRequest {

	NSMutableArray* _requests;

}
-(void)addRequest:(id)arg1 ;
-(id)preparedURLRequest;
-(id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4 ;
@end
