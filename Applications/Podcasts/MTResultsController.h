/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTResultsControllerDelegate;
@class NSString;

@interface MTResultsController : NSObject {

	NSString* title;
	id<MTResultsControllerDelegate> delegate;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) id<MTResultsControllerDelegate> delegate; 
-(id)description;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id<MTResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<MTResultsControllerDelegate>)arg1 ;
-(id)allObjects;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)numberOfObjects;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(void)reloadData;
-(BOOL)hasObjects;
-(unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1 ;
@end

