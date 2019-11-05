/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHJSObject.h>
#import <TVHomeSharing/TVHKMediaCategoryTypesFetchControllerDelegate.h>
#import <TVHomeSharing/TVHJSMediaCategoryTypesFetchController.h>
@class NSString;


@protocol TVHJSMediaCategoryTypesFetchController <JSExport>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * logNameSuffix; 
@required
+(id)mediaCategoryTypesFetchControllerWithMediaServer:(id)arg1;
-(NSString *)identifier;
-(void)resume;
-(void)start;
-(void)stop;
-(void)setIdentifier:(id)arg1;
-(void)pause;
-(NSString *)logNameSuffix;
-(void)setLogNameSuffix:(id)arg1;

@end


@class NSString, TVHKMediaCategoryTypesFetchController, NSUUID;

@interface TVHJSMediaCategoryTypesFetchController : TVHJSObject <TVHKMediaCategoryTypesFetchControllerDelegate, TVHJSMediaCategoryTypesFetchController> {

	TVHKMediaCategoryTypesFetchController* _wrappedFetchController;
	NSUUID* _fetchControllerContext;

}

@property (nonatomic,retain) TVHKMediaCategoryTypesFetchController * wrappedFetchController;              //@synthesize wrappedFetchController=_wrappedFetchController - In the implementation block
@property (nonatomic,retain) NSUUID * fetchControllerContext;                                             //@synthesize fetchControllerContext=_fetchControllerContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * logNameSuffix; 
+(id)mediaCategoryTypesFetchControllerWithMediaServer:(id)arg1 ;
-(NSString *)identifier;
-(void)resume;
-(void)start;
-(void)stop;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)pause;
-(id)initWithAppContext:(id)arg1 ;
-(void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2 ;
-(void)controller:(id)arg1 fetchDidFailWithError:(id)arg2 ;
-(NSString *)logNameSuffix;
-(void)setLogNameSuffix:(NSString *)arg1 ;
-(TVHKMediaCategoryTypesFetchController *)wrappedFetchController;
-(void)setFetchControllerContext:(NSUUID *)arg1 ;
-(NSUUID *)fetchControllerContext;
-(void)setWrappedFetchController:(TVHKMediaCategoryTypesFetchController *)arg1 ;
-(id)initWithMediaServer:(id)arg1 appContext:(id)arg2 ;
@end
