/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/NSCopying.h>
#import <RelevanceEngine/NSCoding.h>

@protocol REElementActionDelegate;
@interface REElementAction : NSObject <NSCopying, NSCoding> {

	id<REElementActionDelegate> _delegate;
	BOOL _forceExecution;

}

@property (assign,nonatomic) BOOL forceExecution;                                      //@synthesize forceExecution=_forceExecution - In the implementation block
@property (assign,nonatomic,__weak) id<REElementActionDelegate> delegate; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<REElementActionDelegate>)delegate;
-(void)setDelegate:(id<REElementActionDelegate>)arg1 ;
-(void)setForceExecution:(BOOL)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(void)_didFinish:(BOOL)arg1 ;
-(BOOL)forceExecution;
@end

