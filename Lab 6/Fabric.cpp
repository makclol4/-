#include <iostream>
#include <string>
#include <vector>
#include <locale.h>

// Абстрактный класс Control (базовый)
class Control {
public:
    // расположение контролла
    virtual void setPosition(int x, int y) = 0;
    // получение расположения контролла
    virtual std::pair<int, int> getPosition() = 0;
    virtual ~Control() {}
};

// Подклассы контролов
// наследуются от Control и переопределяют его виртуальные методы
class winForm : public Control {
public:
    void addControl(Control* control) {
        std::cout << "В форму добавлен wincontrol" << std::endl;
    }

    // Реализация виртуальных методов
    void setPosition(int x, int y) override {
        std::cout << "Вызвался setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался getPosition" << std::endl;
        return { 0, 0 };
    }
};

class linForm : public Control {
public:
    void addControl(Control* control) {
        std::cout << "В форму добавлен lincontrol" << std::endl;
    }

    // Реализация виртуальных методов
    void setPosition(int x, int y) override {
        std::cout << "Вызвался setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался getPosition" << std::endl;
        return { 0, 0 };
    }
};

class macForm : public Control {
public:
    void addControl(Control* control) {
        std::cout << "В форму добавлен maccontrol" << std::endl;
    }

    // Реализация виртуальных методов
    void setPosition(int x, int y) override {
        std::cout << "Вызвался setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался getPosition" << std::endl;
        return { 0, 0 };
    }
};

class winLabel : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "winLabel текст установлен: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался winLabel getText" << std::endl;
        return "Sample text";
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался winLabel setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался winLabel getPosition" << std::endl;
        return { 0, 0 };
    }
};

class linLabel : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "linLabel текст установлен: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался linLabel getText" << std::endl;
        return "Sample text";
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался linLabel setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался linLabel getPosition" << std::endl;
        return { 0, 0 };
    }
};

class macLabel : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "macLabel текст установлен: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался macLabel getText" << std::endl;
        return "Sample text";
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался macLabel setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался macLabel getPosition" << std::endl;
        return { 0, 0 };
    }
};

class winTextBox : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "winTextBox текст установлен: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался winTextBox getText" << std::endl;
        return "Sample text";
    }

    void OnValueChanged() {
        std::cout << "Значение winTextBox изменилось" << std::endl;
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался winTextBox setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался winTextBox getPosition" << std::endl;
        return { 0, 0 };
    }
};

class linTextBox : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "linTextBox текст установлен: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался linTextBox getText" << std::endl;
        return "Sample text";
    }

    void OnValueChanged() {
        std::cout << "Значение linTextBox изменилось" << std::endl;
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался linTextBox setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался linTextBox getPosition" << std::endl;
        return { 0, 0 };
    }
};

class macTextBox : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "macTextBox текст установлен: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался macTextBox getText" << std::endl;
        return "Sample text";
    }

    void OnValueChanged() {
        std::cout << "Значение macTextBox изменилось" << std::endl;
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался macTextBox setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался macTextBox getPosition" << std::endl;
        return { 0, 0 };
    }
};

class winComboBox : public Control {
public:
    void setItems(const std::vector<std::string>& items) {
        std::cout << "Элементы winComboBox установлены: " << std::endl;
    }

    void setSelectedIndex(int index) {
        std::cout << "Выбранный индекс в winComboBox selected установлен" << index << std::endl;
    }

    int getSelectedIndex() {
        std::cout << "winComboBox возвращает выбранный индекс" << std::endl;
        return 0;
    }

    std::vector<std::string> getItems() {
        std::cout << "Вызвался winComboBox get items" << std::endl;
        return { "Item 1", "Item 2" };
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался winComboBox setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался winComboBox getPosition" << std::endl;
        return { 0, 0 };
    }
};

class linComboBox : public Control {
public:
    void setItems(const std::vector<std::string>& items) {
        std::cout << "Элементы linComboBox установлены: " << std::endl;
    }

    void setSelectedIndex(int index) {
        std::cout << "Выбранный индекс в linComboBox selected установлен" << index << std::endl;
    }

    int getSelectedIndex() {
        std::cout << "linComboBox возвращает выбранный индекс" << std::endl;
        return 0;
    }

    std::vector<std::string> getItems() {
        std::cout << "Вызвался linComboBox get items" << std::endl;
        return { "Item 1", "Item 2" };
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался linComboBox setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался linComboBox getPosition" << std::endl;
        return { 0, 0 };
    }
};

class macComboBox : public Control {
public:
    void setItems(const std::vector<std::string>& items) {
        std::cout << "Элементы macComboBox установлены: " << std::endl;
    }

    void setSelectedIndex(int index) {
        std::cout << "Выбранный индекс в macComboBox selected установлен" << index << std::endl;
    }

    int getSelectedIndex() {
        std::cout << "macComboBox возвращает выбранный индекс" << std::endl;
        return 0;
    }

    std::vector<std::string> getItems() {
        std::cout << "Вызвался macComboBox get items" << std::endl;
        return { "Item 1", "Item 2" };
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался macComboBox setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался macComboBox getPosition" << std::endl;
        return { 0, 0 };
    }
};

class winButton : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "Установлен текст winButton: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался winButton getText" << std::endl;
        return "Sample text";
    }

    void Click() {
        std::cout << "winButton нажалась" << std::endl;
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался winButton setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался winButton getPosition" << std::endl;
        return { 0, 0 };
    }
};

class linButton : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "Установлен текст linButton: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался linButton getText" << std::endl;
        return "Sample text";
    }

    void Click() {
        std::cout << "linButton нажалась" << std::endl;
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался linButton setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался linButton getPosition" << std::endl;
        return { 0, 0 };
    }
};

