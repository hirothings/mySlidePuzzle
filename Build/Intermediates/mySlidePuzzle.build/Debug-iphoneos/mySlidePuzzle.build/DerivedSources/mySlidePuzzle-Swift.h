// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC13mySlidePuzzle8AppConst")
@interface AppConst : UIView
+ (CGRect)screenBounds;
+ (CGSize)screenSize;
+ (CGFloat)screenScale;
+ (CGFloat)statusBar_height;
+ (CGFloat)navbar_height;
+ (CGFloat)header_height;
+ (UIColor * __nonnull)bgColor;
+ (CGFloat)boardWidth;
+ (CGFloat)boardHeight;
+ (CGFloat)pieceSize;
+ (NSInteger)maxPieces;
+ (NSInteger)pieceColumn;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIImageView;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC13mySlidePuzzle11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
@property (nonatomic, strong) UIImageView * __nonnull baseImage;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITouch;
@class UIImage;
@class UIEvent;
@class UILabel;
@class NSBundle;

SWIFT_CLASS("_TtC13mySlidePuzzle18GameViewController")
@interface GameViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIView * __null_unspecified gameStageView;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified compMessage;
@property (nonatomic, strong) UIImageView * __nonnull baseImage;
@property (nonatomic) BOOL gamingFlag;
@property (nonatomic, strong) UIImageView * __nonnull pieceImage;
@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSArray<NSNumber *> * __nonnull ids;
@property (nonatomic, strong) UIImageView * __nonnull emptyPiece;
@property (nonatomic, strong) UIImageView * __nonnull touchPiece;
@property (nonatomic, readonly, strong) UITouch * __nonnull touch;
@property (nonatomic) CGFloat touchLocation_x;
@property (nonatomic) CGFloat touchLocation_y;
@property (nonatomic) BOOL completeFlag;
- (void)viewDidLoad;

/// 画像のクリッピング
///
/// \param image 元画像
///
/// \param x クロップ画像のx座標
///
/// \param y クロップ画像のy座標
///
/// \param w クロップ画像の幅
///
/// \param y クロップ画像の高さ
///
/// \returns  クロップした画像
- (UIImage * __nonnull)cropImage:(UIImage * __nonnull)image x:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h;

/// ピースをシャッフルする
///
/// \param ids ピースID配列
///
/// \returns  シャッフルしたピースID配列
- (NSArray<NSNumber *> * __nonnull)swapPieces:(NSArray<NSNumber *> * __nonnull)ids;

/// シャッフルしたピースの再配置
///
/// \param ids シャッフル済ピースID配列
///
/// \param gameStageView ゲーム画面のView
///
/// \returns  none
- (void)showPieces:(NSArray<NSNumber *> * __nonnull)ids gameStageView:(UIView * __nonnull)gameStageView;

/// ピースタッチ時の処理
- (void)touchesBegan:(NSSet<UITouch *> * __nonnull)touches withEvent:(UIEvent * __nullable)event;

/// ピースの移動
///
/// \param enable _x: ｘ座標に移動できる範囲
///
/// \param enable _y: y座標に移動できる範囲
///
/// \param piece ピース
///
/// \returns  none
- (void)movePiece:(NSInteger)enable_x enable_y:(NSInteger)enable_y piece:(UIImageView * __nonnull)piece;

/// クリア判定
///
/// \param none 
///
/// \returns  クリア判定
- (BOOL)checkComplete;

/// クリア演出
///
/// \param none 
///
/// \returns  none
- (void)showCompleteProduction;

/// ピースの操作の有効・無効を切り替える
///
/// \param flag 操作可能flag
///
/// \returns  none
- (void)toggleUserInteractionEnabled:(BOOL)flag;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSUserDefaults;
@class UIImagePickerController;
@class NSURL;

SWIFT_CLASS("_TtC13mySlidePuzzle18HomeViewController")
@interface HomeViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, readonly, strong) NSUserDefaults * __nonnull defaults;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)animated;

/// UIImagePickerDelegate
- (void)imagePickerController:(UIImagePickerController * __nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * __nonnull)info;

/// STARTボタン押下でフォトライブラリを表示
- (IBAction)onTapStartBtn:(id __nonnull)sender;

/// photoディレクトリを作成
///
/// \param none 
///
/// \returns  photoディレクトリのパス
- (NSURL * __nonnull)setDirectory;

/// photoディレクトリにpng画像を保存
///
/// \param image 保存する画像
///
/// \returns  none
- (void)savePhotoData:(UIImage * __nonnull)image;

/// 画像保存ログを保存
- (void)setImageDataSaveLog;

/// 画像保存ログの読み込み
- (void)getImageDataSaveLog;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;

SWIFT_CLASS("_TtC13mySlidePuzzle12MyPuzzleView")
@interface MyPuzzleView : UIView
@property (nonatomic, weak) IBOutlet UIButton * __null_unspecified playBtn;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified puzzleImageView;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewInit;
@end

@class UIScrollView;

SWIFT_CLASS("_TtC13mySlidePuzzle22MyPuzzleViewController")
@interface MyPuzzleViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified noimageTxt;
@property (nonatomic, weak) IBOutlet UIScrollView * __null_unspecified scrollView;
@property (nonatomic, strong) UIImageView * __nonnull pazzle;
@property (nonatomic, copy) NSString * __nonnull imagePath;
@property (nonatomic, copy) NSArray<NSString *> * __nonnull imageData;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;

/// ローカルストレージのphotoディレクトリを取得
///
/// \param none 
///
/// \returns  photoディレクトリまでのパス
- (NSURL * __nonnull)getPhotoDirectory;

/// ローカルストレージからファイル名を取得
///
/// \param none 
///
/// \returns  ローカルストレージのpngファイル名
- (NSArray<NSString *> * __nullable)getImageDataNames;

/// playボタン押下時のイベント
///
/// \param none 
///
/// \returns  none
- (void)onTapPlayBtn:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(mySlidePuzzle))
+ (UIColor * __nonnull)rgb:(CGFloat)r g:(CGFloat)g b:(CGFloat)b;
+ (UIColor * __nonnull)rgba:(CGFloat)r g:(CGFloat)g b:(CGFloat)b a:(CGFloat)a;
@end


@interface UIScrollView (SWIFT_EXTENSION(mySlidePuzzle))
- (void)touchesBegan:(NSSet<UITouch *> * __nonnull)touches withEvent:(UIEvent * __nullable)event;
@end

#pragma clang diagnostic pop
