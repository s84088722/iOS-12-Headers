/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicy.h>

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {

	NSString* _data;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)_setData:(id)arg1 ;
-(id)_policyForWAPProvisioningXMLData;
-(id)_wbxmlPolicyDict;
-(id)perDomainDictsForPolicy;
-(id)data;
@end

