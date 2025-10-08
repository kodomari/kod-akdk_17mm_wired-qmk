# kod-akdk_17mm_wired QMK Firmware

RP2040-ONEを使用した分割式カスタムキーボード用のQMKファームウェアです。

## 使用方法

1. `keyboards/handwired/` の内容をQMKファームウェアディレクトリにコピー
2. `qmk compile -kb handwired/ro_split_exact_right -km default`
3. `elf2uf2-rs` でUF2変換
4. RP2040-ONEにフラッシュ

詳細は各ディレクトリ内のファイルを参照してください。