class macButton : public Control {
public:
    void setText(const std::string& text) {
        std::cout << "Установлен текст macButton: " << text << std::endl;
    }

    std::string getText() {
        std::cout << "Вызвался macButton getText" << std::endl;
        return "Sample text";
    }

    void Click() {
        std::cout << "macButton нажалась" << std::endl;
    }

    void setPosition(int x, int y) override {
        std::cout << "Вызвался macButton setPosition" << std::endl;
    }

    std::pair<int, int> getPosition() override {
        std::cout << "Вызвался macButton getPosition" << std::endl;
        return { 0, 0 };
    }
};

class winAbstractFactory {
public:
    virtual winForm* createForm() = 0;
    virtual winLabel* createLabel() = 0;
    virtual winTextBox* createTextBox() = 0;
    virtual winComboBox* createComboBox() = 0;
    virtual winButton* createButton() = 0;
    virtual ~winAbstractFactory() {}
};

class linAbstractFactory {
public:
    virtual linForm* createForm() = 0;
    virtual linLabel* createLabel() = 0;
    virtual linTextBox* createTextBox() = 0;
    virtual linComboBox* createComboBox() = 0;
    virtual linButton* createButton() = 0;
    virtual ~linAbstractFactory() {}
};

class macAbstractFactory {
public:
    virtual macForm* createForm() = 0;
    virtual macLabel* createLabel() = 0;
    virtual macTextBox* createTextBox() = 0;
    virtual macComboBox* createComboBox() = 0;
    virtual macButton* createButton() = 0;
    virtual ~macAbstractFactory() {}
};

// Подклассы фабрик для каждой операционной системы
class WindowsFactory : public winAbstractFactory {
public:
    winForm* createForm() override {
        return new winForm();
    }

    winLabel* createLabel() override {
        return new winLabel();
    }

    winTextBox* createTextBox() override {
        return new winTextBox();
    }

    winComboBox* createComboBox() override {
        return new winComboBox();
    }

    winButton* createButton() override {
        return new winButton();
    }
};

class LinuxFactory : public linAbstractFactory {
public:
    linForm* createForm() override {
        return new linForm();
    }

    linLabel* createLabel() override {
        return new linLabel();
    }

    linTextBox* createTextBox() override {
        return new linTextBox();
    }

    linComboBox* createComboBox() override {
        return new linComboBox();
    }

    linButton* createButton() override {
        return new linButton();
    }
};

class MacOSFactory : public macAbstractFactory {
public:
    macForm* createForm() override {
        return new macForm();
    }

    macLabel* createLabel() override {
        return new macLabel();
    }

    macTextBox* createTextBox() override {
        return new macTextBox();
    }

    macComboBox* createComboBox() override {
        return new macComboBox();
    }

    macButton* createButton() override {
        return new macButton();
    }
};

class winClient {
public:
    void run(winAbstractFactory* factory) {
        winForm* form = factory->createForm();
        winLabel* label = factory->createLabel();
        winTextBox* textBox = factory->createTextBox();
        winComboBox* comboBox = factory->createComboBox();
        winButton* button = factory->createButton();

        form->addControl(label);
        form->addControl(textBox);
        form->addControl(comboBox);
        form->addControl(button);

        label->setText("Hello, world!");
        label->setPosition(10, 10);

        textBox->setText("Sample text");
        textBox->setPosition(20, 20);

        comboBox->setItems({ "Item 1", "Item 2" });
        comboBox->setPosition(30, 30);

        button->setText("Click me!");
        button->setPosition(40, 40);

        delete form;
        delete label;
        delete textBox;
        delete comboBox;
        delete button;
    }
};

class linClient {
public:
    void run(linAbstractFactory* factory) {
        linForm* form = factory->createForm();
        linLabel* label = factory->createLabel();
        linTextBox* textBox = factory->createTextBox();
        linComboBox* comboBox = factory->createComboBox();
        linButton* button = factory->createButton();

        form->addControl(label);
        form->addControl(textBox);
        form->addControl(comboBox);
        form->addControl(button);

        label->setText("Hello, world!");
        label->setPosition(10, 10);

        textBox->setText("Sample text");
        textBox->setPosition(20, 20);

        comboBox->setItems({ "Item 1", "Item 2" });
        comboBox->setPosition(30, 30);

        button->setText("Click me!");
        button->setPosition(40, 40);

        delete form;
        delete label;
        delete textBox;
        delete comboBox;
        delete button;
    }
};

class macClient {
public:
    void run(macAbstractFactory* factory) {
        macForm* form = factory->createForm();
        macLabel* label = factory->createLabel();
        macTextBox* textBox = factory->createTextBox();
        macComboBox* comboBox = factory->createComboBox();
        macButton* button = factory->createButton();

        form->addControl(label);
        form->addControl(textBox);
        form->addControl(comboBox);
        form->addControl(button);

        label->setText("Hello, world!");
        label->setPosition(10, 10);

        textBox->setText("Sample text");
        textBox->setPosition(20, 20);

        comboBox->setItems({ "Item 1", "Item 2" });
        comboBox->setPosition(30, 30);

        button->setText("Click me!");
        button->setPosition(40, 40);

        delete form;
        delete label;
        delete textBox;
        delete comboBox;
        delete button;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

#ifdef _WIN32
    WindowsFactory factory;
    winClient client;
    client.run(&factory);
#elif __linux__
    LinuxFactory factory;
    linClient client;
    client.run(&factory);
#elif __APPLE__
    MacOSFactory factory;
    macClient client;
    client.run(&factory);
#else
    std::cerr << "Unsupported operating system" << std::endl;
    return 1;
#endif

    return 0;
}