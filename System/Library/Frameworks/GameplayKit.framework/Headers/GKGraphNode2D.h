/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode2D : GKGraphNode {

	GKCGraphNode2D* _cGraphNode2D;

}

@property (assign,nonatomic)  position; 
+(id)nodeWithPoint:;
+(BOOL)supportsSecureCoding;
-(GKCGraphNode2D*)cGraphNode2D;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(id)initWithPoint:;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setPosition:;
-()position;
@end
