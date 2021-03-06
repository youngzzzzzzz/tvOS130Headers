/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutDimension.h>
#import <Foundation/NSCompositeLayoutAnchor.h>

@class NSLayoutAnchor, NSArray;

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutAnchor* _minuend;
	NSLayoutAnchor* _subtrahend;

}

@property (readonly) NSArray * _childAnchors; 
+(id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS67)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(double)_valueInEngine:(id)arg1 ;
-(id)initWithMinuend:(id)arg1 subtrahend:(id)arg2 ;
@end

