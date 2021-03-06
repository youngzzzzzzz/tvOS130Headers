/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:41 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Arcade.app/Arcade
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISearchContainerViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@interface Arcade.SearchViewController : UISearchContainerViewController <UISearchControllerDelegate, UISearchResultsUpdating> {

	 objectGraph;
	 storeDataProvider;
	 artworkLoader;
	 searchResultsContainerViewController;
	 actionRunner;
	 pendingSearchAction;
	 lastMatchedProductId;
	 scheduledSearchUpdate;

}
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)initWithSearchController:(id)arg1 ;
@end

